import child_process from 'child_process';

import { Logger } from '../logging/Logging';
import { config } from "../configuration/config";
import { Status } from "../data_models/Status.e";
import { deleteFile, fileExists, makeDir } from './FileOperations';
import { Module } from '../data_models/module';


const buildModule = async (module : Module, debug : boolean) : Promise<Status> => {
    return new Promise((resolve, reject)=>{
        if(!fileExists(`${module.includePath}`)){
            Logger.error(`Attempt to build module that doesn't exist: ${module.name}:${module.id}`);
            reject(Status.BAD_REQUEST);
        }
        makeDir(`${config.vipra.vipraDir}/build`);
        cleanModuleObject(module.id);
        const command : string = `make module -C ${config.vipra.simsDir} MODULEPATH=${module.dirPath}/${module.name} MODULEID=${module.id} ${debug ? "DEBUG_OUTPUT=1" : ""}`;
        const ps = child_process.exec(command, (error : child_process.ExecException) => {
            if(error){
                Logger.error(`buildModule: ${error.message}`);
                reject(error);
            }
        });
        ps.stderr.on('data', (data : string) => {
            Logger.info(`buildModule: ${data}`);
        });
        ps.stdout.on('data', (data : string) => {
            Logger.info(`buildModule: ${data}`);
        });
        ps.on('close', (code : number, signal : NodeJS.Signals) => {
            if(code !== 0){
                reject(signal);
            }else{
                Logger.info(`Module Build Successful: ${module.name}:${module.id}`);
                resolve(Status.SUCCESS);
            }
        });
    });
};

const compileHumanBehavior = async (debug : boolean) : Promise<Status> => {
    return new Promise((resolve, reject) => {
        const command : string = `make compile -C ${config.vipra.behaviorDir} ${debug ? "DEBUG_OUTPUT=1" : ""}`;
        const ps = child_process.exec(command, (error : child_process.ExecException) => {
            if(error){
                Logger.error(`compileHumanBehavior: ${error.message}`);
                reject(error);
            }
        });
        ps.stderr.on('data', (data : string) => {
            Logger.info(`compileHumanBehavior: ${data}`);
        });
        ps.stdout.on('data', (data : string) => {
            Logger.info(`compileHumanBehavior: ${data}`);
        });
        ps.on('close', (code : number, signal : NodeJS.Signals) => {
            if(code !== 0){
                reject(signal);
            }else{
                Logger.info(`Human Behavior Compiled Successfully`);
                resolve(Status.SUCCESS);
            }
        });
    });
};

const compileGenMain = async (debug : boolean) : Promise<Status> => {
    return new Promise((resolve, reject) =>{
        const command : string = `make generate_main -C ${config.vipra.simsDir} ${debug ? "DEBUG_OUTPUT=1" : ""}`;
        const ps = child_process.exec(command, (error : child_process.ExecException) => {
            if(error){
                Logger.error(`compileGenMain: ${error.message}`);
                reject(error);
            }
        });
        ps.stderr.on('data', (data : string) => {
            Logger.info(`compileGenMain: ${data}`);
        });
        ps.stdout.on('data', (data : string) => {
            Logger.info(`compileGenMain: ${data}`);
        });
        ps.on('close', (code : number, signal : NodeJS.Signals) => {
            if(code !== 0){
                reject(signal);
            }else{
                Logger.info(`Generate Main Compiled Successfully`);
                resolve(Status.SUCCESS);
            }
        });
    });
};

const compileMain = async (debug : boolean) : Promise<Status> => {
    return new Promise((resolve, reject) =>{
        const command : string = `make compileMain -C ${config.vipra.simsDir} MODULEFILE=${config.module.modulesFile} ${debug ? "DEBUG_OUTPUT=1" : ""}`;
        const ps = child_process.exec(command, (error : child_process.ExecException) => {
            if(error){
                Logger.error(`compileMain: ${error.message}`);
                reject(error);
            }
        });
        ps.stderr.on('data', (data : string) => {
            Logger.info(`compileMain: ${data}`);
        });
        ps.stdout.on('data', (data : string) => {
            Logger.info(`compileMain: ${data}`);
        });
        ps.on('close', (code : number, signal : NodeJS.Signals) => {
            if(code !== 0){
                reject(signal);
            }else{
                Logger.info(`Main Compiled Successfully`);
                resolve(Status.SUCCESS);
            }
        });
    });
};

const runSim = (configID : string, mapFile : string, pedestrianFile : string, paramsFile : string, outputFile : string, onExit : (code : number, signal : NodeJS.Signals)=>void) : child_process.ChildProcess =>{
    const configDir = `${config.vipra.simsDir}/${configID}`;
    if(!fileExists(configDir)){
        return null;
    }
    const command : string = `${config.vipra.simsDir}/VIPRA`;
    const args : string[] =  [`${configDir}/sim.config`, paramsFile, pedestrianFile, mapFile, outputFile];
    const ps = child_process.spawn(command, args);

    ps.stderr.on('data', (data : string) => {
        Logger.error(`runSim: ID: ${configID} : ${data}`);
    });
    ps.stdout.on('data', (data : string) => {
        Logger.debug(`runSim: ID: ${configID} : ${data}`);
    });
    ps.on('close', (code : number, signal : NodeJS.Signals) =>{
        onExit(code, signal);
    });
    return ps;
};

const compileSim = (debug : boolean) : Promise<Status> => {
    return new Promise((resolve, reject) =>{
        const command : string = `make simulation -C ${config.vipra.simsDir} ${debug ? "DEBUG_OUTPUT=1" : ""}`;
        const ps = child_process.exec(command, (error : child_process.ExecException) => {
            if(error){
                Logger.error(`compileSim: ${error.message}`);
                reject(error);
            }
        });
        ps.stderr.on('data', (data : string) => {
            Logger.info(`compileSim: ${data}`);
        });
        ps.stdout.on('data', (data : string) => {
            Logger.info(`compileSim: ${data}`);
        });
        ps.on('close', (code : number, signal : NodeJS.Signals) => {
            if(code !== 0){
                reject(signal);
            }else{
                Logger.info(`Simulation Generated Successfully`);
                resolve(Status.SUCCESS);
            }
        });
    });
};

const cleanModuleObject = (id : string) => {
    const objectFile = `${config.vipra.vipraDir}/build/${id}.o`;
    if(fileExists(objectFile)){
        deleteFile(objectFile);
    }
};


export {
    buildModule,
    compileSim,
    compileGenMain,
    runSim,
    compileMain,
    compileHumanBehavior
};