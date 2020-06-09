#ifndef OUTPUT_DATA_WRITER_HPP 
#define OUTPUT_DATA_WRITER_HPP 

#include "data.hpp"

class OutputDataWriter
{
    public:
        virtual void writeData(Data* data) = 0;
};

#endif