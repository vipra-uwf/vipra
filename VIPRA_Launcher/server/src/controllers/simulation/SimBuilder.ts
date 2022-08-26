/**
 * @module Controllers
 */

import crypto from 'crypto';
import { Nullable, FuncResult, SimState, Protect, FlagMap } from '../../types/typeDefs';
import { Status } from '../../types/Status';
import { Module, ModulesFile, ModuleType } from '../../types/module';
import { Logger } from '../../logging/Logging';
import { inject, singleton } from 'tsyringe';
import { ISimBuilder } from './interfaces/SimBuilder.interface';
import { ProcessRunner } from '../processes/ProcessRunner';
import { FilesController } from '../files/FilesController';
import { FLAGS } from '../../types/flags';
import { config } from '../../configuration/config';

/**
 * @description Handles building/comiplation of modules and the simulation
 */
@singleton()
export class SimBuilder implements ISimBuilder {

  private pr : ProcessRunner;

  private fc : FilesController;

  private debugMode : boolean;

  private simState : SimState;

  private buildMap : Map<string, SimState>;

  private genMainBuilt : boolean;

  private humanBehaviorBuilt : boolean;

  private missingModules : Map<ModuleType, number>;

  constructor(@inject('FilesController') filesController : FilesController, @inject('ProcessRunner') processRunner : ProcessRunner) {
    this.pr = processRunner;
    this.fc = filesController;
    this.genMainBuilt = false;
    this.humanBehaviorBuilt = false;
    this.simState = { ready: false, reason: 'Builder Not Started' };
    this.missingModules = new Map();
    Object.values(ModuleType).forEach((type)=>{
      this.missingModules.set(type, 0);
    });
    this.buildMap = new Map();
  }

  /**
   * @description Returns the state of the build with buildID, null if no build with the provided id
   * @param  {string} buildID - id of build to get state of
   */
  public getBuildStatus(buildID : string) : Nullable<SimState> {
    return this.buildMap.get(buildID) || null;
  }

  /**
   * @description returns the state of the simulation (whether it is ready to run, and why if not)
   */
  public getSimState() : Protect<SimState> {
    return this.simState;
  }

  /**
   * @description Initial build of all modules and simulation
   * @param  {ModulesFile} modules - all installed modules
   */
  public async startup(modules: ModulesFile): Promise<FuncResult> {

    this.setSimState({ ready: false, reason: 'Initial Simulation Compilation Running' });
    await this.pr.precompileHeaders();

    await this.compileAllModules(modules);

    const humanBehavior = await this.pr.compileHumanBehavior(this.debugMode);
    if (humanBehavior === Status.SUCCESS) {
      this.humanBehaviorBuilt = true;
    } else {
      this.setSimState({ ready: false, reason: 'Unable to Build Human Behavior' });
      return { status:Status.INTERNAL_ERROR, message: 'Unable to Build Human Behavior' };
    }

    const simulation = this.compileSimulation(null);
    return simulation;
  }

  /**
   * @description Sets the relevent flags from the command line arguments
   * @param  {FlagMap} argv - command line arguments map
   */
  public setFlags(argv: FlagMap): void {
    this.debugMode = argv.has(FLAGS.DEBUG_BUILD);
  }

  /**
   * @description Compiles the simulation in the background, immediately returns a build id
   * @param {Nullable<string>} buildID - id for current build process, null if new process
   */
  public compileSimulation(buildID : Nullable<string>): FuncResult {
    let bID = crypto.randomUUID();
    if (buildID) {
      bID = buildID;
    } else {
      bID = crypto.randomUUID();
    }

    const missing = this.getMissing();
    if (missing.length !== 0) {
      const state = { ready:false, reason:`Missing Module Types: ${missing.join(', ')}` };
      this.setBuildState(bID, state);
      this.setSimState(state);
      return { status: Status.BAD_REQUEST, message: bID };
    }

    this.setBuildState(bID, { ready:false, reason:'Currently Building Simulation' });
    this.fc.makeDir(`${config.vipra.simsDir}/build`);
    this.fc.makeDir(`${config.vipra.simsDir}/build/${bID}`);

    let generateMain : Promise<Status> = new Promise<Status>((resolve)=>{resolve(Status.SUCCESS);});
    if (!this.genMainBuilt) {
      generateMain = this.pr.compileGenMain(bID, this.debugMode);
    }
    let humanBehavior : Promise<Status> = new Promise<Status>((resolve)=>{resolve(Status.SUCCESS);});
    if (!this.humanBehaviorBuilt) {
      humanBehavior = this.pr.compileHumanBehavior(this.debugMode);
    }

    generateMain
      .then((genmain)=>{
        if (genmain === Status.SUCCESS) {
          this.genMainBuilt = true;
          humanBehavior
            .then((hb)=>{
              if (hb === Status.SUCCESS) {
                this.humanBehaviorBuilt = true;
                this.pr.compileMain(bID, this.debugMode)
                  .then((main)=>{
                    if (main === Status.SUCCESS) {
                      this.pr.compileSim(bID, this.debugMode)
                        .then((sim)=>{
                          if (sim === Status.SUCCESS) {
                            this.stageSim(bID);
                          } else {
                            this.setBuildState(bID, { ready:false, reason:'Unable To Compile Simulation' });
                          }
                        })
                        .catch(()=>{
                          this.setBuildState(bID, { ready:false, reason: 'Unknown Error in Compile Simulation' });
                        });
                    } else {
                      this.genMainBuilt = false;
                      this.setBuildState(bID, { ready:false, reason: 'Unable To Compile Main' });
                    }
                  })
                  .catch(()=>{
                    this.setBuildState(bID, { ready:false, reason: 'Unknown Error in Compile Main' });
                  });
              } else {
                this.humanBehaviorBuilt = false;
                this.setBuildState(bID, { ready:false, reason: 'Unable to Compile Human Behavior' });
              }
            })
            .catch(()=>{
              this.setBuildState(bID, { ready:false, reason: 'Unknown Error in Compile Human Behavior' });
            });
        } else {
          this.setBuildState(bID, { ready:false, reason: 'Unable To Compile Generate Main' });
        }
      })
      .catch(()=>{
        this.setBuildState(bID, { ready:false, reason: 'Unknown Error in Simulation Build' });
      });

    return { status:Status.SUCCESS, message:bID };
  }

  /**
   * @description Builds the added module and rebuilds the simulation with it added
   * @note return value.message holds the buildID for the simulation build process
   * @param  {Module} added - the module that was added
   */
  public addModule(added: Module): FuncResult {
    const buildID = crypto.randomUUID();

    this.pr.buildModule(added, this.debugMode)
      .then((built)=>{
        if (built === Status.SUCCESS) {
          this.addedType(added.type);
          added.compiled = true;
          this.compileSimulation(buildID);
        } else {
          this.setBuildState(buildID, { ready:false, reason:`Unable to build Module: ${added.id}` });
        }
      })
      .catch((error : string)=>{
        Logger.error(`SimBuilder: addModule: ${error}`);
        this.setBuildState(buildID, { ready:false, reason:'Unkown Error in Simulation Build' });
      });

    return { status:Status.SUCCESS, message:buildID };
  }


  /**
   * @description compiles the simulation after having removed a module
   * @param  {Module} removed - module that was removed
   * @returns FuncResult
   */
  public removeModule(removed: Module): FuncResult {
    this.removedType(removed.type);
    const simulation = this.compileSimulation(null);
    return simulation;
  }

  /**
   * @description returns if the simulation is missing any required module types
   */
  public isMissing() : boolean {
    for (const value of this.missingModules) {
      if (value[1] === 0) {
        return true;
      }
    }
    return false;
  }

  /**
   * @description returns an array of module types the simulation is missing
   */
  public getMissing() : ModuleType[] {
    const missing : ModuleType[] = [];
    for (const [key, value] of this.missingModules) {
      if (value === 0) {
        missing.push(key);
      }
    }
    return missing;
  }

  /**
   * @description sets the state of a build
   * @param  {string} buildID - id of the build to update
   * @param  {SimState} state - state of the build
   */
  private setBuildState(buildID : string, state : SimState) : void {
    this.buildMap.set(buildID, state);
  }

  /**
   * @description sets the simulation state
   * @param  {SimState} state - the state of the simulation
   */
  private setSimState(state : SimState) : void {
    this.simState = state;
  }

  /**
   * @description Attempts to compile each module in modules
   *
   * @async
   * @param  {ModulesFile} modules - Object with all modules to be compiled
   */
  private async compileAllModules(modules : ModulesFile) : Promise<void> {
    for (const key in modules) {
      if ({}.hasOwnProperty.call(modules, key)) {
        for (const module of modules[key as keyof ModulesFile]) {
          const built = await this.pr.buildModule(module, this.debugMode);
          if (built === Status.SUCCESS) {
            module.compiled = true;
            this.addedType(module.type);
          }
        }
      }
    }
  }


  /**
   * @description moves the completed simulation to the proper spot, cleans up build objects
   * @param  {string} bID - build id of simulation build
   */
  private stageSim(bID : string) : void {
    const buildDir = `${config.vipra.simsDir}/build/${bID}`;
    this.setSimState({ ready:true, reason:null });
    this.setBuildState(bID, { ready:true, reason:'Successfully Finished Build' });
    this.fc.moveFile(`${buildDir}/VIPRA`, `${config.vipra.simsDir}/VIPRA`);
    this.fc.deleteDir(buildDir, true);
  }


  /**
   * @description updates the count of modules of type
   * @param  {ModuleType} type - type of module removed
   */
  private removedType(type : ModuleType) : void {
    const count = this.missingModules.get(type) || 0;
    const newCount = count > 0 ? count - 1 : 0;
    this.missingModules.set(type, newCount);
  }


  /**
   * @description increases the count of modules of type
   * @param  {ModuleType} type - type of module added
   * @returns void
   */
  private addedType(type : ModuleType) : void {
    this.missingModules.set(type, this.missingModules.get(type) || 0 + 1);
  }
}