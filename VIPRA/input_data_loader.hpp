#ifndef INPUT_DATALOADER_HPP
#define INPUT_DATALOADER_HPP

#include <vector>

#include "data.hpp"

class InputDataLoader
{
    public:
        virtual void storeData(Data* data) = 0;
};

#endif
