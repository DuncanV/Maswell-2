//
// Created by Tjaart on 2018/10/13.
//

#ifndef PROJECT_MECHANIC_H
#define PROJECT_MECHANIC_H

#include "PitCrew.h"

class Mechanic : public PitCrew{
public:
    Mechanic(Mediator* med, Car* car) : PitCrew(med, car){setDescription("Mechanic working for " + car->getModelType());};

    virtual bool* getTyreCondition(){};
    virtual void setTyreCondition(bool* status){};

    virtual bool getFuelLevel(){};
    virtual void setFuelLevel(bool status){};

    virtual bool getDamage(){return damage;};
    virtual void setDamage(bool status){
        damage = status;
    };

    virtual void update(bool* tyreCondition, bool fuelLevel, bool damage){
        setDamage(damage);
        repair();
    };

    void repair(){
        car->setTrackTime(40);
        car->setCarDamage(0);
        setDamage(false);
        changed();
    };
};


#endif //PROJECT_MECHANIC_H
