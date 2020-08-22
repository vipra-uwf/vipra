#include <string>
#include <iostream>

#include "entity_sets/obstacle_set.hpp"
#include "simulation/simulation.hpp"
#include "readers/input_xml_reader.hpp"
#include "writers/xml_writer.hpp"
#include "models/calm_pedestrian_model.hpp"
#include "entity_sets/calm_pedestrian_set.hpp"
#include "writers/timestep_output_handler.hpp"

#include "data_set_factory.hpp"

int main()
{
    InputXMLReader inputXMLReader;
    XMLWriter xmlWriter;

    CalmPedestrianSet calmPedSet;
    ObstacleSet obstacleSet;
    std::unordered_map<std::string, FLOATING_NUMBER> simulationParams;
	
    DataSetFactory dataSetFactory; 
    Data data;

    CalmGoals goals;
	CalmPedestrianModel calmModel;
    TimestepOutputHandler timestepOutputHandler;
	
    inputXMLReader.extractFileData(
        "./input_data/a320_144_pedestrians.xml", 
        "pedestrian-set");
    ENTITY_SET pedInputFileData = inputXMLReader.getInputEntities();
	calmPedSet = dataSetFactory.createCalmPedSet(pedInputFileData);

    inputXMLReader.extractFileData(
        "./input_data/a320_144_obstacles.xml",
        "obstacle-set");
    ENTITY_SET obsInputFileData = inputXMLReader.getInputEntities();
	obstacleSet = dataSetFactory.createObstacleSet(obsInputFileData);

    inputXMLReader.extractFileData(
        "./input_data/simulation_params.xml",
        "simulation-parameters");
    ENTITY_SET simParamsFileData = inputXMLReader.getInputEntities();
	simulationParams = dataSetFactory.createSimulationParamsSet(
		simParamsFileData);

    data.setPedestrianSet(&calmPedSet);
    data.setObstacleSet(&obstacleSet);
    data.setSimulationParams(&simulationParams);    

    goals.setData(&data);

	calmModel.setData(&data);
    calmModel.setGoals(&goals);
    
    xmlWriter.configureXMLDocumentStructure(
			"./output_data/pedestrian_trajectory.xml", 
			"pedestrian-set", 
			"pedestrian", 
			"1.0", 
			"utf-8");
    
    Simulation simulation(&calmModel);
    
    timestepOutputHandler.setPedestrianSet(&calmPedSet);
    timestepOutputHandler.setOutputDataWriter(&xmlWriter);
    timestepOutputHandler.setTimestep(simulation.getTimestep()); 
    timestepOutputHandler.setOutputWritingFrequency(250);
    
    simulation.setSimulationOutputHandler(&timestepOutputHandler);
    simulation.run();

    xmlWriter.writeDocumentContents();

    return 0;
}
