//
// Created by Duncan + Tjaart on 2018/10/03.
//

#ifndef PROJECT_PIMPMYRIDE_H
#define PROJECT_PIMPMYRIDE_H

#include "Car.h"

class PimpMyRide: public Car
{
private:
    Car* car;
public:
    PimpMyRide(){
        car=0;
    }
    ~PimpMyRide(){delete car;}
    virtual void add(Car* _car)
    {
        if(car==0)
            car=_car;
        else
            car->add(_car);
    }
    virtual Car* clone(){};
    virtual string showCarStats()
    {
        if(car!=0)
        return getDescription()+car->showCarStats();
        else
            return getDescription();
    }
};
#endif //PROJECT_PIMPMYRIDE_H
