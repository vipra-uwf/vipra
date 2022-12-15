#ifndef AND_CONDITION_HPP
#define AND_CONDITION_HPP

#include "condition.hpp"

/**
 * Combine two different conditions together using AND
 */
class AndCondition : public Condition {
 public:
  AndCondition(SimulationContext* simulationContext, Condition* lhs, Condition* rhs);
  bool evaluate(const ObstacleSet&   obsSet,
                const PedestrianSet& pedestrianSet,
                const Goals&         goals,
                int                  pedestrianIndex) override;

 private:
  Condition* lhs;
  Condition* rhs;
};

#endif