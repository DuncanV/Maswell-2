//
// Created by Tjaart on 2018/10/13.
//

#ifndef PROJECT_MANAGER_H
#define PROJECT_MANAGER_H

#include "PitCrew.h"
#include "State.h"

class Manager : public PitCrew{
public:
    Manager(Mediator* med, Car* car) : PitCrew(med, car){
        setDescription("Manager working for " + car->getModelType());
    };

    virtual bool* getTyreCondition() {PitCrew::getTyreCondition();};
    virtual void setTyreCondition(bool* status){PitCrew::setTyreCondition(status);};

    virtual bool getFuelLevel() {PitCrew::getFuelLevel();};
    virtual void setFuelLevel(bool status){PitCrew::setFuelLevel(status);};

    virtual bool getDamage() {PitCrew::getDamage();};
    virtual void setDamage(bool status){PitCrew::setDamage(status);};

    virtual void update(bool* tyreCondition, bool fuelLevel, bool damage) {
        setTyreCondition(tyreCondition);
        setFuelLevel(fuelLevel);
        setDamage(damage);

        bool elligible = true;
        for (int i=0; i<car->getNumTyres(); ++i){
            if(tyreCondition[i]){
                elligible = false;
            }
        }
        if (fuelLevel){
            elligible = false;
        }
        if (damage){
            elligible = false;
        }

        if(elligible){
//            car->ready();
//            cout << "Manager :: Car is ready to race!\n";
        } else{
            car->stopped();
            cout << "Manager :: Telling crew to fix the car!\n";
            changed();
        }

        car->racing();
    };
};


#endif //PROJECT_MANAGER_H
