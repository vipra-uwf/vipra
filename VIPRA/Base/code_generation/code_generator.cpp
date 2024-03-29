
#include <string>
#include <unordered_map>
#include <vector>

#include "configuration/configuration_reader.hpp"

// NOLINTNEXTLINE(hicpp-avoid-c-arrays, modernize-avoid-c-arrays, cppcoreguidelines-avoid-c-arrays) - (rolland) Takes in command line args
void        setFiles(int, char const*[]);
std::string log(const std::string& message);

std::string generateIncludes();
std::string generateFunctionDeclarations();
std::string generateObjectFunction(const std::string& className, const std::string& type);
std::string generateFunctionOptions(const std::string& type);
std::string generateMain();
std::string initializeModules();
std::string turnOffLint();
std::string turnOnLint();
std::string setLogLevel();
std::string generateGlobals();
std::string setupMPI();
std::string base();

std::string mainFunctionDefinition();
std::string generateModules();

std::string runSim();
std::string outputSetup();

// NOLINTBEGIN : (rolland) Saving reworking these into local variables      : ignoring (cppcoreguidelines-avoid-non-const-global-variables)
namespace {
bool                     requireCompiled = true;
std::string              outputFile;
std::string              optionsFile;
std::vector<std::string> includes;
VIPRA::Config            jsonObj;

/**
 * @brief Map of all module types and their base class name
 * 
 */
const std::unordered_map<std::string, std::string> TYPES{
    {"pedestrian_dynamics_model", "PedestrianDynamicsModel"},
    {"goals", "Goals"},
    {"output_sink", "Sink"},
    {"pedestrian_set", "PedestrianSet"},
    {"obstacle_set", "ObstacleSet"},
    {"configuration_reader", "ConfigurationReader"},
    {"simulation", "Simulation"},
    {"policy_model", "PolicyModel"},
    {"map_loader", "MapLoader"},
    {"pedestrian_loader", "PedestrianLoader"},
    {"human_behavior_model", "HumanBehaviorModel"}};
}  // namespace
// NOLINTEND

int main(int argc, char const* argv[]) {
  setFiles(argc, argv);

  jsonObj = VIPRA::ConfigurationReader::getConfiguration(optionsFile);

  std::string functionDeclsStr = generateFunctionDeclarations();
  std::string objectFunctionsStr;
  for (const auto& [type, className] : TYPES) {
    objectFunctionsStr += generateObjectFunction(className, type);
  }

  std::string lintOff = turnOffLint();
  std::string baseStr = base();
  std::string lintOn = turnOnLint();
  std::string includesStr = generateIncludes();
  std::string mainFunctionStr = generateMain();
  std::string globalsStr = generateGlobals();

  std::ofstream mainFile;
  mainFile.open(outputFile);
  if (!mainFile.is_open()) {
    std::cerr << "[ERROR] Unable to open output file\n";
    return -1;
  }

  mainFile << lintOff << baseStr << includesStr << functionDeclsStr << globalsStr
           << mainFunctionStr << objectFunctionsStr << lintOn;

  mainFile.close();

  return 0;
}

std::string base() {
  std::ifstream     baseFile("./Base/code_generation/base.cpp");
  std::stringstream buffer;
  buffer << baseFile.rdbuf();
  return buffer.str();
}

// NOLINTBEGIN : (rolland) getting around using plain ptr arithmetic for this isn't worth it    : ignoring (cppcoreguidelines-pro-bounds-pointer-arithmetic)
/**
 * @brief Gets the file paths provided from command line
 * 
 * @param argc : 
 * @param argv : 
 */
void setFiles(int argc, const char** argv) {
  if (argc > 4 || argc < 3) {
    std::cerr << "Usage: generateMain *output file* *options file*\n";
    exit(1);
  }

  outputFile = std::string(argv[1]);
  optionsFile = std::string(argv[2]);
  if (argc == 4) {
    requireCompiled = (strcmp(argv[3], "-noCompReq") != 0);
  }
}
// NOLINTEND

/**
 * @brief Creates a string with include paths for each module found by the launcher, plus somw standard/library includes
 * 
 * @return std::string 
 */
std::string generateIncludes() {
  std::string generatedIncludes;
  for (const auto& type : TYPES) {
    for (const auto& option : jsonObj[type.first]) {
      if (!requireCompiled || option["compiled"]) {
        includes.emplace_back(option["dirPath"].template get<std::string>() + "/" +
                              option["name"].template get<std::string>() + ".hpp");
      }
    }
  }

  for (const auto& include : includes) {
    generatedIncludes += "#include \"" + include + "\"\n";
  }

  generatedIncludes += "#include <spdlog/spdlog.h>\n";
  generatedIncludes += "#include <memory>\n\n";
  generatedIncludes += "#include <mpi.h>\n\n";
  generatedIncludes += "#include <clock/clock.hpp>\n";

  generatedIncludes += "#include \"parameter_sweep/parameter_sweep.hpp\"\n";
  generatedIncludes += "#include \"arguments/arguments.hpp\"\n";
  generatedIncludes += "#include \"configuration/config.hpp\"\n";
  generatedIncludes += "#include \"output/output.hpp\"\n";

  // generatedIncludes += "namespace VIPRA {\n";

  return generatedIncludes;
}

/**
 * @brief Creates a string with all of the function declarations for module generation
 * 
 * @return std::string 
 */
std::string generateFunctionDeclarations() {
  std::string generatedDeclarations{};

  for (const auto& [type, className] : TYPES) {
    generatedDeclarations += "std::unique_ptr<VIPRA::" + className + "> generate" +=
        className + "(const std::string& id, const VIPRA::Config& configMap);\n";
  }

  return generatedDeclarations;
}

/**
 * @brief Creates a string with the function for generating a module of type
 * 
 * @param className : 
 * @param type : 
 * @return std::string 
 */
std::string generateObjectFunction(const std::string& className,
                                   const std::string& type) {
  std::string generatedFunction =
      "\nstd::unique_ptr<VIPRA::" + className + "> generate" + className +
      "(const std::string& id, const VIPRA::Config& configMap)\n"
      "{\n";

  generatedFunction += generateFunctionOptions(type);

  return generatedFunction;
}

/**
 * @brief Creates a string with the if block that checks which module implementation is being used
 * 
 * @param type : 
 * @return std::string 
 */
std::string generateFunctionOptions(const std::string& type) {
  std::string generatedFunction;
  for (const auto& option : jsonObj[type]) {
    if (!requireCompiled || option["compiled"]) {
      generatedFunction +=
          log("Creating " + type + " Implementation") + "\n\tif(id==\"" +
          option["id"].template get<std::string>() + "\"){\n\t\tstd::unique_ptr<" +
          option["className"].template get<std::string>() + "> " +
          option["name"].template get<std::string>() + " = std::make_unique<" +
          option["className"].template get<std::string>() + ">();\n\t\t" +
          log("Configuring " + type +
              " Module: ID: " + option["id"].template get<std::string>()) +
          "\n\t\t" + option["name"].template get<std::string>() +
          "->configure(configMap);" + "\n\t\treturn " +
          option["name"].template get<std::string>() + ";" + "\n\t}";
    }
  }
  generatedFunction += "\n\tspdlog::error(\"No Valid Module of Type: " + type +
                       "Was Chosen. Provided ID: {} \",  id); ";
  generatedFunction += "\n\texit(1);";
  generatedFunction += "\n\treturn nullptr;\n}";
  return generatedFunction;
}

/**
 * @brief Creates a string with the generated main function
 * 
 * @return std::string 
 */
std::string generateMain() {
  std::string mainFunction;

  mainFunction += mainFunctionDefinition();
  mainFunction += generateModules();
  mainFunction += log("Generating Modules");
  mainFunction += initializeModules();
  mainFunction += log("Setting Up Output Handlers");
  mainFunction += outputSetup();
  mainFunction += runSim();
  mainFunction += "\nBHVR::AttributeHandling::cleanup();";
  mainFunction += "\nVIPRA::Output::write(simID);";
  mainFunction += "\n}";

  return mainFunction;
}

/**
 * @brief Creates a string that sets the spdlog log level
 * 
 * @return std::string 
 */
std::string setLogLevel() {
  return "\n#ifndef NDEBUG"
         "\n\tspdlog::set_level(spdlog::level::debug);"
         "\n\tspdlog::info(\"Set Logging Level To Debug\");"
         "\n#endif";
}

/**
 * @brief Creates a string for setting up MPI
 * 
 * @return std::string 
 */
std::string setupMPI() {
  return "\n\tMPI_Init(&argc, &argv);"
         "\n\tMPI_Comm_size(MPI_COMM_WORLD, &np);"
         "\n\tMPI_Comm_rank(MPI_COMM_WORLD, &id);"
         "\n\tNUM = args.get<int>(\"simulations\");";
}

/**
 * @brief Creates a string that initializes each module in order
 * 
 * @return std::string 
 */
std::string initializeModules() {
  return log("Initializing Map Loader") + "\n\tmap_loader->initialize();\n\t" +

         log("Loading Map") +
         "\n\tauto map = map_loader->loadMap(args.get<std::string>(\"obstacles\"));\n\t" +

         log("Initializing Obstacle Set") + "\n\ttimer.start();" +
         "\n\tobstacle_set->initialize(std::move(map));" +
         "\n\tauto stopTime = timer.stop(); spdlog::debug(\"Obstacle Set Initialization: "
         "{}\", stopTime);" +
         "\n\t" +

         log("Writing Pedestrian Config And Loading Pedestrians") + "\n\ttimer.start();" +
         "\n\tauto peds = "
         "pedestrian_loader->loadPedestrians(args.get<std::string>(\"pedestrians\"));"
         "\n\t" +
         "\n\tstopTime = timer.stop(); spdlog::debug(\"Loading Pedestrians: {}\", "
         "stopTime);" +
         "\n\t" +

         log("Initializing Pedestrian Set") + "\n\ttimer.start();" +
         "\n\tpedestrian_set->initialize(std::move(peds));\n\t" +
         "\n\tstopTime = timer.stop(); spdlog::debug(\"Pedestrian Set Initialization: "
         "{}\", stopTime);" +
         "\n\t" +

         log("Initializing Goals") + "\n\ttimer.start();" +
         "\n\tgoals->initialize(*obstacle_set, *pedestrian_set);\n\t" +
         "\n\tstopTime = timer.stop(); spdlog::debug(\"Goals Initialization: {}\", "
         "stopTime);" +
         "\n\t" +

         log("Initializing Pedestrian Dynamics Model") + "\n\ttimer.start();" +
         "\n\tpedestrian_dynamics_model->initialize(*pedestrian_set, *obstacle_set, "
         "*goals);\n\t" +
         "\n\tstopTime = timer.stop(); spdlog::debug(\"Pedestrian Model Initialization: "
         "{}\", stopTime);" +
         "\n\t" +

         log("Initializing Human Behavior Model") + "\n\ttimer.start();" +
         "\n\thuman_behavior_model->initialize(*pedestrian_set, *obstacle_set, "
         "*goals);\n\t" +
         "\n\tstopTime = timer.stop(); spdlog::debug(\"Behavior Model Initialization: "
         "{}\", stopTime);" +
         "\n\t" +

         log("Initializing Simulation") + "\n\tsimulation->initialize();\n\t";
}

/**
 * @brief Creates string with the start of the main function definition
 * 
 * @return std::string 
 */
std::string mainFunctionDefinition() {
  return "\nvoid simulationMain(const std::string& simID, VIPRA::Args& args, "
         "VIPRA::Config& config, VIPRA::Config& "
         "params) {";
}

/**
 * @brief Creates a string that calls the generate function for each module type
 * 
 * @return std::string 
 */
std::string generateModules() {
  std::string str;
  for (const auto& [type, className] : TYPES) {
    str += "\n\tstd::unique_ptr<VIPRA::" + className + "> " += type + " = generate" +=
        className + R"((config["modules"][")" +=
        type + "\"].template get<std::string>(), params[\"" += type + "\"]);\n";
  }
  return str;
}

/**
 * @brief Creates the string that declares global variables
 * 
 * @return std::string
 */
std::string generateGlobals() { return "\nVIPRA::Clock timer;"; }

/**
 * @brief Creates a string that starts the simulation
 * 
 * @return std::string 
 */
std::string runSim() {
  return "\n\tsimulation->run(*goals,"
         "*pedestrian_set,"
         "*obstacle_set,"
         "*pedestrian_dynamics_model,"
         "*human_behavior_model,"
         "*policy_model);";
}

/**
 * @brief Creates a string that initializes the output writer
 * 
 * @return std::string 
 */
std::string outputSetup() {
  return "\n\tVIPRA::Output::initialize(std::move(output_sink));"
         "\n\tVIPRA::Output::configure(params[\"output\"]);";
}

/**
 * @brief Creates a string that logs to the console
 * 
 * @param message : 
 * @return std::string 
 */
std::string log(const std::string& message) {
  return "spdlog::info( \"" + message + "\");\n";
}

/**
 * @brief Creates a string that turns of linting for the file
 * 
 * @return std::string 
 */
std::string turnOffLint() {
  return "\n// NOLINTBEGIN (rolland) No point in linting generated code : ignoring (all) "
         "\n";
}
std::string turnOnLint() { return "\n// NOLINTEND\n"; }