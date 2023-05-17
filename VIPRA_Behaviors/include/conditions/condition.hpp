#ifndef VIPRA_BEHAVIOR_CONDITION_HPP
#define VIPRA_BEHAVIOR_CONDITION_HPP

#include <memory>
#include <vector>

#include <spdlog/spdlog.h>

#include <conditions/sub_condition.hpp>
#include <definitions/type_definitions.hpp>

#include <goals/goals.hpp>
#include <obstacle_set/obstacle_set.hpp>
#include <pedestrian_set/pedestrian_set.hpp>

namespace BHVR {
class Condition {
 public:
  Condition() = default;
  ~Condition() = default;
  Condition(const Condition&) = default;
  Condition& operator=(const Condition&) = default;
  Condition(Condition&&) noexcept = default;
  Condition& operator=(Condition&&) noexcept = default;

  void addAndOr(bool);

  void addSubCondition(const SubCondition&);

  bool evaluate(const PedestrianSet&, const ObstacleSet&, const Goals&, const BehaviorContext&, VIPRA::idx,
                VIPRA::delta_t) const;

 private:
  std::vector<bool>         operations;
  std::vector<SubCondition> conditions;
};
}  // namespace BHVR

#endif