#ifndef SIMULATION_CONTEXT_HPP
#define SIMULATION_CONTEXT_HPP

#include <vector>

#include <definitions/dsl_types.hpp>
#include <definitions/pedestrian_types.hpp>
#include <definitions/type_definitions.hpp>


namespace Behaviors {
struct BehaviorContext {
  VIPRA::delta_t                   elapsedTime;
  Behaviors::stateUID              environmentState = 0;
  std::vector<Behaviors::stateUID> pedStates;
  std::vector<Behaviors::typeUID>  types;
};
}  // namespace Behaviors

#endif