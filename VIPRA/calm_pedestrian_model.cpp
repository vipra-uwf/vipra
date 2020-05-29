//TODO: Fill in with actual details
#include "calm_pedestrian_model.hpp"

void CalmPedestrianModel::setData(Data* initialData)
{
    this->data = initialData;
}

void CalmPedestrianModel::precompute()
{
    //TODO: Perform precomputation for all passengers
    //Equations 6 and 7 of CALM paper
    //Decrease Force and Propulsion force in CALM code
    //result needs to be stored for each passenger

}

void CalmPedestrianModel::update()
{
    //use clock, calculated force prop and calculated force rep to update positions ~Elizabeth
}

void CalmPedestrianModel::calculatePropulsion(Pedestrian* currentPedestrian)
{

    double forceOfPropulsion;
    double averageActionReactionTimeS = 0.25; //TODO: refactor to not be hardcoded
    if(currentPedestrian->getPedestrianGoal() != 0){
        forceOfPropulsion = ((currentPedestrian->getDesiredVelocity() - currentPedestrian->getVelocityYDirection())/averageActionReactionTimeS) * currentPedestrian->getPedestrianMass();
    }else{
        forceOfPropulsion = ((currentPedestrian->getDesiredVelocity() - currentPedestrian->getVelocityXDirection())/averageActionReactionTimeS) * currentPedestrian->getPedestrianMass();
    }

    currentPedestrian->setForceOfPropulsion(forceOfPropulsion);

}

void CalmPedestrianModel::printPedestrianCoordinates()
{
    this->data->printPedestrianCoordinates();
}

void CalmPedestrianModel::printObstacleCoordinates()
{
    this->data->printObstacleCoordinates();
}
