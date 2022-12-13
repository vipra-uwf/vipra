#ifndef INPUT_JSON_READER_HPP
#define INPUT_JSON_READER_HPP

#include "../input_data_loader.hpp"
#include "jsoncpp/json/json.h"

class InputJSONReader : public InputDataLoader {
 private:
 public:
  [[nodiscard]] VIPRA::EntitySet getInputEntities(const std::string& filePath) override;
  void                           configure(const VIPRA::ConfigMap& configMap) override;
};

#endif