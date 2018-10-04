/**
 *  @file Spoiler.h
 *  @class Spoiler
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Decorcator for Decorator Pattern
 */

#ifndef PROJECT_SPOILER_H
#define PROJECT_SPOILER_H

#include "PimpMyRide.h"

class Spoiler: public PimpMyRide
{
public:
    Spoiler(Car* Decorate):PimpMyRide()
    {
        setDescription("You got yourself a spoiler!\n");
        Decorate->setHandling(getHandling()+20);
        Decorate->setSpeed(getSpeed()-10);
    }
    ~Spoiler(){};
};
#endif //PROJECT_SPOILER_H
