//
// Created by joe on 8/3/21.
//

#include "human_behavior_model.hpp"

#include <algorithm>
#include <filesystem>

void
HumanBehaviorModel::configure(const VIPRA::Config::Map& configMap) {
  seed = configMap["seed"].asUInt();
  loadBehaviors(configMap.getStringVector("behaviors"));
}

void
HumanBehaviorModel::initialize(const PedestrianSet& pedSet, const ObstacleSet& obsSet, const Goals& goals) {
  for (auto& behavior : humanBehaviors) {
    behavior.initialize(pedSet, obsSet, goals);
  }
}

void
HumanBehaviorModel::timestep(const PedestrianSet&          pedSet,
                             const ObstacleSet&            obsSet,
                             const Goals&                  goals,
                             std::shared_ptr<VIPRA::State> state,
                             VIPRA::delta_t                dT) {
  std::for_each(humanBehaviors.begin(), humanBehaviors.end(), [&](HumanBehavior& behavior) {
    behavior.timestep(pedSet, obsSet, goals, state, dT);
  });
}

void
HumanBehaviorModel::loadBehaviors(std::vector<std::string> behaviors) {
  BehaviorBuilder builder;

  spdlog::info("Loading Behaviors");
  humanBehaviors.resize(behaviors.size());

  std::transform(behaviors.begin(), behaviors.end(), humanBehaviors.begin(), [&](const std::string& behaviorName) {
    const auto filePath = std::filesystem::current_path() / "../Behaviors" / (behaviorName + ".behavior");

    if (!std::filesystem::exists(filePath)) {
      spdlog::error("Behavior \"{}\" Does NOT Exist at {}", behaviorName, filePath.c_str());
      BehaviorModelException::Throw("Behavior File Doesn't Exist");
    }

    spdlog::info("Loading Behavior: {} at {}", behaviorName, std::filesystem::canonical(filePath).c_str());
    return builder.build(behaviorName, filePath, seed);
  });

  spdlog::info("Done Loading Behaviors");
}