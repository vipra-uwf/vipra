
#include <numeric>

#include <randomization/random.hpp>
#include <selectors/selector.hpp>
#include "behavior/exceptions.hpp"
#include "definitions/sim_pack.hpp"

namespace BHVR {

/**
 * @brief Initializes the pedestrian groups, and runs the sub selectors over them
 * 
 * @param behaviorName : 
 * @param seed : 
 * @param pedSet : 
 * @param obsSet : 
 * @param goals : 
 */
void Selector::initialize(const std::string& behaviorName, VIPRA::pRNG_Engine& rngEngine, Simpack pack) {
  _pedGroups.initialize(_allTypes, pack.get_pedset().getNumPedestrians());

  auto selectorIdxs = order_selectors();
  run_selectors(selectorIdxs, behaviorName, rngEngine, pack);
  sort_groups();
  _pedGroups.clean_used();
}

/**
 * @brief Goes through each sub selector in the provided order, updating the pedestrian groups
 * 
 * @param selectorIdxs : 
 * @param behaviorName : 
 * @param seed : 
 * @param context : 
 * @param pedSet : 
 * @param obsSet : 
 * @param goals : 
 */
void Selector::run_selectors(const VIPRA::idxVec& selectorIdxs, const std::string& behaviorName,
                             VIPRA::pRNG_Engine& rngEngine, Simpack pack) {
  std::for_each(selectorIdxs.begin(), selectorIdxs.end(), [&](VIPRA::idx index) {
    auto& selector = _subSelectors[index];
    auto  selectedPeds = select_peds_from_group(selector, rngEngine, pack, behaviorName);
    update_ped_groups(selectedPeds, selector, pack.context, behaviorName);
  });

  _pedGroups[0].resize(pack.get_pedset().getNumPedestrians());
  std::iota(_pedGroups[0].begin(), _pedGroups[0].end(), 0);
}

/**
 * @brief Selects pedestrians using a sub selector
 * 
 * @param selector : 
 * @param seed : 
 * @param pedSet : 
 * @param obsSet : 
 * @param goals : 
 * @param behaviorName : 
 * @return VIPRA::idxVec 
 */
auto Selector::select_peds_from_group(SubSelector& selector, VIPRA::pRNG_Engine& rngEngine, Simpack pack,
                                      const std::string& behaviorName) -> VIPRA::idxVec {
  const auto& fullGroup = _pedGroups.get_group(selector.group);
  auto        usablegroup = filter_used_peds(fullGroup, _pedGroups.get_used(selector.group));
  auto        result = selector.select_peds(rngEngine, fullGroup, usablegroup, pack);

  if (!result.starved) {
    return result.group;
  }

  if (selector.required) {
    spdlog::error("Behavior: {}, Required Selector Starved For Type: {} From Group: {}", behaviorName,
                  selector.type.fullType, selector.group);
    DSLException::error("");
  }

  spdlog::warn("Behavior: {}, Starved Selector For Type: {} From Group: {}", behaviorName,
               selector.type.fullType, selector.group);
  return result.group;
}

/**
 * @brief Adds each selected pedestrian to their respective type groups, sets the pedestrian as used in the original group
 * 
 * @param selectedPeds : 
 * @param selector : 
 * @param context : 
 * @param behaviorName : 
 */
void Selector::update_ped_groups(const VIPRA::idxVec& selectedPeds, SubSelector& selector,
                                 BehaviorContext& context, const std::string& behaviorName) {
  std::for_each(selectedPeds.begin(), selectedPeds.end(), [&](auto& pedIdx) {
    selector.type.for_each_type([&](typeUID type) {
      spdlog::debug("Behavior: {}, Selecting Ped {} for Type: {}", behaviorName, pedIdx, type);
      context.types[pedIdx] += type;
      _pedGroups.add_ped(pedIdx, type);
    });

    _pedGroups.set_used(pedIdx, selector.group);
  });
}

/**
 * @brief Returns a vector with all of the pedestrians from a group that are not already used
 * 
 * @param peds : 
 * @param used : 
 * @return VIPRA::idxVec 
 */
auto Selector::filter_used_peds(const VIPRA::idxVec& peds, const std::vector<bool>& used) -> VIPRA::idxVec {
  VIPRA::idxVec ret;

  for (VIPRA::idx i = 0; i < peds.size(); ++i) {
    if (!used[i]) {
      ret.push_back(peds[i]);
    }
  }

  return ret;
}

/**
 * @brief Sorts all of the groups in the selector's group container
 * 
 */
void Selector::sort_groups() {
  const VIPRA::size groupCnt = _pedGroups.size();
  for (VIPRA::idx i = 1; i < groupCnt; ++i) {
    std::sort(_pedGroups[i].begin(), _pedGroups[i].end());
  }
}

/**
 * @brief Checks that there are no duplicate selectors in the order
 * @note if there is, something is very wrong
 * 
 * @param order : 
 */
void check_for_duplicates(const VIPRA::idxVec& order) {
  for (VIPRA::idx i = 0; i < order.size(); ++i) {
    for (VIPRA::idx j = i + 1; j < order.size(); ++j) {
      if (order[i] == order[j]) {
        spdlog::error("Duplicate Selector in Selectors");
        DSLException::error("");
      }
    }
  }
}

/**
 * @brief Stable sorts the selectors based on their group dependencies
 * 
 * @return VIPRA::idxVec 
 */
auto Selector::order_selectors() -> VIPRA::idxVec {
  VIPRA::idxVec order;

  for (VIPRA::idx selIdx = 0; selIdx < _subSelectors.size(); ++selIdx) {
    if (_subSelectors[selIdx].group == 0) {
      order.push_back(selIdx);
    }
  }

  _allTypes.for_each_type([&](typeUID type) {
    for (VIPRA::idx selIdx = 0; selIdx < _subSelectors.size(); ++selIdx) {
      if (_subSelectors[selIdx].group == type) {
        order.push_back(selIdx);
      }
    }
  });

  for (VIPRA::idx selIdx = 0; selIdx < _subSelectors.size(); ++selIdx) {
    bool notInGraph = std::find_if(order.begin(), order.end(),
                                   [&](VIPRA::idx index) { return index == selIdx; }) == order.end();
    if (notInGraph) {
      order.push_back(selIdx);
    }
  }

  check_for_duplicates(order);
  return order;
}

// ----------------- GETTERS/SETTERS --------------------------------------------------------------------

/**
 * @brief Sets what types are available
 * 
 * @param pedTypes : available types
 */
void Selector::set_all_types(Ptype pedTypes) { _allTypes = pedTypes; }

void Selector::add_sub_selector(const SubSelector& subSelector) { _subSelectors.emplace_back(subSelector); }

/**
 * @brief Returns how many subselectors the selector has
 * 
 * @return VIPRA::size 
 */
auto Selector::selector_count() const -> VIPRA::size { return _subSelectors.size(); }

/**
 * @brief Returns the groups container
 * 
 * @return const GroupsContainer& 
 */
auto Selector::get_groups() const -> const GroupsContainer& { return _pedGroups; }

// ----------------- END GETTERS/SETTERS --------------------------------------------------------------------

}  // namespace BHVR
