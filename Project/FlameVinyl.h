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
    FlameVinyl():PimpMyRide()
    {
        setDescription("Flame Vinyls!\n");
//        setSpeed(DecorateCar->getSpeed());
//        setAccel(DecorateCar->getAcce());
//        setHandling(DecorateCar->getHandling());
    }
    ~FlameVinyl(){};
};
#endif //PROJECT_FLAMEVINYL_H
