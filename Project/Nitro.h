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
        Decorate->setSpeed(getSpeed()+20);
        Decorate->setAccel(getAcce()+20);
    }
    ~Nitro(){};
};
#endif //PROJECT_NITRO_H
