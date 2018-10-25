//
// Created by Tjaart on 2018/10/13.
//

#ifndef PROJECT_REFUELLER_H
#define PROJECT_REFUELLER_H

#include "PitCrew.h"

class Refueller : public PitCrew{
public:
    Refueller(Mediator* med, Car* car) : PitCrew(med, car){
        setDescription("Refueller working for " + car->getModelType());
    };

    virtual bool* getTyreCondition() {PitCrew::getTyreCondition();};
    virtual void setTyreCondition(bool* status){PitCrew::setTyreCondition(status);};

    virtual bool getFuelLevel() {PitCrew::getFuelLevel();};
    virtual void setFuelLevel(bool status){PitCrew::setFuelLevel(status);};

    virtual bool getDamage() {PitCrew::getDamage();};
    virtual void setDamage(bool status){PitCrew::setDamage(status);};

    virtual void update(bool* tyreCondition, bool fuelLevel, bool damage){
        setFuelLevel(fuelLevel);
        if (fuelLevel)
            refuel();
        cout << "Refueller :: No fuel needed\n";
    };

    void refuel(){
        cout << "Refueller :: Refuelling the car\n";
        int time = 20;
        car->setTrackTime(car->getTrackTime() + time);
        car->setRefuel(100);
        setFuelLevel(false);
        cout << "Refueller :: Refuelled the car in " << time << " seconds\n";
        changedCar();
    };
};


#endif //PROJECT_REFUELLER_H
