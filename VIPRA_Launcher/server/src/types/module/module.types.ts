import { File } from '../../controllers/module/filestore';

export enum ModuleType {
  MODEL                   = 'pedestrian_dynamics_model',
  GOALS                   = 'goals',
  OUTPUT_DATA_WRITER      = 'output_data_writer',
  INPUT_DATA_LOADER       = 'input_data_loader',
  SIM_OUTPUT_HANDLER      = 'simulation_output_handler',
  PEDESTRIAN_SET          = 'pedestrian_set',
  OBSTACLE_SET            = 'obstacle_set',
  HUMAN_BEHAVIOR_MODEL    = 'human_behavior_model',
  CONFIGURATION_READER    = 'configuration_reader',
  CLOCK                   = 'clock',
  SIMULATION              = 'simulation',
}

export interface ModuleRequest {
  body?: {
    module? : Partial<Module>;
  };
  files? : {
    source? : File[],
    header? : File[],
    meta? : File[]
  };
}


export interface ModuleParam {
  name:string;
  type:string;
  description:string;
  multiple:boolean;
}


export interface Module {
  id : string;
  name : string;
  description : string;
  params : ModuleParam[];
  type : ModuleType;
  compiled : boolean;
}

export interface ModuleUpload {
  module : Partial<Module>;
  files : Partial<{
    srcFile : File;
    headerFile : File;
    metaFile : File;
  }>;
}

/**
 * @description Checks that a partial module is full
 * @param {Partial<Module>} module - module to check
 */
export const isFullModule = (module : Partial<Module>) : boolean => {
  return (
    (module.compiled !== undefined) && 
    (module.description !== undefined) && 
    (module.id !== undefined) && 
    (module.name !== undefined) && 
    (module.params !== undefined) && 
    (module.type !== undefined)
  );
};