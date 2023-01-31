#ifndef PEDESTRIAN_POSITION_LOADER_HPP
#define PEDESTRIAN_POSITION_LOADER_HPP

#include <fstream>

#include "jsoncpp/json/json.h"
#include "pedestrian_loader/pedestrian_loader.hpp"
#include <spdlog/spdlog.h>

struct CalmPedData : public VIPRA::PedData {
  CalmPedData()
    : VIPRA::PedData{"CalmPedData"}, positions{}, masses{}, shoulderLengths{}, desiredSpeeds{}, reactionTimes{} {}
  VIPRA::f3dVec      positions;
  std::vector<float> masses;
  std::vector<float> shoulderLengths;
  std::vector<float> desiredSpeeds;
  std::vector<float> reactionTimes;
};

class CalmPedestrianLoader : public PedestrianLoader {
 public:
  void                            configure(const VIPRA::Config::Map& configMap) override;
  void                            initialize() override;
  std::unique_ptr<VIPRA::PedData> LoadPedestrians(const std::string& filePath) const override;
};

#endif