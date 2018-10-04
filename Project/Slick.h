/**
 *  @file Slick.h
 *  @class Slick
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Decorcator for Decorator Pattern
 */

#ifndef PROJECT_SPIKEDTIRES_H
#define PROJECT_SPIKEDTIRES_H
#include "PimpMyRide.h"

class Slick: public PimpMyRide
{
public:
    Slick(Car* DecorateCar):PimpMyRide()
    {
        setDescription("Slick Tires!\n");
        DecorateCar->setSpeed(DecorateCar->getSpeed()-10);
        DecorateCar->setHandling(DecorateCar->getHandling()+15);
        DecorateCar->setAccel(DecorateCar->getAcce()+5);
    }
    ~Slick(){};
};
#endif //PROJECT_SPIKEDTIRES_H
