#include <iostream>
#include <string>

#include <unordered_map>

#include "simulation/simulation.hpp"
#include "readers/xml_reader.hpp"
#include "writers/xml_writer.hpp"
#include "models/calm_pedestrian_model.hpp"
#include "entity_sets/calm_pedestrian_set.hpp"
#include "writers/output_timestep_checker.hpp"

int main()
{
    CalmPedestrianSet calmPedSet;
    Data data;
    data.setPedestrianSet(&calmPedSet);
	
    XMLReader xmlReader;
    xmlReader.storeData(&data);

    CalmPedestrianModel calmModel;
    calmModel.setData(&data);

    XMLWriter xmlWriter; 
    xmlWriter.configureXMLDocumentStructure(
			"./output_data/pedestrian_trajectory.xml", 
			"pedestrian-set", 
			"pedestrian", 
			"1.0", 
			"utf-8");
    
    Simulation simulation(&calmModel);
    
    OutputTimestepChecker outputTimestepChecker;
    outputTimestepChecker.setPedestrianSet(&calmPedSet);
    outputTimestepChecker.setOutputDataWriter(&xmlWriter);
    outputTimestepChecker.setTimestep(simulation.getTimestep()); 
    outputTimestepChecker.setOutputWritingFrequency(250);

    simulation.setOutputCriterionChecker(&outputTimestepChecker);
    simulation.run();

    xmlWriter.writeDocumentContents();


	std::unordered_map<std::string, FLOATING_NUMBER> umap;
	umap = xmlReader.getHashMapDataSet();

	umap["test"] = 25;
	umap["test2"] = 20;

	for(auto x: umap)
	{
		std::cout << x.first << " " << x.second << std::endl;
	}

    return 0;
}
