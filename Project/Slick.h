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
        DecorateCar->setAcceleration(DecorateCar->getAcceleration()+5);
    }
    ~Slick(){};
    Slick(Slick _Car,bool dummy)
    {
        setDescription(_Car.getDescription());
        if(_Car.car!=0)
        {
            add(_Car.car->FullClone());
        }
    }
    virtual Car* FullClone(){
        return new Slick(*this,true);
    }
};
#endif //PROJECT_SPIKEDTIRES_H
