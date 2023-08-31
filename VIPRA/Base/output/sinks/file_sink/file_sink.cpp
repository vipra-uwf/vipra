

#include "file_sink.hpp"

#include <spdlog/spdlog.h>
#include <fstream>
#include <stdexcept>

namespace VIPRA {

void FileSink::configure(const VIPRA::Config& config) {
  directory = config["outDirectory"];
}

void FileSink::write(const std::string& id, const nlohmann::json& json) {
  std::fstream output;
  std::string  filepath = directory + '/' + id;
  output.open(filepath, std::fstream::out | std::fstream::trunc);
  if (!output.is_open()) {
    throw std::runtime_error("Unable To Open Output File: " + filepath);
  }
  output << json;
  output.close();
}
}  // namespace VIPRA