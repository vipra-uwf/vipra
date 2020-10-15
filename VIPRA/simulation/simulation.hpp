#ifndef SIMULATION_HPP
#define SIMULATION_HPP

#include <iostream> 

#include "../rapidxml/rapidxml.hpp" // TODO figure out why this is here
#include "../writers/simulation_output_handler.hpp"
#include "../models/pedestrian_dynamics_model.hpp"
#include "clock.hpp"

#include "../entity_sets/calm_pedestrian_set.hpp" // TODO when printDataDELETETHIS is deleted

class SimulationOutputHandler; // TODO forward declaring to resolve bug. remove comment if this is expected

class Simulation
{
    private:
        int timestep;
        PedestrianDynamicsModel* pedestrianDynamicsModel;
        SimulationOutputHandler* simulationOutputHandler;
        Clock clock;
        
    public:
        Simulation();
        Simulation(PedestrianDynamicsModel* pedestrianDynamicsModel);
        void run();

        void setSimulationOutputHandler(
            SimulationOutputHandler* simulationOutputHandler);
        int* getTimestep();
        // TODO getter for ped dynamics model
        void printDataDELETETHIS();
        void testGoalClassDELETETHIS();
};

#endif
