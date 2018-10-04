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
        Decorate->setHandling(Decorate->getHandling()+20);
        Decorate->setSpeed(Decorate->getSpeed()-10);
    }
    ~Spoiler(){};
    Spoiler(Spoiler _Car,bool dummy)
    {
        setDescription(_Car.getDescription());
        if(_Car.car!=0)
        {
            add(_Car.car->FullClone());
        }
    }
    virtual Car* FullClone(){
        return new Spoiler(*this,true);
    }
};
#endif //PROJECT_SPOILER_H
