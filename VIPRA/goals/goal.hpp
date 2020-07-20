//should specify functionality for determining whether goals are met
//specification of the goal
    //time
    //state of the obstacles and pedestrians

#ifndef GOAL_HPP
#define GOAL_HPP 

#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <iostream>

#include "../simulation/data.hpp"
#include "../type_definitions.hpp"
#include "../dimensions.hpp"

//name change - Goals
class Goal
{

    public:
        virtual void addExitGoal(std::unordered_map<std::string, FLOATING_NUMBER>*) = 0;
        virtual void removeExitGoal(std::unordered_map<std::string, FLOATING_NUMBER>*) = 0;
        virtual void clearGoals() = 0;
        virtual void determinePedestrianGoals(Data*) = 0;
};

#endif
