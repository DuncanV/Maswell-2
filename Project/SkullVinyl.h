/**
 *  @file SkullVinyl.h
 *  @class SkullVinyl
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Decorcator for Decorator Pattern
 */

#ifndef PROJECT_SKULLVINYL_H
#define PROJECT_SKULLVINYL_H
#include "PimpMyRide.h"

class SkullVinyl: public PimpMyRide
{
public:
    /**
     * constructor to set description
     */
    SkullVinyl():PimpMyRide()
    {
        setDescription("Skull Vinyls!\n");
    }
    /**
    * destructor to delete the vinyl
    */
    ~SkullVinyl(){};

    /**
 * copy constructor used for cloning the decorators
 * @param _Car the car it copies
 * @param dummy just there to use instead of defualt constructor
 */
    SkullVinyl(SkullVinyl _Car,bool dummy)
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
        return new SkullVinyl(*this,true);
    }
};
#endif //PROJECT_SKULLVINYL_H
