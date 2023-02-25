#include "behavior/human_behavior.hpp"

#include <numeric>

namespace Behaviors {

const std::string&
HumanBehavior::getName() const noexcept {
  return name;
}

void
HumanBehavior::addAction(Action&& action) {
  pedActions.emplace_back(std::move(action));
}

void
HumanBehavior::initialize(const PedestrianSet& pedSet, const ObstacleSet& obsSet, const Goals& goals) {
  context.pedStates = std::vector<Behaviors::stateUID>(pedSet.getNumPedestrians(), 0);
  selector->initialize(pedSet, obsSet, goals);
}

void
HumanBehavior::timestep(const PedestrianSet&          pedSet,
                        const ObstacleSet&            obsSet,
                        const Goals&                  goals,
                        std::shared_ptr<VIPRA::State> state,
                        VIPRA::delta_t                dT) {

  std::for_each(events.begin(), events.end(), [&](Event& event) { event.evaluate(pedSet, obsSet, goals, context, dT); });

  const auto& selectedPeds = selector->getSelectedPeds(pedSet, obsSet, goals, context);

  std::for_each(selectedPeds.begin(), selectedPeds.end(), [&](VIPRA::idx pedIdx) {
    std::for_each(pedActions.begin(), pedActions.end(), [&](Action& action) {
      action.performAction(pedSet, obsSet, goals, context, pedIdx, dT, state);
    });
  });
}

void
HumanBehavior::addParameter(std::string param) {
  parameters.emplace_back(param);
}

Event*
HumanBehavior::addEvent(Event&& event) {
  events.emplace_back(std::move(event));
  return &(events.back());
}

// ------------------------------------------ CONSTRUCTORS ------------------------------------------------------------------------

HumanBehavior::HumanBehavior(std::string behaviorName)
  : name(behaviorName), context(), parameters(), selector(nullptr), events(), pedActions() {}

HumanBehavior::HumanBehavior(HumanBehavior&& other) noexcept
  : name(std::move(other.name)), context(std::move(other.context)), parameters(std::move(other.parameters)),
    selector(std::move(other.selector)), events(std::move(other.events)), pedActions(std::move(other.pedActions)) {}

HumanBehavior&
HumanBehavior::operator=(HumanBehavior&& other) noexcept {
  name = (std::move(other.name));
  context = (std::move(other.context));
  parameters = (std::move(other.parameters));
  selector = (std::move(other.selector));
  events = (std::move(other.events));
  pedActions = (std::move(other.pedActions));
  return (*this);
}

// ------------------------------------------ END CONSTRUCTORS ------------------------------------------------------------------------
}  // namespace Behaviors