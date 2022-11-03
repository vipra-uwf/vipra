#ifndef PEDESTRIAN_SET_HPP
#define PEDESTRIAN_SET_HPP

#include "../../Base/definitions/type_definitions.hpp"

class PedestrianSet {
 public:
  virtual ~PedestrianSet() = default;
        
        virtual void                                    configure(const CONFIG_MAP& configMap)                        = 0;
        virtual void                                    initialize(size_t pedestrianCount)                      = 0;
        virtual void                                    removePedestrian(size_t pedestrianIndex)                   = 0;

        virtual int                                     getNumPedestrians()                     const noexcept  = 0;
        virtual const DimVector&                        getPedestrianCoordinates()              const noexcept  = 0;
        virtual const DimVector&                        getVelocities()                         const noexcept  = 0;
        virtual const std::vector<FLOATING_NUMBER>&     getSpeeds()                             const noexcept  = 0;
        virtual const std::vector<int>&                 getIds()                                const noexcept  = 0;

        virtual void setNumPedestrians(int numPedestrians)                                              = 0;

        virtual void setPedestrianCoordinates(const Dimensions& coords, size_t index)                   = 0;
        virtual void setPedestrianCoordinates(Dimensions&& coords, size_t index)                        = 0;
        virtual void setPedestrianCoordinates(DimVector&& coordinates)                    noexcept = 0;
        virtual void setPedestrianCoordinates(const DimVector& coordinates)               noexcept = 0;

        virtual void setVelocity(const Dimensions& velocity, size_t index)                              = 0;
        virtual void setVelocity(Dimensions&& velocity, size_t index)                                   = 0;
        virtual void setVelocities(const DimVector& velocities)                           noexcept = 0;
        virtual void setVelocities(DimVector&& velocities)                                noexcept = 0;

        virtual void setSpeeds(const std::vector<FLOATING_NUMBER>& speedsMetersPerSecond)               noexcept = 0;
        virtual void setSpeeds(std::vector<FLOATING_NUMBER>&& speedsMetersPerSecond)                    noexcept = 0;
        virtual void setSpeed(FLOATING_NUMBER speed, size_t index)                                      = 0;

        virtual void setIds(std::vector<int> ids)                                                       = 0;
};

#endif
