const config = require('../../configurations/config');

const { DoesFileExist, DeleteFile } = require('../../controllers/Files/FileOperations');

const { Status } = require('../../configurations/Status');
const { TESTFILE_DIR, CONFIGS_DIR } = require('../TEST_FILES/FILE_PATHS');

const ConfigRepo = new config.repos.mocks.mock_ConfigRepo();
const ConfigManager = new config.simulation.ConfigManager(ConfigRepo);

beforeEach(()=>{
    ConfigRepo.Reset();
});

test('StageConfig', async ()=>{

    let getCalls = 0;
    
    // Attempt to stage existant config
    let result = await ConfigManager.StageConfig("first", CONFIGS_DIR);
    let configExists = await DoesFileExist(CONFIGS_DIR.concat('/sim_config.json'));
    let paramsExists = await DoesFileExist(CONFIGS_DIR.concat('/sim_params.json'));
    expect(result).toBe(true);
    expect(configExists).toBe(true);
    expect(paramsExists).toBe(true);
    getCalls++;
    expect(await DeleteFile(CONFIGS_DIR.concat('/sim_config.json'))).toBe(true);
    expect(await DeleteFile(CONFIGS_DIR.concat('/sim_params.json'))).toBe(true);

    // Attempt to stage non existant config
    result = await ConfigManager.StageConfig("notaconfig", CONFIGS_DIR.concat('/notaconfig'));
    configExists = await DoesFileExist(CONFIGS_DIR.concat('/sim_config.json'));
    paramsExists = await DoesFileExist(CONFIGS_DIR.concat('/sim_params.json'));
    expect(result).toBe(false);
    expect(configExists).toBe(false);
    expect(paramsExists).toBe(false);
    getCalls++;

    expect(ConfigRepo.CallCounts()["GetConfig"]).toBe(getCalls);
});

test('UnStageConfig', async ()=>{
});

test('CreateConfig', async ()=>{

    let createCalls = 0;

    let result = await ConfigManager.CreateConfig({"test": "testvalue"}, {"param": "paramValue"});
    expect(result).not.toBeNull();
    createCalls++;

    expect(ConfigRepo.CallCounts()["Create"]).toBe(createCalls);
});

test('DeleteConfig', async ()=>{

    let deleteCalls = 0;

    // Attempt to delete exitant config
    let result = await ConfigManager.DeleteConfig("first");
    deleteCalls++;
    expect(result).toBe(Status.SUCCESS);

    // Attempt to delete non existant config
    result = await ConfigManager.DeleteConfig("notaconfig");
    deleteCalls++;
    expect(result).toBe(Status.NOT_FOUND);

    expect(ConfigRepo.CallCounts()["Delete"]).toBe(deleteCalls);
});