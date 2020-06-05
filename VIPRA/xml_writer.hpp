#ifndef XML_WRITER_HPP
#define XML_WRITER_HPP

#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cstring>

#include "rapidxml-1.13/rapidxml.hpp"
#include "rapidxml-1.13/rapidxml_print.hpp"
#include "output_data_writer.hpp"
#include "data.hpp"

class XMLWriter: public OutputDataWriter
{
    public:
        XMLWriter();
        void configureXMLDocumentStructure(std::string, std::string, std::string, std::string, std::string);
        virtual void writeData(Data*);

    private:
        Data* data;
        std::ofstream fileStream;
        std::string rootNodeName;
        std::string dataNodeName;
        int numDataNodes;
        rapidxml::xml_document<> document;
        rapidxml::xml_node<>* rootNode;

        void openFile(std::string);
        void setRootNodeName(std::string);
        void setDataNodeName(std::string);
        void setData(Data*);
        void setNumDataNodes(int);
        void initializeXMLDeclaration(std::string, std::string);
        void initializeRootNode();
        void initializeDataNodes();
        void generateDataNode();
        void appendDataNodeAttribute(rapidxml::xml_node<>*, std::string, std::string);
        void writeVectorDataToNodes(std::string, std::vector<FLOATING_NUMBER>);
};


#endif
