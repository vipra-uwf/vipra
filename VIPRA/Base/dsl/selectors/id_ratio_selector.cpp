#include "id_ratio_selector.hpp"
#include <iostream>

IdRatioSelector::IdRatioSelector(SimulationContext* simContext, float selectRatio) : Selector(simContext) {
  this->ratio = selectRatio;
}

bool
IdRatioSelector::select([[maybe_unused]] const ObstacleSet& obstacleSet,
                        const PedestrianSet&                pedestrianSet,
                        [[maybe_unused]] const Goals&       goals,
                        VIPRA::idx                          pedestrianIndex) {

  VIPRA::uid pedestrianId = pedestrianSet.getIds().at(pedestrianIndex);

  const int divisor = (1.0 / this->ratio);

  return (pedestrianId % divisor == 0);
}
