/**
 *  @file Nitro.h
 *  @class Nitro
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Decorcator for Decorator Pattern
 */

#ifndef PROJECT_NITRO_H
#define PROJECT_NITRO_H
#include "PimpMyRide.h"

class Nitro: public PimpMyRide
{
public:
    Nitro(Car* Decorate):PimpMyRide()
    {
        setDescription("Nitro Yeah!\n");
        Decorate->setSpeed(Decorate->getSpeed()+20);
        Decorate->setAcceleration(Decorate->getAcceleration()+20);
        Decorate->setHandling(Decorate->getHandling()-20);
    }
    ~Nitro(){};
};
#endif //PROJECT_NITRO_H
