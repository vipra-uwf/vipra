//
// Created by joe on 8/3/21.
//

#ifndef VIPRA_HUMAN_BEHAVIOR_MODEL_HPP
#define VIPRA_HUMAN_BEHAVIOR_MODEL_HPP

#include "../dsl/human_behavior.hpp"

#include "../definitions/behavior_definitions.hpp"

#include "../../Extendable/pedestrianset/pedestrian_set.hpp"
/**
 * We define the Human Behavior Model to hold a pointer to the shared data object and wrap a single human behavior.
 * Eventually we want a list of human behaviors to model.
 */
class HumanBehaviorModel {

 private:
  std::vector<HumanBehavior*> humanBehaviors;

 protected:
  unsigned int seed;

 public:
  HumanBehaviorModel();
  virtual ~HumanBehaviorModel();
  virtual void configure(const CONFIG_MAP& configMap);

  virtual void initialize();
  void         update(FLOATING_NUMBER time);
};

#endif  //VIPRA_HUMAN_BEHAVIOR_MODEL_HPP
