
#include "calm_pedestrian_loader.hpp"

void
CalmPedestrianLoader::configure(const VIPRA::ConfigMap& configMap) {}

void
CalmPedestrianLoader::initialize() {}

std::unique_ptr<VIPRA::PedData>
CalmPedestrianLoader::LoadPedestrians(const std::string& filePath) const {
  Json::Value             jsonDocument;
  Json::CharReaderBuilder jsonReader;
  std::ifstream           fileStream;
  std::string             errors;

  fileStream.open(filePath);
  if (!fileStream.is_open()) {
    PedestrianLoaderException::Throw("Unable To Open Map File: " + filePath + "\n");
  }

  if (!Json::parseFromStream(jsonReader, fileStream, &jsonDocument, &errors)) {
    fileStream.close();
    LJ::Error(simLogger, "CalmPedestrianLoader: Jsoncpp unable to parse file");
    PedestrianLoaderException::Throw("Unable To Parse Map File: " + filePath + "\n");
  }
  fileStream.close();

  try {
    LJ::Debug(simLogger, "CalmPedestrianLoader: Parsed File, Building Pedestrians");
    std::unique_ptr<CalmPedData> inputData = std::make_unique<CalmPedData>();
    for (unsigned int i = 0; i < jsonDocument.size(); i++) {
      const std::string type = jsonDocument.getMemberNames()[i];
      inputData->positions = VIPRA::f3dVec{};
      inputData->masses = std::vector<float>{};
      inputData->desiredSpeeds = std::vector<float>{};
      inputData->reactionTimes = std::vector<float>{};

      for (unsigned int j = 0; j < jsonDocument[type].size(); j++) {
        VIPRA::f3d position{};
        for (unsigned int k = 0; k < jsonDocument[type][j].size(); ++k) {
          const std::string name = jsonDocument[type][j].getMemberNames()[k];
          if (name == "x") {
            position['x'] = std::stof(jsonDocument[type][j][name].asString());
          } else if (name == "y") {
            position['y'] = std::stof(jsonDocument[type][j][name].asString());
          } else if (name == "z") {
            position['z'] = std::stof(jsonDocument[type][j][name].asString());
          } else if (name == "mass") {
            inputData->masses.push_back(std::stof(jsonDocument[type][j][name].asString()));
          } else if (name == "reaction") {
            inputData->reactionTimes.push_back(std::stof(jsonDocument[type][j][name].asString()));
          } else if (name == "desiredSpeed") {
            inputData->desiredSpeeds.push_back(std::stof(jsonDocument[type][j][name].asString()));
          } else if (name == "shoulderLength") {
            inputData->shoulderLengths.push_back(std::stof(jsonDocument[type][j][name].asString()));
          }
        }
        inputData->positions.push_back(position);
      }
    }
    return inputData;
  } catch (const std::exception& ex) {
    LJ::Debug(simLogger, "CalmPedestrianLoader: Error Building Pedestrians, Error: {}", ex.what());
    PedestrianLoaderException::Throw("Unable To Parse Map File: " + filePath + "\n");
  }
  LJ::Debug(simLogger, "CalmPedestrianLoader: Attempt to Return Empty Pedestrians Data");
  PedestrianLoaderException::Throw("Unable To Parse Map File: " + filePath + "\n");
  return {};
}