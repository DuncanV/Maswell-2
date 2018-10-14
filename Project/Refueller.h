//
// Created by Tjaart on 2018/10/13.
//

#ifndef PROJECT_REFUELLER_H
#define PROJECT_REFUELLER_H

#include "PitCrew.h"

class Refueller : public PitCrew{
public:
    Refueller(Mediator* med, Car* car) : PitCrew(med, car){setDescription("Refueller working for " + car->getModelType());};

    virtual bool* getTyreCondition(){};
    virtual void setTyreCondition(bool* status){};

    virtual bool getFuelLevel(){return fuelLevel;};
    virtual void setFuelLevel(bool status){
        fuelLevel = status;
    };

    virtual bool getDamage(){};
    virtual void setDamage(bool status){};

    virtual void update(bool* tyreCondition, bool fuelLevel, bool damage){
        setFuelLevel(fuelLevel);
        refuel();
    };

    void refuel(){
        car->setTrackTime(20);
        car->setCarFuel(100);
        setFuelLevel(false);
        changed();
    };
};


#endif //PROJECT_REFUELLER_H
