#ifndef PEDESTRIAN_DYNAMICS_MODEL_HPP
#define PEDESTRIAN_DYNAMICS_MODEL_HPP

#include "../simulation/data.hpp"

class PedestrianDynamicsModel
{
    public:
        virtual void setData(Data* initialData) = 0;
        virtual Data* getData() = 0;
        virtual void precompute() = 0;
        virtual void update() = 0;

        virtual void calculatePropulsion() = 0;
        virtual void calculateRepulsion() = 0;

        //TODO refactor to not use Pedestrian obj, maybe send a pointer to obstacleSet object?
        //virtual void calculatePropulsion(Pedestrian* currentPedestrian) = 0;
};

#endif
