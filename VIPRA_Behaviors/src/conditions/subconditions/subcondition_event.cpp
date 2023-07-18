

#include <conditions/subconditions/subcondition_event.hpp>
#include "definitions/sim_pack.hpp"

namespace BHVR {
/**
   * @brief Constructor, adds start handler to the provided event
   * 
   * @param event : 
   */
SubConditionEventOccurred::SubConditionEventOccurred(VIPRA::idx ev) : event(ev) {}

/**
 * @brief Returns true if the event has occurred
 * 
 * @return true 
 * @return false 
 */
bool SubConditionEventOccurred::operator()(Simpack pack, VIPRA::idx, Target) const {
  return pack.context.events[event].hasOccurred();
}
}  // namespace BHVR