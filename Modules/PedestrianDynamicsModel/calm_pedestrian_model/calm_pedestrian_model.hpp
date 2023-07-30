#ifndef CALM_PEDESTRIAN_MODEL_HPP
#define CALM_PEDESTRIAN_MODEL_HPP

#include <algorithm>
#include <cmath>
#include <limits>
#include <memory>
#include <vector>

#include <Goals/calm_goals/calm_goals.hpp>
#include <ObstacleSet/passenger_vehicle_obstacle_set/passenger_vehicle_obstacle_set.hpp>
#include <PedestrianSet/calm_pedestrian_set/calm_pedestrian_set.hpp>

#include <definitions/config_map.hpp>
#include <definitions/type_definitions.hpp>
#include <pedestrian_model/pedestrian_dynamics_model.hpp>
#include <pedestrian_set/pedestrian_set.hpp>

#include "calm_collision.hpp"
#include "calm_line.hpp"
#include "calm_rect.hpp"
#include "randomization/random.hpp"

class CalmPedestrianModel : public PedestrianDynamicsModel {
 public:
  // struct ModelData {
  //   std::vector<float>          betas;
  //   std::vector<float>          masses;
  //   std::vector<float>          desiredSpeeds;
  //   std::vector<float>          shoulders;
  //   std::vector<VIPRA::delta_t> reactionTimes;
  //   std::vector<VIPRA::dist>    nearestNeighborDists;
  //   VIPRA::f3dVec               propulsionForces;
  // };

  struct ConfigData {
    float meanMass;
    float massStdDev;
    float meanReactionTime;
    float reactionTimeStdDev;
    float meanMaxSpeed;
    float maxSpeedStdDev;
    float meanShoulderLen;
    float ShoulderLenStdDev;
  };

  void configure(const VIPRA::CONFIG::Map&) override;
  void initialize(const PedestrianSet&, const ObstacleSet&, const Goals&) override;
  VIPRA::State& timestep(const PedestrianSet&, const ObstacleSet&, const Goals&,
                         VIPRA::delta_t, VIPRA::t_step) override;

 private:
  ConfigData         config{};
  ModelData          peds;
  Collision          collision;
  VIPRA::State       modelState;
  VIPRA::pRNG_Engine rand{};

  std::vector<Line> pedShoulders;

  static constexpr VIPRA::delta_t slidingGoalTime = 0.1F;

  void calculatePropulsion(const PedestrianSet&, const Goals&);
  void calculateRepulsion(const PedestrianSet&, const Goals&);
  void calculateBetas(const PedestrianSet&);

  void calculateShoulders(const PedestrianSet&, const Goals&);
  void calculateNeartestNeighbors(const PedestrianSet&, const ObstacleSet&, const Goals&);
  void calculateDistanceMatrices(const PedestrianSet&);
  void updateModelState(const PedestrianSet&, const Goals&, VIPRA::delta_t,
                        VIPRA::t_step);

  [[nodiscard]] static bool objectSpatialTest(const Rect&, VIPRA::f3d objLeft,
                                              VIPRA::f3d objRight);

  [[nodiscard]] static bool isPedInDirectionOfGoal(VIPRA::pcoord, VIPRA::goal,
                                                   VIPRA::pcoord other);
  [[nodiscard]] static bool objectDirectionTest(VIPRA::pcoord, VIPRA::veloc,
                                                VIPRA::f3d objCoords);
  [[nodiscard]] float checkBlockedPath(VIPRA::idx, VIPRA::veloc, VIPRA::dist maxDist,
                                       const ObstacleSet&);
  [[nodiscard]] Rect  makeRectFromShldrs(VIPRA::idx, VIPRA::pcoord, VIPRA::goal);
  [[nodiscard]] static VIPRA::f3d calculateSpeedDensity(const PedestrianSet&);
  [[nodiscard]] static float      calculateBeta(VIPRA::dist);

  void setModelData(const PedestrianSet&);

 public:
  CalmPedestrianModel(const CalmPedestrianModel&) = default;
  CalmPedestrianModel(CalmPedestrianModel&&) = delete;
  CalmPedestrianModel& operator=(const CalmPedestrianModel&) = default;
  CalmPedestrianModel& operator=(CalmPedestrianModel&&) = delete;
  CalmPedestrianModel() = default;
  ~CalmPedestrianModel() override = default;
};

#endif