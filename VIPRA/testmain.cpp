// #include <iostream>

// #include "readers/input_json_reader.hpp"

// // g++ testmain.cpp readers/input_json_reader.cpp readers/jsoncpp.cpp

// int main()
// {
//     InputJSONReader inputJSONReader; 
//     CONFIG_MAP configMap;
    
//     inputJSONReader.extractFileData("input_data/TEST_entity_set.json", &configMap);
//     ENTITY_SET jsonEntitySet = inputJSONReader.getInputEntities();

//     for(int i = 0; i < jsonEntitySet.size(); i++) 
//     {
//         std::cout 
//         << jsonEntitySet[i]["x"] << "\n"
//         << jsonEntitySet[i]["y"] << "\n"
//         << jsonEntitySet[i]["mass"] << "\n"
//         << jsonEntitySet[i]["reaction_time"] << "\n" 
//         << jsonEntitySet[i]["desired_speed"] << "\n"
//         << "\n"
//         << std::endl;
//     } 

//     return 0;
// }