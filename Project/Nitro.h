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
    /**
     * constructor which assigns description and alters behaviour of car
     * @param Decorate the car in which the behaviours are added
     */
    Nitro(Car* Decorate):PimpMyRide()
    {
        setDescription("Nitro Yeah!\n");
        Decorate->setSpeed(Decorate->getSpeed()+20);
        Decorate->setAcceleration(Decorate->getAcceleration()+20);
        Decorate->setHandling(Decorate->getHandling()-20);
    }

    /**
     * destructor for Nitro
     */
    ~Nitro(){};

    /**
     * copy constructor used for cloning the decorators
     * @param _Car the car it copies
     * @param dummy just there to use instead of defualt constructor
     */
    Nitro(Nitro _Car,bool dummy)
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
        return new Nitro(*this,true);
    }
};
#endif //PROJECT_NITRO_H
