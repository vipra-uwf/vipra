
#include <conditions/subconditions/subcondition_start.hpp>

namespace Behaviors {
bool
SubCondition_Start::operator()(const PedestrianSet&,
                               const ObstacleSet&,
                               const Goals&,
                               const BehaviorContext&,
                               VIPRA::idx,
                               VIPRA::delta_t) {
  return true;
}
}  // namespace Behaviors