#ifndef VIPRA_HUMAN_BEHAVIOR_HPP
#define VIPRA_HUMAN_BEHAVIOR_HPP

#include "../definitions/type_definitions.hpp"
#include "../entity_sets/pedestrian_set.hpp"

/**
 * Describes a specific human behavior. Implementations can either define the behavior directly in C++ or use a DSL.
 */
class HumanBehavior
{
    public:
        HumanBehavior();
        virtual ~HumanBehavior() = default;

        // The pattern across the board is to have actual handles to the data that are provided on object creation.
        // But the data lives on the model itself. Therefore we should have the behavior take in the PedestrianSet as an argument.

        virtual void initialize(PedestrianSet *pedestrianSet);

        // Track any internal state if it exists
        virtual void update(FLOATING_NUMBER timestep);

        // Decide if this behavior is applicable to this person
        virtual bool decide(PedestrianSet *pedestrianSet, int pedestrianIndex, FLOATING_NUMBER timestep);

        // Perform the action associated with this behavior
        virtual void act(PedestrianSet *pedestrianSet, int pedestrianIndex, FLOATING_NUMBER timestep);

        // Add a state definition
        void addStateDefinition(std::string const &state);

        // Get the state definitions
        std::vector<std::string> getStateDefinitions();

        // Set the percent selected
        void setRatioSelected(float ratioSelected);

        // Get the percent selected
        float getRatioSelected();
    
    private:
        // The definitions of the states as read in by the behavior file.
        std::vector<std::string> stateDefinitions;

        // Hard-coded concept of selector here. We consistently select this percent of pedestrians to be subject to the given behavior.
        float ratioSelected;
};

#endif
