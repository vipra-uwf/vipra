#ifndef SIMULATION_HPP
#define SIMULATION_HPP

#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <utility>

#include "rapidxml-1.13/rapidxml.hpp"
#include "readerinterface.hpp"

class Simulation
{
    public:
        Simulation();
        Simulation(InputDataLoader*);
        void printPassengerData();
        void printObstacleData();
        void run();

    private:
        std::vector<std::string> passengerTypes;
        std::vector<std::pair<double, double>> passengerCoordinates;
        std::vector<std::pair<double, double>> obstacleCoordinates;
};

#endif
