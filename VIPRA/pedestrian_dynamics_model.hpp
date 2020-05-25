#ifndef PEDESTRIAN_DYNAMICS_MODEL_HPP
#define PEDESTRIAN_DYNAMICS_MODEL_HPP

//#include <vector>
//#include <utility>
#include "data.hpp"

class PedestrianDynamicsModel
{
    public:
        virtual void setData(Data* initialData) = 0;
        virtual void precompute() = 0;
        virtual void update() = 0;
        virtual void calculatePropulsion(Pedestrian* currentPedestrian) = 0;
        virtual void printPedestrianCoordinates() = 0;
        virtual void printObstacleCoordinates() = 0;

};

#endif
