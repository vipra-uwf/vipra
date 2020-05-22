#include "xmlreader.hpp"

XMLReader::XMLReader()
{

}

void XMLReader::openFile(std::string fileName)
{
    this->fileStream.open(fileName);
}

void XMLReader::setRootElement(std::string rootElement)
{
    this->rootElement = rootElement;
}

void XMLReader::setParseElement(std::string parseElement)
{
    this->parseElement = parseElement;
}

void XMLReader::readFile()
{
    std::vector<char> buffer((std::istreambuf_iterator<char>(this->fileStream)), std::istreambuf_iterator<char>());
    buffer.push_back('\0');
    this->fileContents = buffer;
    this->fileStream.close();
   // std::cout << &this->fileContents[0] << std::endl;
}

void XMLReader::parseXMLDocument()
{
   this->document.parse<rapidxml::parse_declaration_node | rapidxml::parse_no_data_nodes>(&this->fileContents[0]);
}

void XMLReader::extractFileData(std::string fileName, std::string rootElement, std::string parseElement)
{
    openFile(fileName);
    readFile();
    setRootElement(rootElement);
    setParseElement(parseElement);
    parseXMLDocument();
}

void XMLReader::setData(Data* data)
{
    this->data = data;
}

void XMLReader::initializeTraversalNodes()
{
    this->rootNode = this->document.first_node(this->rootElement.c_str());
    this->dataNode = this->rootNode->first_node(this->parseElement.c_str());
}

double XMLReader::getNodeAttributeValue(rapidxml::xml_node<>* node, std::string attribute)
{
    return std::stod(node->first_attribute(attribute.c_str())->value());
}

void XMLReader::storeData(Data* data)
{
    setData(data);
    initializeTraversalNodes();

    while(this->dataNode != 0)
    {   
        double xCoordinate = getNodeAttributeValue(this->dataNode, "x");
        double yCoordinate = getNodeAttributeValue(this->dataNode, "y");

        this->data->pushCoordinateData(xCoordinate, this->parseElement, "x");
        this->data->pushCoordinateData(yCoordinate, this->parseElement, "y");
       
        this->dataNode = this->dataNode->next_sibling();
    }
}





