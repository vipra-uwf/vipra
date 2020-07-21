#ifndef OUTPUT_CRITERION_CHECKER_HPP
#define OUTPUT_CRITERION_CHECKER_HPP

#include "output_data_writer.hpp"
#include "../entity_sets/pedestrian_set.hpp"

//rename SimulationOutputHandler -> TimestepOutputHandler
class OutputCriterionChecker 
{
    public:
        virtual void setOutputDataWriter(
            OutputDataWriter* outputDataWriter) = 0;
        virtual void setPedestrianSet(PedestrianSet* pedestrianSet) = 0;
        virtual bool isOutputCriterionMet() = 0;
        virtual void writeData() = 0;
};

#endif