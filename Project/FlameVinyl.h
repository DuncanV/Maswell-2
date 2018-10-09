/**
 *  @file FlameVinyl.h
 *  @class FlameVinyl
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Decorcator for Decorator Pattern
 */

#ifndef PROJECT_FLAMEVINYL_H
#define PROJECT_FLAMEVINYL_H

#include "PimpMyRide.h"

class FlameVinyl: public PimpMyRide
{
public:
    /**
     * constructor to set description
     */
    FlameVinyl():PimpMyRide()
    {
        setDescription("Flame Vinyls!\n");
    }
    /**
     * destructor to delete the vinyl
     */
    ~FlameVinyl(){};

    /**
 * copy constructor used for cloning the decorators
 * @param _Car the car it copies
 * @param dummy just there to use instead of defualt constructor
 */
    FlameVinyl(FlameVinyl _Car,bool dummy)
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
        return new FlameVinyl(*this,true);
    }
};
#endif //PROJECT_FLAMEVINYL_H
