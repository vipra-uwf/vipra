#ifndef INPUT_DATALOADER_HPP
#define INPUT_DATALOADER_HPP

#include "../simulation/data.hpp"
#include "../type_definitions.hpp"
#include <unordered_map>
#include <vector>

typedef std::vector<std::unordered_map<std::string, std::string>> ENTITY_SET;

class InputDataLoader
{
    public:
        virtual ~InputDataLoader() = default;

        // TODO create hashmap setter methods just outputDataWriter
        // TODO fileName shouldnt be optional is json but parentElementName should be
        // TODO therefore it should go into the configuartion section
        // TODO extractFileData should take no params, just re call configure and pass a new map to it
        virtual void extractFileData(
            std::string fileName, 
            CONFIG_MAP* configMap) = 0;
        virtual void configure(CONFIG_MAP* configMap) = 0; 
        // virtual void configueExtraction(CONFIG_MAP* configMap) = 0;
        virtual ENTITY_SET getInputEntities() = 0;
};

#endif
