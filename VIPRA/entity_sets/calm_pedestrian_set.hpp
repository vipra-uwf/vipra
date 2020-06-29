#ifndef CALM_PEDESTRIAN_SET
#define CALM_PEDESTRIAN_SET

#include "pedestrian_set.hpp"
#include "../type_definitions.hpp"

class CalmPedestrianSet: public PedestrianSet
{
    private:
        int numPedestrians;
        int numDimensions;
        std::vector<std::vector<FLOATING_NUMBER>> pedestrianCoordinates;
        std::vector<std::vector<FLOATING_NUMBER>> goalCoordinates;
        std::vector<FLOATING_NUMBER> speedsMetersPerSecond;
        std::vector<FLOATING_NUMBER> massesKg;
        std::vector<FLOATING_NUMBER> reactionTimes;
        std::vector<FLOATING_NUMBER> desiredSpeeds;
        //TODO .. add getters and setters for velocity
        std::vector<std::vector<FLOATING_NUMBER>> currentVelocities;
        std::vector<FLOATING_NUMBER> propulsionForces;
        std::vector<FLOATING_NUMBER> repulsionForces;
        std::vector<int> nearestNeighbor;
        
        // should these exist?? should we read these in from file and
        // instead use our virtual setters? -- Alex
        void initializeSpeeds();
        void initializeGoals();
        void initializeVelocities();
        void initializePropulsionForces();
        void initializeRepulsionForces();
        void initializeNearestNeighbors();


    public:
        CalmPedestrianSet();

        virtual void initializeValues();

        virtual int getNumPedestrians();
        virtual int getNumDimensions();
        virtual std::vector<std::vector<FLOATING_NUMBER>>* getPedestrianCoordinates();
        virtual std::vector<std::vector<FLOATING_NUMBER>>* getGoalCoordinates();
        virtual std::vector<FLOATING_NUMBER>* getSpeeds();
        virtual std::vector<std::vector<FLOATING_NUMBER>>* getVelocities();
        // TODO below getters probably shouldnt be virtual..
        // currently necessary for reader -- Alex
        virtual std::vector<FLOATING_NUMBER>* getMasses();
        virtual std::vector<FLOATING_NUMBER>* getReactionTimes();
        virtual std::vector<FLOATING_NUMBER>* getDesiredSpeeds();
        virtual std::vector<FLOATING_NUMBER>* getPropulsionForces();
        virtual std::vector<FLOATING_NUMBER>* getRepulsionForces();
        virtual std::vector<int>* getNearestNeighbor();
        
        virtual void setNumPedestrians(int);
        virtual void setNumDimensions(int);
        virtual void setPedestrianCoordinates(std::vector<std::vector<FLOATING_NUMBER>>);
        virtual void setGoalCoordinates(std::vector<std::vector<FLOATING_NUMBER>>);
        virtual void setSpeeds(std::vector<FLOATING_NUMBER>);
        virtual void setVelocities(std::vector<std::vector<FLOATING_NUMBER>>);
        //TODO same as above getters.. below setters probably shouldn't be virtual -- Alex
        virtual void setMasses(std::vector<FLOATING_NUMBER>);
        virtual void setReactionTimes(std::vector<FLOATING_NUMBER>);
        virtual void setDesiredSpeeds(std::vector<FLOATING_NUMBER>);
        virtual void setPropulsionForces(std::vector<FLOATING_NUMBER>);
        virtual void setRepulsionForces(std::vector<FLOATING_NUMBER>);
        virtual void setNearestNeighbor(std::vector<int>);
};

#endif