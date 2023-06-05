#include "calm_pedestrian_set.hpp"

void CalmPedestrianSet::configure(const VIPRA::CONFIG::Map&) {}

void CalmPedestrianSet::initialize(std::unique_ptr<VIPRA::PedData> pedData) {
  const auto* peds = dynamic_cast<CalmPedData*>(pedData.get());
  numPedestrians = peds->positions.size();

  pedestrianCoordinates = peds->positions;
  masses = peds->masses;
  reactionTimes = peds->reactionTimes;
  desiredSpeeds = peds->desiredSpeeds;
  shoulderLengths = peds->shoulderLengths;

  velocities = VIPRA::f3dVec{numPedestrians, VIPRA::f3d{0, 0, 0}};
}

VIPRA::f3d CalmPedestrianSet::getPedCoords(VIPRA::idx index) const {
  return pedestrianCoordinates.at(index);
}

VIPRA::f3d CalmPedestrianSet::getPedVelocity(VIPRA::idx index) const {
  return velocities.at(index);
}

VIPRA::size CalmPedestrianSet::getNumPedestrians() const noexcept {
  return pedestrianCoordinates.size();
}

const VIPRA::f3dVec& CalmPedestrianSet::getPedestrianCoordinates() const noexcept {
  return pedestrianCoordinates;
}

const VIPRA::f3dVec& CalmPedestrianSet::getVelocities() const noexcept {
  return velocities;
}

const std::vector<float>& CalmPedestrianSet::getMasses() const noexcept {
  return masses;
}

const std::vector<float>& CalmPedestrianSet::getReactionTimes() const noexcept {
  return reactionTimes;
}

const std::vector<float>& CalmPedestrianSet::getDesiredSpeeds() const noexcept {
  return desiredSpeeds;
}

const std::vector<float>& CalmPedestrianSet::getShoulderLengths() const noexcept {
  return shoulderLengths;
}

void CalmPedestrianSet::updateState(std::shared_ptr<VIPRA::State> state) {
  for (VIPRA::idx i = 0; i < numPedestrians; ++i) {
    velocities[i] = state->velocities[i];
    pedestrianCoordinates[i] = state->pedestrianCoordinates[i];
  }
}