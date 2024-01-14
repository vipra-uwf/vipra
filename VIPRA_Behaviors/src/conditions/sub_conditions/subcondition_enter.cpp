
#include "conditions/subconditions/subcondition_enter.hpp"

namespace BHVR {

void SubConditionEnter::operator()(Simpack pack, const VIPRA::idxVec& peds,
                                   const std::vector<Target>& targets, std::vector<bool>& met,
                                   const std::vector<bool>& /*unused*/, BoolOp /*unused*/) {
  if (_entered.size() < pack.get_pedset().getNumPedestrians())
    _entered.resize(pack.get_pedset().getNumPedestrians());

  for (auto ped : peds) {
    if (_entered[targets[ped].targetIdx]) {
      met[ped] = false;
    }

    Location& loc = pack.get_context().locations[_location];
    bool      enter = loc.contains(pack.get_state().coords[targets[ped].targetIdx]) &&
                 !loc.contains(pack.get_pedset().getPedCoords(targets[ped].targetIdx));

    if (enter) {
      _entered[targets[ped].targetIdx] = true;
    }

    met[ped] = enter;
  }
}

}  // namespace BHVR
