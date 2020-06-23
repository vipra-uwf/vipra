#ifndef SIMULATION_HPP
#define SIMULATION_HPP

#include <iostream> 

#include "../rapidxml/rapidxml.hpp"
#include "../readers/input_data_loader.hpp" //TODO may be able to remove -- is data *always* loaded outside of the simulation?
#include "../writers/output_data_writer.hpp"
#include "../models/pedestrian_dynamics_model.hpp"
#include "data.hpp" //TODO REMOVE ME WHEN PRINTDATADELETETHIS() IS REMOVED
#include "../timer.hpp"

class Simulation
{
    public:
        Simulation();
        Simulation(PedestrianDynamicsModel*);
        void run();

        void setOutputDataWriter(OutputDataWriter*);

        //TODO will be removed once debugger segfault is resolved
        void printDataDELETETHIS();

    private:
        PedestrianDynamicsModel* pedestrianDynamicsModel;
        OutputDataWriter* outputDataWriter;
};

#endif
