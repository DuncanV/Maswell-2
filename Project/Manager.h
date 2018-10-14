//
// Created by Tjaart on 2018/10/13.
//

#ifndef PROJECT_MANAGER_H
#define PROJECT_MANAGER_H

#include "PitCrew.h"

class Manager : public PitCrew{
public:
    Manager(Mediator* med, Car* car) : PitCrew(med, car){setDescription("Manager working for " + car->getModelType());};

    virtual bool* getTyreCondition() {return tyreCondition;};
    virtual void setTyreCondition(bool* status){
        tyreCondition = status;
    };

    virtual bool getFuelLevel() {return fuelLevel;};
    virtual void setFuelLevel(bool status){
        fuelLevel = status;
    };

    virtual bool getDamage() {return damage;};
    virtual void setDamage(bool status){
        damage = status;
    };

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
            cout << "RACE!!!\n";
        } else{
            changed();
        }
    };
};


#endif //PROJECT_MANAGER_H
