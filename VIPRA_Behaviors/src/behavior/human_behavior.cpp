
#include "behavior/human_behavior.hpp"

#include <numeric>
#include <randomization/random.hpp>
#include <utility>

#include "definitions/dsl_types.hpp"
#include "definitions/pedestrian_types.hpp"
#include "definitions/sim_pack.hpp"
#include "definitions/state.hpp"
#include "selectors/selector.hpp"

namespace BHVR {

/**
 * @brief Returns the name of the behavior
 * 
 * @return const std::string& 
 */
auto HumanBehavior::get_name() const noexcept -> const std::string& { return _name; }

/**
 * @brief Adds an action to the selectors with type
 * 
 * @param action : action to add
 */
void HumanBehavior::add_action(typeUID type, const Action& action) {
  const VIPRA::idx ndx = GroupsContainer::index(type);
  _actions[ndx].emplace_back(action);
}

/**
 * @brief Adds the selector to the behavior
 * 
 * @param selector
 */
void HumanBehavior::add_sub_selector(const SubSelector& subSelector) {
  _selector.add_sub_selector(subSelector);
}

/**
 * @brief Sets the BHVR selectors allTypes
 * 
 */
void HumanBehavior::set_all_ped_types(Ptype types) {
  _selector.set_all_types(types);
  _actions.resize(types.type_count() + 1);
}

/**
 * @brief initializes behavior selector
 * 
 * @param pedSet : pedestrian set object
 * @param obsSet : obstacle set object
 * @param goals : goals object
 */
void HumanBehavior::initialize(const VIPRA::PedestrianSet& pedSet, const VIPRA::ObstacleSet& obsSet,
                               VIPRA::Goals& goals) {
  VIPRA::State dummyState;

  _context.engine = VIPRA::pRNG_Engine{_seedNum};
  _context.pedStates = std::vector<BHVR::stateUID>(pedSet.getNumPedestrians());
  _context.types = std::vector<BHVR::typeUID>(pedSet.getNumPedestrians());

  Simpack pack{pedSet, obsSet, goals, dummyState, _context, _selector.get_groups(), 0};
  spdlog::debug("Initializing {} Selectors, Seed: {}", _selector.selector_count(), _seedNum);
  _selector.initialize(_name, pack);

  for (auto& actionGroup : _actions) {
    for (auto& action : actionGroup) {
      action.initialize(pack);
    }
  }
}

/**
 * @brief Evaluates behavior events, and performs actions of pedestrians
 * 
 * @param pedSet : pedestrian set object
 * @param obsSet : obstacle set object
 * @param goals : goals object
 * @param state : state object to write results to
 * @param deltaT : simulation timestep size
 */
void HumanBehavior::timestep(VIPRA::PedestrianSet& pedSet, VIPRA::ObstacleSet& obsSet, VIPRA::Goals& goals,
                             VIPRA::State& state, VIPRA::delta_t deltaT) {
  evaluate_events(pedSet, obsSet, goals, deltaT);
  apply_actions(pedSet, obsSet, goals, state, deltaT);
  _context.elapsedTime += deltaT;
}

/**
 * @brief adds an event to the behavior and its index in the behavior context
 * 
 * @param event : event object to add
 * @return VIPRA::idx
 */
auto HumanBehavior::add_event(const Event& event) -> VIPRA::idx {
  _context.events.emplace_back(event);
  return _context.events.size() - 1;
}

/**
 * @brief adds a location to the behavior and its index in the behavior context
 * 
 * @param loc : location object to add
 * @return VIPRA::idx
*/
auto HumanBehavior::add_location(const Location& loc) -> VIPRA::idx {
  _context.locations.emplace_back(loc);
  return _context.locations.size() - 1;
}

/**
 * @brief Returns the number of events the behavior has
 * 
 * @return VIPRA::size 
 */
auto HumanBehavior::event_count() const -> VIPRA::size { return _context.events.size(); }

/**
 * @brief Returns the number of selectors the behavior has
 * 
 * @return VIPRA::size 
 */
auto HumanBehavior::selector_count() const -> VIPRA::size { return _selector.selector_count(); }

/**
 * @brief Returns the number of actions the behavior has
 * 
 * @return VIPRA::size 
 */
auto HumanBehavior::action_count() const -> VIPRA::size {
  VIPRA::size cnt = 0;
  for (const auto& actionGroup : _actions) {
    cnt += actionGroup.size();
  }

  return cnt;
}

/**
 * @brief Sets the seed for the behavior
 * 
 * @param s : randomization seed
 */
void HumanBehavior::set_seed(BHVR::seed bSeed) {
  _context.engine.reseed(bSeed);
  _seedNum = bSeed;
}

/**
 * @brief Updates each events status, through the events update function
 * 
 * @param pedSet : pedestrian set
 * @param obsSet : obstacle set
 * @param goals : goals module
 * @param deltaT : time between timesteps
 */
void HumanBehavior::evaluate_events(VIPRA::PedestrianSet& pedSet, VIPRA::ObstacleSet& obsSet,
                                    VIPRA::Goals& goals, VIPRA::delta_t deltaT) {
  VIPRA::State dummyState;
  for (auto& event : _context.events) {
    event.evaluate({pedSet, obsSet, goals, dummyState, _context, _selector.get_groups(), deltaT});
  }
}

/**
 * @brief Runs each action in the behavior
 * 
 * @param pedSet : pedestrian set
 * @param obsSet : obstacle set
 * @param goals : goals module
 * @param state : next timestep state from pedestrian model 
 * @param deltaT : timestep size
 */
void HumanBehavior::apply_actions(VIPRA::PedestrianSet& pedSet, VIPRA::ObstacleSet& obsSet,
                                  VIPRA::Goals& goals, VIPRA::State& state, VIPRA::delta_t deltaT) {
  const GroupsContainer& groups = _selector.get_groups();
  const VIPRA::size      groupCnt = groups.size();

  for (VIPRA::idx i = 0; i < groupCnt; ++i) {
    const auto& pedestrians = groups.at(i);
    std::for_each(pedestrians.begin(), pedestrians.end(), [&](VIPRA::idx ped) {
      if (!goals.isPedestianGoalMet(ped))
        for (auto& action : _actions[i]) {
          action.perform_action({pedSet, obsSet, goals, state, _context, _selector.get_groups(), deltaT},
                                ped);
        }
    });
  }
}

// ------------------------------------------ CONSTRUCTORS ------------------------------------------------------------------------

HumanBehavior::HumanBehavior(std::string behaviorName) : _name(std::move(behaviorName)), _context() {}

// ------------------------------------------ END CONSTRUCTORS ------------------------------------------------------------------------
}  // namespace BHVR