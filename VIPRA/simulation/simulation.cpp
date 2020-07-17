#include "simulation.hpp"


Simulation::Simulation()
{
    this->timestep = 0;
}

Simulation::Simulation(PedestrianDynamicsModel* pedestrianDynamicsModel)
{
    this->pedestrianDynamicsModel = pedestrianDynamicsModel;
}

void Simulation::setOutputCriterionChecker(OutputCriterionChecker* outputCriterionChecker)
{
    this->outputCriterionChecker = outputCriterionChecker;
}



//pedestrian dynamics model
    //input to model - pedestrians, layout, goal for each pedestrian
        //goals will likely need to be defined as a template class or function pointer
            //two goals - one for simulation, one for each pedestrian
    //how each pedestrian will move
    //output - positions of the pedestrians, velocity, additional movement characteristics
        //define an output format similar to our input format
//human behavior model
//policy
//ODE solver
//ODE solver - look into boost ode solvers
void Simulation::run()
{
    //until goal is met
        //on pedestrian dynamics model, do precompute
        //on pedestrian dynamics model, do update


    // TODO .. this should probably be a field in the simulation -- Alex
    Clock clock;
    clock.start();
    clock.printRealStartTime();
    
    this->pedestrianDynamicsModel->precompute();

    while(this->timestep < 5000)
    {
        if(outputCriterionChecker->isOutputCriterionMet())
        {
            outputCriterionChecker->writeData();
            
            // -- delete this block once we start getting code that changes pedestrian locations -- alex
            Data* data = this->pedestrianDynamicsModel->getData();
            for(int i = 0; i < data->getPedestrianSet()->getNumPedestrians(); i++)
            {
                if(this->timestep < 1500)
                {
                    (data->getPedestrianSet()->getPedestrianCoordinates()->at(i)).coordinates[1] *= 0.7;
                }
                else
                {
                    if((data->getPedestrianSet()->getPedestrianCoordinates()->at(i)).coordinates[0] * 1.1 < 23.25)
                    {
                        (data->getPedestrianSet()->getPedestrianCoordinates()->at(i)).coordinates[0] *= 1.1;
                    }
                }
            }
            // -- delete this block once we start getting code that changes pedestrian locations -- alex
        }

        clock.addSimulationTimeMilliseconds(150); //150 is arbitrary, use whatever ms is needed
        this->timestep++;
    }

    // TODO this will be removed once our debugger segfault is resolved
    printDataDELETETHIS();

    clock.stop();
    clock.printRealEndTime();
    clock.printRealDuration();
    clock.printSimulationDuration();
}

int* Simulation::getTimestep()
{
    return &this->timestep;
}

void Simulation::printDataDELETETHIS()
{
    Data* data = this->pedestrianDynamicsModel->getData();

	/*
    std::cout << "Pedestrians: " << std::endl; 

    for(int i = 0; i < (data->getPedestrianSet()->getNumPedestrians()); i++)
    {
        std::cout
        << i 
        << " | coordinates = (" << (data->getPedestrianSet()->getPedestrianCoordinates()->at(i)).coordinates[0] << ", " 
        << (data->getPedestrianSet()->getPedestrianCoordinates()->at(i)).coordinates[1] << ")"
        << " | speed = " << (*data->getPedestrianSet()->getSpeeds())[i] 
        << " | mass = " << (*data->getPedestrianSet()->getMasses())[i] 
        << " | reaction_time = " << (*data->getPedestrianSet()->getReactionTimes())[i] 
        << " | desired_speed = " << (*data->getPedestrianSet()->getDesiredSpeeds())[i] 
        << " | propulsion_force = " << (*data->getPedestrianSet()->getPropulsionForces())[i] 
        << " | repulsion_force = " << (*data->getPedestrianSet()->getRepulsionForces())[i] 
        << " | nearest_neighbor = " << (*data->getPedestrianSet()->getNearestNeighbor())[i] 
        << std::endl;
    }
	*/

	for(auto x: *data->getHashMapData())
	{
		std::cout << x.first << " " << x.second << std::endl;
	}

    // std::cout <<"\n\nObstacles: " << std::endl;

    // for(int i = 0; i < (data->getObstacleSet()->getNumObstacles()); i++)
    // {
    //     std::cout << "[" << (data->getObstacleSet()->getObstacleCoordinates()->at(i)).coordinates[0] << ", ";
    //     std::cout << (data->getObstacleSet()->getObstacleCoordinates()->at(1)).coordinates[1] << "],  ";
    // }
}