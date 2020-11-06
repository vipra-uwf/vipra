#ifndef OUTPUT_DATA_WRITER_HPP 
#define OUTPUT_DATA_WRITER_HPP 

#include <string>

#include "../simulation/data.hpp"
#include "../type_definitions.hpp"

class OutputDataWriter
{
    public:
        virtual ~OutputDataWriter() = default;

        virtual void configure(CONFIG_MAP* configMap) = 0; 
        virtual void initializeOutputFile(std::string outputFilePath) = 0;
        virtual void appendFloatAttributeToCurrentElement(
            std::string key, FLOATING_NUMBER value) = 0;
        virtual void appendStringAttributeToCurrentElement(
            std::string key, std::string value) = 0;
        virtual void writeToDocument(Data* data) = 0;
        virtual void writeDocumentContentsToFile() = 0;
        
        // TODO virtual method for starting new element
        // virtual void createNewElement(std::string elementName);
        // TODO virtual method for closing the current element
        // virtual void closeCurrentElement();
};

#endif