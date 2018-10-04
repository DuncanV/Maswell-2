/**
 *  @file PimpMyRide.h
 *  @class PimpMyRide
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Decorcator for Decorator Pattern
 */

#ifndef PROJECT_PIMPMYRIDE_H
#define PROJECT_PIMPMYRIDE_H

#include "Car.h"

class PimpMyRide: public Car
{
private:
    /**
     * @brief a car object that will be decorated
     */
    Car* car;
public:

    /**
    * Defualt constructor used for PimpMyRide
    */
    PimpMyRide(){
        car=0;
    }

    /**
     * The destructor for Car
     */
    ~PimpMyRide(){delete car;}

    /**
     * add function for decorator
     * @param c is car object
     */
    virtual void add(Car* _car)
    {
        if(car==0)
            car=_car;
        else
            car->add(_car);
    }

    virtual Car* clone(bool flag_){};

    /**
     * showCarStats function to show the stats of a car
     * @return string stating the stats
     */
    virtual string showCarStats()
    {
        if(car!=0)
            return getDescription() + car->showCarStats();
        else
            return getDescription();
    }
};
#endif //PROJECT_PIMPMYRIDE_H
