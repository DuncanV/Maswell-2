/**
 *  @file SpikedTires.h
 *  @class SpikedTires
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Decorcator for Decorator Pattern
 */

#ifndef PROJECT_SPIKEDTIRES_H
#define PROJECT_SPIKEDTIRES_H
#include "PimpMyRide.h"

class SpikedTires: public PimpMyRide
{
public:
    SpikedTires():PimpMyRide()
    {
        setDescription("Spiked Tires!\n");
    }
    ~SpikedTires(){};
};
#endif //PROJECT_SPIKEDTIRES_H
