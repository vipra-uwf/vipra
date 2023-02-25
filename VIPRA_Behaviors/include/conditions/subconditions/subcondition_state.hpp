#ifndef VIPRA_CONDITION_STATE
#define VIPRA_CONDITION_STATE

#include <conditions/sub_condition.hpp>
#include <definitions/dsl_types.hpp>

namespace Behaviors {
class SubCondition_State : public SubCondition {
 public:
  SubCondition_State(Behaviors::stateUID, bool);
  bool operator()(const PedestrianSet&, const ObstacleSet&, const Goals&, const BehaviorContext&, VIPRA::idx, VIPRA::delta_t)
      override;

 private:
  Behaviors::stateUID cond_State;
  bool                pedOrEnv;
};
}  // namespace Behaviors

#endif