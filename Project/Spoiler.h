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
    /**
    * constructor which assigns description and alters behaviour of car
    * @param Decorate the car in which the behaviours are added
    */
    Spoiler(Car* Decorate):PimpMyRide()
    {
        setDescription("You got yourself a spoiler!\n");
        Decorate->setHandling(Decorate->getHandling()+20);
        Decorate->setSpeed(Decorate->getSpeed()-10);
    }

    /**
    * destructor for Spoiler
    */
    ~Spoiler(){};

    /**
     * copy constructor used for cloning the decorators
     * @param _Car the car it copies
     * @param dummy just there to use instead of defualt constructor
     */
    Spoiler(Spoiler _Car,bool dummy)
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
        return new Spoiler(*this,true);
    }
};
#endif //PROJECT_SPOILER_H
