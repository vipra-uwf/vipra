#ifndef DATA_HPP
#define DATA_HPP

#include <unordered_map>
#include <string>

#include "../entity_sets/pedestrian_set.hpp"
#include "../entity_sets/obstacle_set.hpp"

// TODO .. we should probably make this into a virtual class..
// the derived class would be CalmData -- Alex
class Data
{
    private:
        PedestrianSet* pedestrianSet;
        ObstacleSet obstacleSet;
		
        //rename to match responsibility
        std::unordered_map<std::string, FLOATING_NUMBER> simulationParams; 
    
    public:
        Data();

        PedestrianSet* getPedestrianSet();
        ObstacleSet* getObstacleSet();
		std::unordered_map<std::string, FLOATING_NUMBER>* getSimulationParams();
        
		void setPedestrianSet(PedestrianSet* pedestrianSet);
        //rename same as above
		void setSimulationParams(
            std::unordered_map<std::string, FLOATING_NUMBER> simulationParams); 
};

#endif
