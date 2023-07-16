
#ifndef VIPRA_EXACTLY_N_RANDOM_SELECTOR_H
#define VIPRA_EXACTLY_N_RANDOM_SELECTOR_H

#include <selectors/selector.hpp>
#include <values/numeric_value.hpp>

namespace BHVR {
/**
   * @brief Selects exactly N pedestrians from a group to be given a type
   * 
   */
struct SelectorExactlyN {
  NumericValue   selectCount;
  SelectorResult operator()(VIPRA::pRNG_Engine&, const VIPRA::idxVec&,
                            const VIPRA::idxVec&, const PedestrianSet&,
                            const ObstacleSet&, const Goals&) const;
};
}  // namespace BHVR

#endif  //VIPRA_EXACTLY_N_RANDOM_SELECTOR_H
