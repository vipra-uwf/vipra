#include <cfloat>
#include <omp.h>
#include "calm_pedestrian_model.hpp"

void CalmPedestrianModel::configure(CONFIG_MAP* configMap)
{

}

void CalmPedestrianModel::initialize()
{
    this->pedestrianSet = dynamic_cast<CalmPedestrianSet*>(
        this->data->getPedestrianSet());
    this->obstacleSet = dynamic_cast<ObstacleSet*>(
        this->data->getObstacleSet());

    this->numPedestrians = this->data->getPedestrianSet()->getNumPedestrians();
    this->numObstacles = this->data->getObstacleSet()->getNumObstacles();
    this->pedestrianDistanceMatrix = new FLOATING_NUMBER[numPedestrians * numPedestrians];
    this->obstacleDistanceMatrix = new FLOATING_NUMBER[numPedestrians * numObstacles];
    this->calculateDistanceMatrices();

    createAisles();
    calculatePriority();

    std::vector<std::pair<std::string, int>> nearestNeighbors;

    for (int i = 0; i < numPedestrians; ++i)
    {
        this->goals->determinePedestrianGoals();
        nearestNeighbors.push_back(calculateNearestNeighbors(i));
    }

    this->pedestrianSet->setNearestNeighbors(nearestNeighbors);

    calculateBeta();
    calculatePropulsion();

}

void CalmPedestrianModel::setData(Data* initialData)
{
    this->data = initialData;
}

void CalmPedestrianModel::setGoals(Goals* goals)
{
    this->goals = goals;
}

Data* CalmPedestrianModel::getData()
{
    return this->data;
}

Goals* CalmPedestrianModel::getGoals()
{
    return this->goals;
}

void CalmPedestrianModel::precompute()
{
    //TODO: Perform precomputation for all passengers
    //Equations 6 and 7 of CALM paper
    //Decrease Force and Propulsion force in CALM code
    //result needs to be stored for each passenger

    std::vector<std::pair<std::string, int>> nearestNeighbors;
    bool currentPriorityActive = false;
    bool priorityActiveFlag = false;
    std::vector<MovementDefinitions> updatedMoveStates;
    this->goals->determinePedestrianGoals();

    std::vector<int> pedestriansToRemove;

        for(int i = 0; i < this->numPedestrians; ++i)
        {
            if(this->goals->checkPedestianGoalsMet(i))
            {
                pedestriansToRemove.push_back(i);
            }

        }

        for(auto iter = pedestriansToRemove.begin();
                 iter != pedestriansToRemove.end();
                 iter++)
        {
                this->pedestrianSet->removePedestrian(*iter);
        }

        this->numPedestrians -= pedestriansToRemove.size();

    calculateDistanceMatrices();

    for (int i = 0; i < this->numPedestrians; ++i)
    {
        nearestNeighbors.push_back(calculateNearestNeighbors(i));
        currentPriorityActive = updatePriority(i);
        if(currentPriorityActive == true)
        {
            priorityActiveFlag = true;
        }
        updatedMoveStates.push_back(updateMovementState(i));
    }


    this->pedestrianSet->setNearestNeighbors(nearestNeighbors);

    if(priorityActiveFlag == false)
    {
        this->currentPriority--;
        std::cout << "current priority: " << currentPriority << std::endl;
    }

    this->pedestrianSet->setMovementStates(updatedMoveStates);

    calculateBeta();
    calculatePropulsion();


}

void CalmPedestrianModel::update(FLOATING_NUMBER time)
{


    FLOATING_NUMBER coeff = 0.01; //rename, i dont understand this value -EL

    std::vector<Dimensions> newVelocities;
    std::vector<FLOATING_NUMBER> newSpeeds;
    std::vector<Dimensions> newPositions;

    for (int i = 0; i < this->numPedestrians; ++i)
    {
        if((*this->pedestrianSet->getMovementStates())[i]
            == MovementDefinitions::STOP)
        {
            newVelocities.push_back
            (
                Dimensions
                {
                    std::vector<FLOATING_NUMBER>
                    {
                        0,
                        0
                    }

                }
            );
        }
        else
        {
            newVelocities.push_back
            (
                Dimensions
                {
                    std::vector<FLOATING_NUMBER>
                    {
                        (*this->pedestrianSet->getPropulsionForces())[i]
                        .coordinates[0] * (time /
                        (*this->pedestrianSet->getMasses())[i])
                         + (*this->pedestrianSet->getVelocities())
                         [i].coordinates[0],
                        (*this->pedestrianSet->getPropulsionForces())[i]
                        .coordinates[1] * (time /
                        (*this->pedestrianSet->getMasses())[i])
                         + (*this->pedestrianSet->getVelocities())
                         [i].coordinates[1]
                    }

                }
            );
        }

        newSpeeds.push_back((newVelocities[i].coordinates[0]
            * newVelocities[i].coordinates[0])
            + (newVelocities[i].coordinates[1]
            * newVelocities[i].coordinates[1]));

        if(newSpeeds[i] < ((*this->pedestrianSet->getDesiredSpeeds())[i]
            * (*this->pedestrianSet->getDesiredSpeeds())[i]))
        {
            newPositions.push_back
            (
                Dimensions
                {
                    std::vector<FLOATING_NUMBER>
                    {
                        (*this->pedestrianSet->getPedestrianCoordinates())[i]
                        .coordinates[0] + (newVelocities[i].coordinates[0]
                        * time),
                        (*this->pedestrianSet->getPedestrianCoordinates())[i]
                        .coordinates[1] + (newVelocities[i].coordinates[1]
                        * time)

                    }
                }
            );
        }

        else
        {
            newPositions.push_back
            (
                Dimensions
                {
                    std::vector<FLOATING_NUMBER>
                    {
                        (*this->pedestrianSet->getPedestrianCoordinates())
                        [i].coordinates[0] + (newVelocities[i].coordinates
                        [0] * ((*this->pedestrianSet->getDesiredSpeeds())
                        [i] / (newSpeeds[i]+coeff)) * time),
                        (*this->pedestrianSet->getPedestrianCoordinates())
                        [i].coordinates[1] + (newVelocities[i].coordinates
                        [1] * ((*this->pedestrianSet->getDesiredSpeeds())
                        [i] / (newSpeeds[i]+coeff)) * time)

                    }
                }
            );

        }

    }
    this->pedestrianSet->setVelocities(newVelocities);
    this->pedestrianSet->setPedestrianCoordinates(newPositions);
    this->pedestrianSet->setSpeeds(newSpeeds);

}

void CalmPedestrianModel::calculatePropulsion()
{

    std::vector<Dimensions> newVelocities;
    std::vector<Dimensions> newPropulsiveForces;
    FLOATING_NUMBER xAisleCoefficent = 0.5;
    FLOATING_NUMBER yAisleCoefficent = 0.9;

    for(int i = 0; i < this->numPedestrians; ++i)
    {

        if((*this->pedestrianSet->getMovementStates())[i]
                == MovementDefinitions::STOP)
        {

            newVelocities.push_back
            (
                Dimensions
                {
                    std::vector<FLOATING_NUMBER>
                    {
                        0,
                        0
                    }
                }
            );
        }

        else if ((*this->pedestrianSet->getMovementStates())[i]
                    == MovementDefinitions::PED_DYNAM)
        {
            if((*this->pedestrianSet->getGoalCoordinates())[i].coordinates[0]
                == (*this->pedestrianSet->getPedestrianCoordinates())[i]
                .coordinates[0] && (*this->pedestrianSet->getGoalCoordinates())
                [i].coordinates[1] == 0)
            {

                if((*this->pedestrianSet->getPedestrianCoordinates())[i]
                    .coordinates[1] < 0)
                {
                    newVelocities.push_back
                    (
                        Dimensions
                        {
                            std::vector<FLOATING_NUMBER>
                            {
                                0 * (*this->pedestrianSet->getDesiredSpeeds())[i],
                                (*this->pedestrianSet->getDesiredSpeeds())[i]
                            }
                        }
                    );
                }

                else if((*this->pedestrianSet->getPedestrianCoordinates())[i]
                    .coordinates[1] > 0)
                {

                    newVelocities.push_back
                    (
                        Dimensions
                        {
                            std::vector<FLOATING_NUMBER>
                            {
                                0 *
                                (*this->pedestrianSet->getDesiredSpeeds())[i],
                                -1.1 *
                                (*this->pedestrianSet->getDesiredSpeeds())[i]
                            }
                        }
                    );
                }
            }

            else if((*this->pedestrianSet->
                getGoalCoordinates())[i].coordinates[0]
            == (this->getGoals()->getPedestrianExitGoal(i)).coordinates[0]
            && (*this->pedestrianSet->getGoalCoordinates())[i].coordinates[1]
                == 0)
                {
                if(((*this->pedestrianSet->
                getPedestrianCoordinates())[i].coordinates[1]
                >= ((*this->pedestrianSet->getGoalCoordinates())
                [i].coordinates[1]) + 0.2)
                || ((*this->pedestrianSet->
                getPedestrianCoordinates())[i].coordinates[1]
                <= ((*this->pedestrianSet->getGoalCoordinates())
                [i].coordinates[1]) - 0.2))
                {
                    if((*this->pedestrianSet->
                      getPedestrianCoordinates())[i].coordinates[1] > 0)
                    {
                        newVelocities.push_back(
                        Dimensions
                        {
                          std::vector<FLOATING_NUMBER>
                          {
                              xAisleCoefficent *
                              (*this->pedestrianSet->getDesiredSpeeds())[i],
                              (-1 * yAisleCoefficent) *
                              (*this->pedestrianSet->getDesiredSpeeds())[i]
                          }
                        }
                        );
                    }

                    else
                    {
                      newVelocities.push_back(
                        Dimensions
                        {
                          std::vector<FLOATING_NUMBER>
                          {
                              xAisleCoefficent *
                              (*this->pedestrianSet->getDesiredSpeeds())[i],
                              yAisleCoefficent *
                              (*this->pedestrianSet->getDesiredSpeeds())[i]
                          }
                        }
                      );

                    }

                }
                else
                {
                    newVelocities.push_back(
                        Dimensions
                        {
                            std::vector<FLOATING_NUMBER>
                            {
                                1 *
                                (*this->pedestrianSet->getDesiredSpeeds())[i],
                                0 *
                                (*this->pedestrianSet->getDesiredSpeeds())[i]
                            }
                        }
                    );
                }
            }

            else if((*this->pedestrianSet->getGoalCoordinates())[i]
            .coordinates[0] == (this->getGoals()->getPedestrianExitGoal(i))
            .coordinates[0]
            && (*this->pedestrianSet->getGoalCoordinates())[i].coordinates[1]
            == (this->getGoals()->getPedestrianExitGoal(i)).coordinates[1])
            {

                newVelocities.push_back
                (
                    Dimensions
                    {
                        std::vector<FLOATING_NUMBER>
                        {
                            0 * (*this->pedestrianSet->getDesiredSpeeds())[i],
                            1 * (*this->pedestrianSet->getDesiredSpeeds())[i]
                        }
                    }
                );
            }
        }

        newPropulsiveForces.push_back
        (
            Dimensions
            {
                std::vector<FLOATING_NUMBER>
                {
                    (newVelocities[i].coordinates[0] - (*this->pedestrianSet->
                    getVelocities())[i].coordinates[0]) *
                    (*this->pedestrianSet->getMasses())[i]
                    / (*this->pedestrianSet->getReactionTimes())[i],
                    (newVelocities[i].coordinates[1] - (*this->pedestrianSet->
                    getVelocities())[i].coordinates[1]) *
                    (*this->pedestrianSet->getMasses())[i]
                    / (*this->pedestrianSet->getReactionTimes())[i]

                }
            }
        );


    }

    this->pedestrianSet->setPropulsionForces(newPropulsiveForces);
}

void CalmPedestrianModel::calculateBeta()
{
    std::vector<FLOATING_NUMBER> newDesiredSpeeds;

    for (int i = 0; i < this->numPedestrians; ++i)
    {

        int nearestNeighhborIndex
            = (*this->pedestrianSet->getNearestNeighbors())[i]
                .second;
        std::string nearestNeighborOrigin =
            (*this->pedestrianSet->getNearestNeighbors())[i].first;

        FLOATING_NUMBER distanceMinusB = 1;

        if(nearestNeighhborIndex == -1)
        {
          distanceMinusB = ((1) - b); //the 1 value needs to be changed -EL
        }

        else
        {
          distanceMinusB = (getDistance(
                  i,
                  FLOATING_NUMBER(nearestNeighhborIndex),
                  nearestNeighborOrigin
          ) - b);
        }


    newDesiredSpeeds.push_back(0.3 * (c - exp(a * distanceMinusB))); //TODO - fix the coeff to change depending on goal -EL
    }
    this->pedestrianSet->setDesiredSpeeds(newDesiredSpeeds);
}


void CalmPedestrianModel::calculateDistanceMatrices()
{
    std::vector<Dimensions>* pedestrianCoordinates
            = this->pedestrianSet->getPedestrianCoordinates();
    std::vector<Dimensions>* obstacleCoordinates =
            this->obstacleSet->getObstacleCoordinates();

    // Update the pedestrians since they could have been removed from the
    // simulation at this point. Also update the obstacles just in case they
    // can be removed in the future.
    this->numPedestrians = this->data->getPedestrianSet()->getNumPedestrians();
    this->numObstacles = this->data->getObstacleSet()->getNumObstacles();

    // Parallelize this loop using the guided scheduling, since the initial
    // workloads will complete faster than subsequent ones, and we want openmp
    // to front-load the work across cores.
    #ifndef _WIN32
    #pragma omp parallel for \
        shared(pedestrianCoordinates, obstacleCoordinates) \
        default(none) \
        schedule(guided)
    #endif
    for (int i = 0; i < this->numPedestrians; ++i)
    {
        // Only compute up to i since we only need to compute the distances
        // between a and b, not b and a. The retrieval method takes care of the
        // look-up logic. Here we strictly perform the necessary computations.
        for (int j = 0; j < i; ++j)
        {
            FLOATING_NUMBER xDistance = pow(
                    pedestrianCoordinates->at(i).coordinates[0] -
                    pedestrianCoordinates->at(j).coordinates[0], 2);
            FLOATING_NUMBER yDistance = pow(
                    pedestrianCoordinates->at(i).coordinates[1] -
                    pedestrianCoordinates->at(j).coordinates[1], 2);
            FLOATING_NUMBER distance = sqrt(xDistance + yDistance);
            this->pedestrianDistanceMatrix[i * this->numPedestrians + j] =
                    distance;
        }

        // Unlike pedestrians-to-pedestrians, we actually want to fill this
        // entire matrix with values.
        for (int j = 0; j < this->numObstacles; ++j)
        {
            FLOATING_NUMBER xDistance = pow(
                    pedestrianCoordinates->at(i).coordinates[0] -
                    obstacleCoordinates->at(j).coordinates[0], 2);
            FLOATING_NUMBER yDistance = pow(
                    pedestrianCoordinates->at(i).coordinates[1] -
                    obstacleCoordinates->at(j).coordinates[1], 2);
            FLOATING_NUMBER distance = sqrt(xDistance + yDistance);
            this->obstacleDistanceMatrix[i * this->numObstacles + j] =
                    distance;
        }
    }

}

FLOATING_NUMBER CalmPedestrianModel::getPedestrianDistance(int first, int second)
{
    if (first == second)
    {
        // The distance between the pedestrian and itself is always 0
        return 0;
    }

    // Exploit the fact that the distance between a to b is identical to the
    // distance between b to a
    if (first > second)
    {
        return this->pedestrianDistanceMatrix[first * this->numPedestrians +
                                              second];
    }
    else {
        return this->pedestrianDistanceMatrix[second * this->numPedestrians +
                                              first];
    }
}

FLOATING_NUMBER CalmPedestrianModel::getObstacleDistance(int pedestrianIndex, int obstacleIndex)
{
    return this->obstacleDistanceMatrix[pedestrianIndex * this->numObstacles +
                                        obstacleIndex];
}

FLOATING_NUMBER CalmPedestrianModel::getDistance(
    int firstPedestrianIndex, int secondPedestrianIndex, std::string originSet)
{
    if (originSet == "P")
    {
        return getPedestrianDistance(firstPedestrianIndex, secondPedestrianIndex);
    }
    else
    {
        return getObstacleDistance(firstPedestrianIndex, secondPedestrianIndex);
    }
}

std::pair<std::string, int>
        CalmPedestrianModel::calculateNearestNeighbors(int pedestrianIndex)
{
    const int NOT_FOUND = -1;

    int nearest = NOT_FOUND;
    std::string originSet = "P";
    FLOATING_NUMBER nearestDistance = FLT_MAX;

    std::pair<std::string, int> newNearestNeighbor;

    #ifndef _WIN32
    #pragma omp parallel shared(nearest, \
            originSet, \
            nearestDistance, \
            pedestrianIndex) \
            default(none)
    #endif
    {
        int localNearest = NOT_FOUND;
        std::string localOriginSet = "P";
        FLOATING_NUMBER localNearestDistance = FLT_MAX;

        #ifndef _WIN32
        #pragma omp for nowait
        #endif
        for (int j = 0; j < numObstacles; ++j)
        {
            if (pedestrianIndex != j && j < numPedestrians &&
                neighborDirectionTest(pedestrianIndex, j, "P"))
            {
              if(neighborSpacialTest(pedestrianIndex, j, "P"))
              {
                FLOATING_NUMBER distance = getDistance(pedestrianIndex, j, "P");
                if (localNearest == NOT_FOUND
                    || distance < localNearestDistance)
                {
                    localNearest = j;
                    localOriginSet = "P";
                    localNearestDistance = distance;
                }
              }
            }

            if (neighborDirectionTest(pedestrianIndex, j, "O"))
            {
              if(neighborSpacialTest(pedestrianIndex, j, "O"))
              {
                FLOATING_NUMBER distance = getDistance(pedestrianIndex, j, "O");
                if (localNearest == NOT_FOUND
                    || distance < localNearestDistance)
                {
                    localNearest = j;
                    localOriginSet = "O";
                    localNearestDistance = distance;
                }
              }
            }
        }

        #ifndef _WIN32
        #pragma omp critical
        #endif
        {
            if (localNearestDistance < nearestDistance)
            {
                nearest = localNearest;
                originSet = localOriginSet;
                nearestDistance = localNearestDistance;
            }
        }
    }


    newNearestNeighbor = std::make_pair(std::string(originSet), nearest);


    return newNearestNeighbor;
}

bool CalmPedestrianModel::neighborDirectionTest(
    int firstPedestrianIndex, int secondPedestrianIndex, std::string originSet)
{

    bool pass = false;

    FLOATING_NUMBER displacementX;
    FLOATING_NUMBER displacementY;
    FLOATING_NUMBER directionX;
    FLOATING_NUMBER directionY;
    FLOATING_NUMBER normalization;

    FLOATING_NUMBER dotProduct;

    std::vector<Dimensions>* firstPedestriancoords
        = this->pedestrianSet->getPedestrianCoordinates();
    std::vector<Dimensions>* secondPedestriancoords //TODO:fix name and fix implementation-EL
        = this->pedestrianSet->getPedestrianCoordinates();



    if(originSet == "O")
    {
        secondPedestriancoords = this->data->getObstacleSet()->
            getObstacleCoordinates();
    }

    normalization = sqrt(((*this->pedestrianSet->getVelocities())
      [firstPedestrianIndex].coordinates[0]
      * (*this->pedestrianSet->getVelocities())[firstPedestrianIndex]
      .coordinates[0])
      * ((*this->pedestrianSet->getVelocities())
      [firstPedestrianIndex].coordinates[1]
      * (*this->pedestrianSet->getVelocities())[firstPedestrianIndex]
      .coordinates[1]));

    if(normalization == 0)
    {
        normalization = 1;
    }

    displacementX = (*firstPedestriancoords)[firstPedestrianIndex]
        .coordinates[0] - (*secondPedestriancoords)[secondPedestrianIndex]
        .coordinates[0];
    displacementY = (*firstPedestriancoords)[firstPedestrianIndex]
        .coordinates[1] - (*secondPedestriancoords)[secondPedestrianIndex]
        .coordinates[1];

    directionX = (*this->pedestrianSet->getVelocities())[firstPedestrianIndex]
    .coordinates[0] / normalization;

    directionY = (*this->pedestrianSet->getVelocities())[firstPedestrianIndex]
    .coordinates[1] / normalization;

    dotProduct = (displacementX * directionX) + (displacementY * directionY);


    if(dotProduct < 0)
    {
        pass = true;
    }


    return pass;
}

bool CalmPedestrianModel::neighborSpacialTest(int firstPedestrianIndex,
  int secondPedestrianIndex, std::string originSet)
{
  bool pass = false;

  FLOATING_NUMBER firstPedestrianDirectionX;
  FLOATING_NUMBER firstPedestrianDirectionY;

  FLOATING_NUMBER secondPedestrianDirectionX;
  FLOATING_NUMBER secondPedestrianDirectionY;

  FLOATING_NUMBER shoulderLength = 0.1;


  std::vector<Dimensions>* firstPedestriancoords
      = this->pedestrianSet->getPedestrianCoordinates();
  std::vector<Dimensions>* secondPedestriancoords //TODO:fix name -EL
      = this->pedestrianSet->getPedestrianCoordinates();



  if(originSet == "O")
  {
      secondPedestriancoords = this->data->getObstacleSet()->
          getObstacleCoordinates();
  }

  else if(originSet == "P")
  {
    secondPedestrianDirectionX = std::abs(
      (*this->pedestrianSet->getVelocities())[secondPedestrianIndex]
      .coordinates[0]);
    secondPedestrianDirectionY = std::abs(
      (*this->pedestrianSet->getVelocities())[secondPedestrianIndex]
      .coordinates[1]);
  }

  firstPedestrianDirectionX = std::abs(
    (*this->pedestrianSet->getVelocities())[firstPedestrianIndex]
    .coordinates[0]);
  firstPedestrianDirectionY = std::abs(
    (*this->pedestrianSet->getVelocities())[firstPedestrianIndex]
    .coordinates[1]);


  if(originSet == "O")
  {
    if(firstPedestrianDirectionX > firstPedestrianDirectionY)
    {
      if((*secondPedestriancoords)[secondPedestrianIndex]
          .coordinates[1] <= ((*firstPedestriancoords)[firstPedestrianIndex]
          .coordinates[1] + shoulderLength)
          && (*secondPedestriancoords)[secondPedestrianIndex].coordinates[1]
          >= ((*firstPedestriancoords)[firstPedestrianIndex].coordinates[1]
          - shoulderLength))
      {
          pass = true;
      }

    }

    else
    {
      if((*secondPedestriancoords)[secondPedestrianIndex]
          .coordinates[0] <= ((*firstPedestriancoords)[firstPedestrianIndex]
          .coordinates[0] + shoulderLength)
          && (*secondPedestriancoords)[secondPedestrianIndex]
          .coordinates[0] >= ((*firstPedestriancoords)[firstPedestrianIndex]
          .coordinates[0] - shoulderLength))
        {
          pass = true;
        }
    }
  }

  else
  {
    if(firstPedestrianDirectionX > firstPedestrianDirectionY)
    {
      if(secondPedestrianDirectionX > secondPedestrianDirectionY)
      {
        if((((*secondPedestriancoords)[secondPedestrianIndex]
            .coordinates[1] - shoulderLength) <= ((*firstPedestriancoords)[firstPedestrianIndex]
            .coordinates[1] + shoulderLength) && ((*secondPedestriancoords)[secondPedestrianIndex]
            .coordinates[1] - shoulderLength) >= ((*firstPedestriancoords)[firstPedestrianIndex]
            .coordinates[1] - shoulderLength)) || (((*secondPedestriancoords)[secondPedestrianIndex]
            .coordinates[1] + shoulderLength) <= ((*firstPedestriancoords)[firstPedestrianIndex]
            .coordinates[1] + shoulderLength) && ((*secondPedestriancoords)[secondPedestrianIndex]
            .coordinates[1] + shoulderLength) >= ((*firstPedestriancoords)[firstPedestrianIndex]
            .coordinates[1] - shoulderLength)) )
            {
              pass = true;
            }

      }

      else
      {
        if((*secondPedestriancoords)[secondPedestrianIndex]
            .coordinates[1] <= ((*firstPedestriancoords)[firstPedestrianIndex]
            .coordinates[1] + shoulderLength) && (*secondPedestriancoords)[secondPedestrianIndex]
            .coordinates[1] >= ((*firstPedestriancoords)[firstPedestrianIndex]
            .coordinates[1] - shoulderLength))
        {
            pass = true;
        }

      }

    }

    else
    {
      if(secondPedestrianDirectionY > secondPedestrianDirectionX)
      {
        if((((*secondPedestriancoords)[secondPedestrianIndex]
            .coordinates[0] - shoulderLength) <= ((*firstPedestriancoords)[firstPedestrianIndex]
            .coordinates[0] + shoulderLength) && ((*secondPedestriancoords)[secondPedestrianIndex]
            .coordinates[0] - shoulderLength) >= ((*firstPedestriancoords)[firstPedestrianIndex]
            .coordinates[0] - shoulderLength)) || (((*secondPedestriancoords)[secondPedestrianIndex]
            .coordinates[0] + shoulderLength) <= ((*firstPedestriancoords)[firstPedestrianIndex]
            .coordinates[0] + shoulderLength) && ((*secondPedestriancoords)[secondPedestrianIndex]
            .coordinates[0] + shoulderLength) >= ((*firstPedestriancoords)[firstPedestrianIndex]
            .coordinates[0] - shoulderLength)) )
            {
              pass = true;
            }
    }
    else
    {

      if((*secondPedestriancoords)[secondPedestrianIndex]
          .coordinates[0] <= ((*firstPedestriancoords)[firstPedestrianIndex]
          .coordinates[0] + shoulderLength) && (*secondPedestriancoords)[secondPedestrianIndex]
          .coordinates[0] >= ((*firstPedestriancoords)[firstPedestrianIndex]
          .coordinates[0] - shoulderLength))
        {
          pass = true;
        }

    }
  }

  }



  return pass;
}

void CalmPedestrianModel::calculatePriority()
{

    std::vector<Dimensions>* pedestrianCoordinates
        = this->pedestrianSet->getPedestrianCoordinates();
    std::vector<FLOATING_NUMBER>* aisles
        = dynamic_cast<AirplaneObstacleSet*>(this->obstacleSet)->getAisles();
    std::vector<FLOATING_NUMBER>* aislesSize
        = dynamic_cast<AirplaneObstacleSet*>(this->obstacleSet)->getAislesSize();
    int numAisles
        = dynamic_cast<AirplaneObstacleSet*>(this->obstacleSet)->getNumAisles();

    //std::cout << numAisles; //testing statement -El

    std::vector<FLOATING_NUMBER> priorities;
    std::vector<int> startingAisles; //maybe move somewhere else?
                                    //might not fit into this method - EL
     for(int i = 0; i < this->pedestrianSet->getNumPedestrians(); ++i)
     {
        bool prioritySet = false;
        for(int j = 0; prioritySet == false && j < numAisles; ++j)
        {
            if((*pedestrianCoordinates)[i].coordinates[0] < ((*aisles)[j]
            + ((*aislesSize)[j]/2)) && (*pedestrianCoordinates)[i]
            .coordinates[0]> ((*aisles)[j]
            - ((*aislesSize)[j]/2)))
            {
                priorities.push_back(j);
                startingAisles.push_back(j);
                break;
            }
        }
     }

     this->pedestrianSet->setPriorities(priorities);
     this->pedestrianSet->setStartingAisles(startingAisles);


    /*for(int i = 0; i < pedestrianSet->getNumPedestrians(); ++i) //testing loop -EL
     {
         std::cout << "Ped " << i << " priority: " << priorities[i] << std::endl;
     }*/

     this->currentPriority = 24; //hardcoded! fix this -EL
}

void CalmPedestrianModel::createAisles() //TODO move this somewhere more approrpriate -EL
{

    std::vector<Dimensions>* pedestrianCoordinates
        = this->pedestrianSet->getPedestrianCoordinates();
    std::vector<Dimensions>* obstacleCoords
        = this->obstacleSet->getObstacleCoordinates();

    std::vector<FLOATING_NUMBER> aisles;
    std::vector<FLOATING_NUMBER> aisleSize;
    int numAisles = 0;

    for(int i = 0; i < this->pedestrianSet->getNumPedestrians(); ++i)
    {
        bool duplicateCheck = true;

        if(i == 0)
        {
            aisles.push_back((*pedestrianCoordinates)[i].coordinates[0]);
            ++numAisles;
        }

        else
        {
            for(int j = 0; j < numAisles; ++j)
            {
                if((*pedestrianCoordinates)[i].coordinates[0] == aisles[j])
                {
                    duplicateCheck = false;
                }
            }

            if(duplicateCheck == true)
            {
                aisles.push_back((*pedestrianCoordinates)[i].coordinates[0]);
                ++numAisles;
            }
        }
    }

    /*for (int i = 0; i < numAisles; ++i) //testing loop -EL
    {
        std::cout << "Aisle " << i << ": " << Aisles[i] << std::endl;
    }*/

    for(int i = 0; i < numAisles; ++i)
    {
        FLOATING_NUMBER backOfAisle = -1;
        FLOATING_NUMBER frontOfAisle = -1;
        for(int j = 0; j < obstacleSet->getNumObstacles(); ++j)
        {
            if((*obstacleCoords)[j].coordinates[0] > aisles[i])
            {
                //TODO fix this so it's not hard coded! - Elizabeth
                if((*obstacleCoords)[j].coordinates[1] < 1.73
                && (*obstacleCoords)[j].coordinates[1] > -1.73)
                {
                    if(frontOfAisle == -1)
                    {
                        frontOfAisle = (*obstacleCoords)[j].coordinates[0];
                    }
                    else if(((*obstacleCoords)[j].coordinates[0] - aisles[i])
                        < (frontOfAisle - aisles[i]))
                    {
                        frontOfAisle = (*obstacleCoords)[j].coordinates[0];
                    }
                }
            }
            else if((*obstacleCoords)[j].coordinates[0] < aisles[i])
            {
                if((*obstacleCoords)[j].coordinates[1] < 1.73
                    && (*obstacleCoords)[j].coordinates[1] > -1.73)
                {
                    if(backOfAisle == -1)
                    {
                        backOfAisle = (*obstacleCoords)[j].coordinates[0];
                    }

                    else if((aisles[i] - (*obstacleCoords)[j].coordinates[0])
                        < (aisles[i] - backOfAisle))
                    {
                        backOfAisle = (*obstacleCoords)[j].coordinates[0];
                    }
                }
            }
        }

        /*std::cout << "Aisle " << i << " back" << backOfAisle //testing statement -EL
            << ": front " << frontOfAisle << std::endl;*/
        aisleSize.push_back(frontOfAisle-backOfAisle);
    }

    /*for (int i = 0; i < numAisles; ++i) //testing loop -EL
    {
        std::cout << "Aisle size" << i << ": " << AisleSize[i] << std::endl;
    }*/

    dynamic_cast<AirplaneObstacleSet*>(this->obstacleSet)
        ->setAisles(aisles);
    dynamic_cast<AirplaneObstacleSet*>(this->obstacleSet)
        ->setAislesSize(aisleSize);
    dynamic_cast<AirplaneObstacleSet*>(this->obstacleSet)
        ->setNumAisles(numAisles);
}

MovementDefinitions CalmPedestrianModel::updateMovementState
    (int pedestrianIndex)
{

    MovementDefinitions newDefinition;
    if((*this->pedestrianSet->getPriorities())[pedestrianIndex]
        < this->currentPriority
        /*&& ((*this->pedestrianSet->getPedestrianCoordinates())
        [pedestrianIndex].coordinates[0]
        >= ((*dynamic_cast<AirplaneObstacleSet*>(this->obstacleSet)
            ->getAisles())
        [(*this->pedestrianSet->getStartingAisles())[pedestrianIndex]]
        + ((*dynamic_cast<AirplaneObstacleSet*>(this->obstacleSet)
            ->getAislesSize())
        [(*this->pedestrianSet->getStartingAisles())[pedestrianIndex]] / 2)
        - 0.1))*/)
    {
        newDefinition = MovementDefinitions::STOP;
    }

    else
    {
        newDefinition = MovementDefinitions::PED_DYNAM;
    }

    return newDefinition;
}

bool CalmPedestrianModel::updatePriority(int pedestrianIndex)
{

    bool currentPriorityActive = false;

    if((*this->pedestrianSet->getPriorities())[pedestrianIndex]
        == this->currentPriority)
    {
        currentPriorityActive = true;
    }

    return currentPriorityActive;

}
