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
    /**
    * constructor which assigns description and alters behaviour of car
    * @param Decorate the car in which the behaviours are added
    */
    Slick(Car* DecorateCar):PimpMyRide()
    {
        setDescription("Slick Tires!\n");
        DecorateCar->setSpeed(DecorateCar->getSpeed()-10);
        DecorateCar->setHandling(DecorateCar->getHandling()+15);
        DecorateCar->setAcceleration(DecorateCar->getAcceleration()+5);
    }

    /**
    * destructor for Slick
    */
    ~Slick(){};

    /**
     * copy constructor used for cloning the decorators
     * @param _Car the car it copies
     * @param dummy just there to use instead of defualt constructor
     */
    Slick(Slick _Car,bool dummy)
    {
        setDescription(_Car.getDescription());
        if(_Car.car!=0)
        {
            add(_Car.car->FullClone());
        }
    }

    /**
     * implementation of FullClone to deep copy the decorater
     * @return Car object which is the decorator
     */
    virtual Car* FullClone(){
        return new Slick(*this,true);
    }
};
#endif //PROJECT_SPIKEDTIRES_H
