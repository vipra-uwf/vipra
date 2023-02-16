#ifndef VIPRA_SUBCONDITION_EVENT_OCCURRING_HPP
#define VIPRA_SUBCONDITION_EVENT_OCCURRING_HPP

#include <conditions/sub_condition.hpp>
#include <events/event.hpp>

namespace Behaviors {
class SubCondition_Event_Occurring : public SubCondition {
 public:
  SubCondition_Event_Occurring() = delete;

  SubCondition_Event_Occurring(Event*);

  bool operator()(const PedestrianSet&, const ObstacleSet&, const Goals&, const BehaviorContext&, VIPRA::idx, VIPRA::delta_t)
      override;

 private:
  bool started;
  bool ended;
};
}  // namespace Behaviors

#endif