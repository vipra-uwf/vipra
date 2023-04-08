#ifndef VIPRA_BEHAVIOR_CONDITION_HPP
#define VIPRA_BEHAVIOR_CONDITION_HPP

#include <memory>
#include <vector>

#include <spdlog/spdlog.h>

#include <conditions/sub_condition.hpp>
#include <definitions/behavior_context.hpp>
#include <definitions/type_definitions.hpp>
#include <goals/goals.hpp>
#include <obstacle_set/obstacle_set.hpp>
#include <pedestrian_set/pedestrian_set.hpp>

namespace Behaviors {
class Condition {
 public:
  Condition(const Condition&) = delete;
  Condition& operator=(const Condition&) = delete;

  Condition() = default;
  ~Condition() = default;

  Condition(Condition&&) noexcept;
  Condition& operator=(Condition&&) noexcept;

  void addAndOr(bool);

  void addSubCondition(SubCondition&&);

  bool evaluate(const PedestrianSet&, const ObstacleSet&, const Goals&, const BehaviorContext&, VIPRA::idx, VIPRA::delta_t)
      const;

 private:
  std::vector<bool>         operations;
  std::vector<SubCondition> conditions;
};
}  // namespace Behaviors

#endif