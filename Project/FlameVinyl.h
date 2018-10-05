/**
 *  @file FlameVinyl.h
 *  @class FlameVinyl
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Decorcator for Decorator Pattern
 */

#ifndef PROJECT_FLAMEVINYL_H
#define PROJECT_FLAMEVINYL_H

#include "PimpMyRide.h"

class FlameVinyl: public PimpMyRide
{
public:
    /**
     * constructor to set description
     */
    FlameVinyl():PimpMyRide()
    {
        setDescription("Flame Vinyls!\n");
    }
    /**
     * destructor to delete the vinyl
     */
    ~FlameVinyl(){};
};
#endif //PROJECT_FLAMEVINYL_H
