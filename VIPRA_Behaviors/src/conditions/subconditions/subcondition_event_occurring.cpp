

#include <conditions/subconditions/subcondition_event_occurring.hpp>

namespace BHVR {
/**
   * @brief Constructor, adds start and end listeners to the provided event
   * 
   * @param event : 
   */
SubConditionEventOccurring::SubConditionEventOccurring(VIPRA::idx ev) : event(ev) {}

/**
 * @brief Returns true if the event is occurring
 * 
 * @return true
 * @return false
 */
bool SubConditionEventOccurring::operator()(const PedestrianSet&, const ObstacleSet&, const Goals&,
                                            const BehaviorContext& context, VIPRA::idx, VIPRA::delta_t) const {
  return context.events[event].isOccurring();
}
}  // namespace BHVR