#include "calm_goals.hpp"

CalmGoals::CalmGoals()
{
}

void CalmGoals::configure(CONFIG_MAP* configMap)
{

}

void CalmGoals::setData(Data* data)
{
    this->data = data;
    createPedestrianCoordinatesPointer();

    //TODO this may not be the best place -- maybe an initGoals function-- alex
    addExitGoal(data->getSimulationParams());
    calculateNearestExit();
}

void CalmGoals::addExitGoal(SIM_PARAMS* simulationParams)
{
    //TODO fix this method so that exits are read
    // in a different way so that i can read in multiple exits - elisabeth
    FLOATING_NUMBER x;
    FLOATING_NUMBER y;

    x = (*simulationParams)["exit_door_x"];
    y = (*simulationParams)["exit_door_y"];

    std::vector<Dimensions> exit;

    exit.push_back(
        Dimensions {
        std::vector<FLOATING_NUMBER> {x,y}
        }
    );

    this->exitGoal = exit;
}

void CalmGoals::removeExitGoal(int exitIndex)
{
    std::cout << "number of exits before: " << exitGoal.size() << std::endl;
    this->exitGoal.erase(exitGoal.begin()+exitIndex);
    std::cout << "goal erased\nsize of exitGoal vector: " <<
        exitGoal.size() << std::endl;
}

void CalmGoals::clearGoals()
{
    std::cout << "number of exits before: " << exitGoal.size() << std::endl;
    this->exitGoal.clear();
    std::cout << "goals cleared\nsize of exitGoal vector: " <<
        exitGoal.size() << std::endl;
}

void CalmGoals::calculateNearestExit()
{

    if(this->exitGoal.size() > 1)
    {
        for (int i = 0; i < this->data->getPedestrianSet()
            ->getNumPedestrians();
            ++i)
        {
            this->nearestExit.push_back(nearestGoal(i));
        }
    }

    else
    {
        for (int i = 0; i < this->data->getPedestrianSet()
            ->getNumPedestrians();
            ++i)
        {
            this->nearestExit.push_back(0);
        }
    }

    // for(int i = 0; i < 5/*this->data->getPedestrianSet()->getNumPedestrians()*/
    //     ; ++i)
    // {
    //     std::cout << "nearest exit for ped " << i << " :" << nearestExit[i]
    //         << std::endl;
    // }


}

void CalmGoals::determinePedestrianGoals()
{
    std::vector<Dimensions> newGoal;

    for (int i = 0; i < this->data->getPedestrianSet()->getNumPedestrians();)
    {
        if(((*this->pedestrianCoordinatesPointer)[i].coordinates[0]
            < this->exitGoal[nearestExit[i]].coordinates[0] - 0.05)
            && !((*this->pedestrianCoordinatesPointer)[i].coordinates[1]
                < 0.3
            && (*this->pedestrianCoordinatesPointer)[i].coordinates[1]
                > -0.3))
        {
            newGoal.push_back(
                Dimensions
                {
                    std::vector<FLOATING_NUMBER>
                    {
                        (*this->pedestrianCoordinatesPointer)[i]
                            .coordinates[0], 0
                    }
                }
            );
            ++i;
        }

        else if(((*this->pedestrianCoordinatesPointer)[i].coordinates[0]
            < this->exitGoal[nearestExit[i]].coordinates[0]-0.05)
            && ((*this->pedestrianCoordinatesPointer)[i].coordinates[1]
                < 0.3
            && (*this->pedestrianCoordinatesPointer)[i].coordinates[1]
                > -0.3))
        {
            newGoal.push_back(
                Dimensions
                {
                    std::vector<FLOATING_NUMBER>
                    {
                        this->exitGoal[nearestExit[i]].coordinates[0], 0
                    }
                }
            );
            ++i;
        }

        else
        {
            newGoal.push_back(
                Dimensions
                {
                    std::vector<FLOATING_NUMBER>
                    {
                        this->exitGoal[nearestExit[i]].coordinates[0],
                        this->exitGoal[nearestExit[i]].coordinates[1]
                    }
                }
            );
            ++i;
        }
    }
    data->getPedestrianSet()->setGoalCoordinates(newGoal);
}

bool CalmGoals::checkPedestianGoalsMet(int pedestrianIndex)
{

    bool goalMet = false;

    if(((*this->pedestrianCoordinatesPointer)[pedestrianIndex].coordinates[0]
        >= this->exitGoal[nearestExit[pedestrianIndex]].coordinates[0] - 0.5
        && (*this->pedestrianCoordinatesPointer)[pedestrianIndex].coordinates[0]
        <= this->exitGoal[nearestExit[pedestrianIndex]].coordinates[0] + 0.5)
        && ((*this->pedestrianCoordinatesPointer)[pedestrianIndex].coordinates[1]
        >= this->exitGoal[nearestExit[pedestrianIndex]].coordinates[1] - 0.5
        && (*this->pedestrianCoordinatesPointer)[pedestrianIndex].coordinates[1]
        <= this->exitGoal[nearestExit[pedestrianIndex]].coordinates[1] + 0.5))
    {
        goalMet = true;
    }

    return goalMet;
}

bool CalmGoals::isSimulationGoalMet()
{
    bool simGoalMet = false;
    if(this->data->getPedestrianSet()->getNumPedestrians() == 0)
    {
        simGoalMet = true;
    }
    return simGoalMet;
}

void CalmGoals::createPedestrianCoordinatesPointer()
{
    this->pedestrianCoordinatesPointer = this->data->getPedestrianSet()->
        getPedestrianCoordinates();
}

unsigned int CalmGoals::nearestGoal(int pedestrianIndex)
{
    //index of nearest starts at the first
    unsigned int nearest = 0;
    //starts at position 1 because there should be at least 2 exit goals
    for (unsigned int i = 1; i < this->exitGoal.size(); ++i)
    {
        //compares distance between exits and the pedestrian
        if (calculateDistance(pedestrianIndex, i) <
            calculateDistance(pedestrianIndex, nearest))
        {
            //sets nearest to lower if a different exit is lower.
            nearest = i;
        }
    }
    return nearest;
}

//pedestrianIndex and exitGoalIndex should probably be unsigned - V
FLOATING_NUMBER CalmGoals::calculateDistance(int pedestrianIndex,
    int exitGoalIndex)
{
    FLOATING_NUMBER xDistance =
        this->exitGoal[exitGoalIndex].coordinates[0] -
        (*this->pedestrianCoordinatesPointer)[pedestrianIndex].coordinates[0];

    xDistance = pow(xDistance, 2);


    FLOATING_NUMBER yDistance = this->exitGoal[exitGoalIndex].coordinates[1] -
        (*this->pedestrianCoordinatesPointer)[pedestrianIndex].coordinates[1];

    yDistance = pow(yDistance, 2);

    return (sqrt(xDistance + yDistance));
}

Dimensions CalmGoals::getPedestrianExitGoal(int pedestrianIndex)
{
    return this->exitGoal[this->nearestExit[pedestrianIndex]];
}
