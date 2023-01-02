#ifndef SIMULATION_HPP
#define SIMULATION_HPP

#include "clock/clock.hpp"
#include "definitions/config_map.hpp"
#include "definitions/state.hpp"
#include "humanbehavior/human_behavior_model.hpp"
#include "logging/logging.hpp"
#include "pedestrianmodel/pedestrian_dynamics_model.hpp"
#include "policyModel/policy_model.hpp"
#include "simulationoutputhandler/simulation_output_handler.hpp"

class Simulation {

 public:
  void configure(const VIPRA::ConfigMap& config);
  void initialize();
  void run(Goals&                   goals,
           PedestrianSet&           pedestrianSet,
           ObstacleSet&             obstacleSet,
           PedestrianDynamicsModel& pedestrianDynamicsModel,
           HumanBehaviorModel&      humanBehaviorModel,
           PolicyModel&             policyModel,
           OutputDataWriter&        outputDataWriter,
           SimulationOutputHandler& simulationOutputHandler,
           Clock&                   clock);

  VIPRA::t_step getTimestep() const;

 private:
  VIPRA::t_step  timestep;
  VIPRA::delta_t timestep_size;
  VIPRA::t_step  maxTimeStep;
};

#endif