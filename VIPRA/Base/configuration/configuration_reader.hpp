#ifndef CONFIGURATION_READER_HPP
#define CONFIGURATION_READER_HPP

#include "../_pch/pch.hpp"

#include "../definitions/type_definitions.hpp"
#include "../jsoncpp/json/json.h"

class ConfigurationReader {
 public:
  void        readJsonConfiguration(std::string fileName);
  Json::Value getJsonObject();

  void configure(const CONFIG_MAP& config);

 private:
  Json::Value             jsonDocument;
  Json::CharReaderBuilder jsonReader;
  std::ifstream           fileStream;
  std::string             errors;

  void openFile(std::string fileName);
  void parseFile();
};

#endif