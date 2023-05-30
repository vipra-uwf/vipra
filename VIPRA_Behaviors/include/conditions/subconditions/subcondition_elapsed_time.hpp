#ifndef VIPRA_SUBCONDITION_ELAPSED_TIME
#define VIPRA_SUBCONDITION_ELAPSED_TIME

#include <conditions/sub_condition.hpp>
#include <definitions/dsl_types.hpp>
#include <events/event.hpp>
#include <util/timed_latch.hpp>

namespace BHVR {
class SubConditionElapsedTimeFromEvent {
 public:
  SubConditionElapsedTimeFromEvent(VIPRA::time_s, VIPRA::idx);

  bool operator()(const PedestrianSet&, const ObstacleSet&, const Goals&, const BehaviorContext&, VIPRA::idx,
                  VIPRA::delta_t);

 private:
  BHVR::TimedLatch latch;
  VIPRA::idx       event;

 public:
  ~SubConditionElapsedTimeFromEvent() = default;
  SubConditionElapsedTimeFromEvent(const SubConditionElapsedTimeFromEvent&) = default;
  SubConditionElapsedTimeFromEvent& operator=(const SubConditionElapsedTimeFromEvent&) = default;
  SubConditionElapsedTimeFromEvent(SubConditionElapsedTimeFromEvent&&) noexcept = default;
  SubConditionElapsedTimeFromEvent& operator=(SubConditionElapsedTimeFromEvent&&) noexcept = default;
};
}  // namespace BHVR

#endif