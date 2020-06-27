#ifndef CALM_PEDESTRIAN_MODEL_HPP
#define CALM_PEDESTRIAN_MODEL_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>

#include "pedestrian_dynamics_model.hpp"
#include "../simulation/data.hpp"

class CalmPedestrianModel : public PedestrianDynamicsModel
{
    private:
        Data* data;
        const FLOATING_NUMBER a = -2.111;
        const FLOATING_NUMBER b = 0.366;
        const FLOATING_NUMBER c = 0.966;
    
    public:
        virtual void setData(Data* initialData);
        virtual Data* getData();
        virtual void precompute();
        virtual void update();

        void calculatePropulsion();
        void calculateRepulsion();
        FLOATING_NUMBER calculateDistance(int, int);
        FLOATING_NUMBER calculateBeta(int);
        void calculateNearestNeighbors();
};

#endif
