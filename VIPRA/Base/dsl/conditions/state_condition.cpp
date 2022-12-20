#include "state_condition.hpp"

StateCondition::StateCondition(SimulationContext* simContext, int desiredStateId) : Condition(simContext) {
  this->desiredState = desiredStateId;
}

bool
StateCondition::evaluate(const ObstacleSet&   obsSet,
                         const PedestrianSet& pedestrianSet,
                         const Goals&         goals,
                         VIPRA::idx           pedestrianIndex) {
  // TODO: get index from id
  // VIPRA::uid pedestrianId = pedestrianSet.getIds().at(pedestrianIndex);

  // int currentState = this->getSimulationContext()->states.at(pedestrianId);

  // return currentState == this->desiredState;
  return false;
}
