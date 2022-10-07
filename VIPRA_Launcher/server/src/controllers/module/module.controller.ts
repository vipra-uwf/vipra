import express from 'express';


import { Module, ModuleRequest, ModuleUpload } from '../../types/module/module.types';
import { Status } from '../../types/status';
import { ModuleService } from '../../services/module/module.service';
import { EventSystem } from '../events/eventSystem';
import { Nullable, OperationResult } from '../../types/typeDefs';
import { uploadModule } from './filestore';
import { EventHandler, EventType, RequestType } from '../events/eventTypes';
import { BaseController } from '../base.controller';

/**
 * @description Business logic controller for modules
 */
export class ModuleController implements BaseController<Module> {

  private moduleService : ModuleService;

  private eventController : EventSystem;

  constructor(eventController : EventSystem, moduleService : ModuleService) {
    this.moduleService = moduleService;
    this.eventController = eventController;
    this.setupHandlers();
  }

  /**
   * @description Returns all of the modules in the module service
   */
  public async getAll() : Promise<OperationResult<Module[]>> {
    return { status: Status.SUCCESS, object: await this.moduleService.getAll() };
  }

  /**
   * @description Gets the module requested
   * @param {express.Request} req - client request
   */
  public async get(req : express.Request) : Promise<OperationResult<Module>> {
    const id = req.params.id;
    if (id) {
      const module = await this.moduleService.get(id);
      if (module) {
        return { status: Status.SUCCESS, object: module };
      } else {  
        return { status: Status.NOT_FOUND, object: null };
      }
    } else {
      return { status: Status.BAD_REQUEST, object: null };
    }
  }

  /**
   * @description Creates a Module from a request
   * @param {express.Request} req - client request
   */
  public async create(req : express.Request) : Promise<OperationResult<Module>> {

    const upload : Status = await uploadModule(req)
      .catch(()=>{
        return Status.BAD_REQUEST;
      });

    if (upload != Status.SUCCESS) { return { status: upload, object: null }; }

    const request = req as ModuleRequest;
    if (request) {
      const createRequest : Partial<ModuleUpload> = this.createUpload(request);
      if (createRequest) {
        const result = await this.moduleService.create(createRequest);
        if (result.status == Status.CREATED) {
          void this.eventController.emit<Module>(EventType.NEW_MODULE, result.object);
        }
        return result;
      }
    }
    return { status: Status.BAD_REQUEST, object: null };
  }

  /**
   * @description Updates a Module from a request
   * @param {express.Request} req - client request
   */
  public async update(req : express.Request) : Promise<OperationResult<Module>> {
    const id = req.params.id;
    const request = req as ModuleRequest;
    if (id && request.body) {
      const uploadRequest : Partial<ModuleUpload> = this.createUpload(request);
      if (uploadRequest) {
        const result = await this.moduleService.update(id, uploadRequest);
        if (result.status == Status.SUCCESS) {
          void this.eventController.emit<Module>(EventType.UPDATE_MODULE, result.object);
        }
        return result;
      }
    }

    return { status: Status.BAD_REQUEST, object: null };
  }

  /**
   * @description Deletes a module requested
   * @param {express.Request} req - client request
   */
  public async delete(req : express.Request) : Promise<OperationResult<Module>> {
    const id : Nullable<string> = req.params.id || null;
    if (id) {
      const result = await this.moduleService.delete(id);
      if (result.status == Status.SUCCESS) {
        void this.eventController.emit<Module>(EventType.DELETE_MODULE, result.object);
      }
      return result;
    }

    return { status: Status.BAD_REQUEST, object: null };
  }

  /**
   * @description sets up handlers for events
   */
  private setupHandlers() : void {
    this.eventController.setRequestHandler(RequestType.MODULE, this.moduleRequestHandler);
    this.eventController.setRequestHandler(RequestType.ALL_MODULE, this.allModuleRequestHandler);
    this.eventController.subscribe(EventType.FAIL_MODULE, this.moduleFailHandler);
    this.eventController.subscribe(EventType.BUILT_MODULE, this.moduleBuiltHandler);
  }

  /**
   * @description finds the requested module and returns it
   * @param {any} select - information for identifying the module
   */
  private moduleRequestHandler = (select : unknown) : Promise<Nullable<Module>> => {
    const module = select as Partial<Module>;
    if (module.id) {
      return this.moduleService.get(module.id);
    } else {
      return Promise.resolve(null);
    }
  };

  /**
   * @description finds the requested module and returns it
   * @param {any} select - information for identifying the module
   */
  private allModuleRequestHandler = () : Promise<Nullable<Module[]>> => {
    return this.moduleService.getAll();
  };

  /**
   * @description Handles Failed Module Compilation
   * @param {Module} module - module that failed compilation
   */
  private moduleFailHandler : EventHandler = (module : Module) : void => {
    void this.moduleService.update(module.id, {
      module: {
        compiled: false,
      },
    });
  };

  /**
   * @description Handles Successful Module Compilation
   * @param {Module} module - module that was compiled
   */
  private moduleBuiltHandler : EventHandler = (module : Module) : void => {
    void this.moduleService.update(module.id, {
      module: {
        compiled: true,
      },
    });
  };

  /**
   * @description Transforms a request into a ModuleUpload
   * @param {CreateModuleRequest} upload - upload request
   */
  private createUpload(upload : ModuleRequest) : Partial<ModuleUpload> {
    return {
      module: upload.body?.module,
      files: {
        srcFile : (upload.files?.source ? upload.files?.source[0] : undefined),
        headerFile : (upload.files?.header ? upload.files?.header[0] : undefined),
        metaFile : (upload.files?.meta ? upload.files?.meta[0] : undefined),
      },
    };
  }
}