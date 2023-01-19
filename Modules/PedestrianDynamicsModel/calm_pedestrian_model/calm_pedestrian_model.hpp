#ifndef CALM_PEDESTRIAN_MODEL_HPP
#define CALM_PEDESTRIAN_MODEL_HPP

#include <algorithm>
#include <cmath>
#include <limits>
#include <math.h>
#include <vector>

#include "Goals/calm_goals/calm_goals.hpp"
#include "ObstacleSet/passenger_vehicle_obstacle_set/passenger_vehicle_obstacle_set.hpp"
#include "PedestrianSet/calm_pedestrian_set/calm_pedestrian_set.hpp"
#include "pedestrianmodel/pedestrian_dynamics_model.hpp"

#include "definitions/config_map.hpp"

struct Rect {
  VIPRA::f3d p1;
  VIPRA::f3d p2;
  VIPRA::f3d p3;
  VIPRA::f3d p4;
};

struct Line {
  Line(const VIPRA::f3d& P1, const VIPRA::f3d& P2) : p1(P1), p2(P2) {}
  bool operator==(const Line& other) const {
    return ((p1 == other.p1) && (p2 == other.p2)) || ((p1 == other.p2) && (p2 == other.p1));
  }
  VIPRA::f3d p1;
  VIPRA::f3d p2;
};

class CalmPedestrianModel : public PedestrianDynamicsModel {
 public:
  CalmPedestrianModel();

  void                          configure(const VIPRA::ConfigMap& configMap) override;
  void                          initialize(const PedestrianSet&, const ObstacleSet&, const Goals&) override;
  std::shared_ptr<VIPRA::State> timestep(const PedestrianSet&, const ObstacleSet&, const Goals&, VIPRA::delta_t) override;

 protected:
  VIPRA::f3dVec      propulsionForces;
  std::vector<float> betas;

  float*                        pedestrianDistanceMatrix;
  std::vector<float>            nearestNeighbors;
  std::shared_ptr<VIPRA::State> modelState;

  void calculatePropulsion(const CalmPedestrianSet&, const CalmGoals&) noexcept;
  void calculateRepulsion(const CalmPedestrianSet&, const CalmGoals&) noexcept;
  void calculateBetas(const CalmPedestrianSet&) noexcept;
  void calculateNeartestNeighbors(const CalmPedestrianSet&, const ObstacleSet&, const Goals&) noexcept;
  void calculateDistanceMatrices(const CalmPedestrianSet&) noexcept;

  void raceDetection();

  void updateModelState(const CalmPedestrianSet&, VIPRA::delta_t) noexcept;

  [[nodiscard]] inline float calculateBeta(float) const noexcept;

  [[nodiscard]] inline bool isPedInFront(const VIPRA::f3d& pedCoords,
                                         const VIPRA::f3d& pedVel,
                                         const float       shoulderLen,
                                         const VIPRA::f3d& secondCoords,
                                         const VIPRA::f3d& secondVel,
                                         const float       secondShoulderLen) const noexcept;

  [[nodiscard]] inline bool objectDirectionTest(const VIPRA::f3d& pedCoords,
                                                const VIPRA::f3d& pedVelocity,
                                                const VIPRA::f3d& objCoords) const noexcept;

  [[nodiscard]] inline bool objectSpatialTest(const VIPRA::f3d& pedCoords,
                                              const VIPRA::f3d& pedVelocity,
                                              const float       pedShoulderLength,
                                              const VIPRA::f3d& objLeft,
                                              const VIPRA::f3d& objRight) const noexcept;

  [[nodiscard]] inline float checkBlockedPath(const VIPRA::f3d&  coords,
                                              const VIPRA::f3d&  velocity,
                                              const float        shoulderWidth,
                                              const float        checkDistance,
                                              const ObstacleSet& obsSet) const noexcept;

  [[nodiscard]] inline bool lineIntersect(const VIPRA::f3d& start1,
                                          const VIPRA::f3d& end1,
                                          const VIPRA::f3d& linep1,
                                          const VIPRA::f3d& linep2) const noexcept;
  [[nodiscard]] inline Line getShoulderPoints(const VIPRA::f3d& coords,
                                              const VIPRA::f3d& velocity,
                                              const float       shoulderWidth) const noexcept;
  [[nodiscard]] inline bool isPointInRect(const Rect& rect, const VIPRA::f3d& p1) const noexcept;

  bool checkBehind(const PedestrianSet&, const VIPRA::f3d& pedCoords, const VIPRA::f3d& pedVelocity);
};

#endif