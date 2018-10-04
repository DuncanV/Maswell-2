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
    Nitro(Nitro _Car,bool dummy)
    {
        setDescription(_Car.getDescription());
        if(_Car.car!=0)
        {
            add(_Car.car->FullClone());
        }
    }
    virtual Car* FullClone(){
        return new Nitro(*this,true);
    }
};
#endif //PROJECT_NITRO_H
