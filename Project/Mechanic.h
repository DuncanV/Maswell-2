//
// Created by Tjaart on 2018/10/13.
//

#ifndef PROJECT_MECHANIC_H
#define PROJECT_MECHANIC_H

#include "PitCrew.h"

class Mechanic : public PitCrew{
public:
    Mechanic(Mediator* med, Car* car) : PitCrew(med, car){
        setDescription("Mechanic working for " + car->getModelType());
    };

    virtual bool* getTyreCondition() {PitCrew::getTyreCondition();};
    virtual void setTyreCondition(bool* status){PitCrew::setTyreCondition(status);};

    virtual bool getFuelLevel() {PitCrew::getFuelLevel();};
    virtual void setFuelLevel(bool status){PitCrew::setFuelLevel(status);};

    virtual bool getDamage() {PitCrew::getDamage();};
    virtual void setDamage(bool status){PitCrew::setDamage(status);};

    virtual void update(bool* tyreCondition, bool fuelLevel, bool damage){
        setDamage(damage);
        if (damage)
            repair();
        cout << "Mechanic :: No repair needed\n";
    };

    void repair(){
        cout << "Mechanic :: Repairing the car\n";
        int time = 20;
        car->setTrackTime(car->getTrackTime() + time);
        car->setRepair(0);
        setDamage(false);
        cout << "Mechanic :: repaired the car in " << time << " seconds\n";
        changed();
    };
};


#endif //PROJECT_MECHANIC_H
