#ifndef VIPRA_MOCK_BEHAVIORS_HPP
#define VIPRA_MOCK_BEHAVIORS_HPP

#include <behavior/human_behavior.hpp>

namespace Behaviors {
class MockBehaviorBuilder {
 public:
  static HumanBehavior&& buildMockBehavior(const std::string&, Behaviors::seed);
};
}  // namespace Behaviors

#endif