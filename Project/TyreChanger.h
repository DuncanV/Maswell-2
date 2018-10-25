//
// Created by Tjaart on 2018/10/13.
//

#ifndef PROJECT_TYRECHANGER_H
#define PROJECT_TYRECHANGER_H

#include "PitCrew.h"

class TyreChanger : public PitCrew{
public:
    TyreChanger(Mediator* med, int id_, Car* car) : PitCrew(med, car){
        id = id_;
        setDescription("TyreChanger" + to_string(id) + " working for " + car->getModelType());
    };

    virtual bool* getTyreCondition() {PitCrew::getTyreCondition();};
    virtual void setTyreCondition(bool* status){PitCrew::setTyreCondition(status);};

    virtual bool getFuelLevel() {PitCrew::getFuelLevel();};
    virtual void setFuelLevel(bool status){PitCrew::setFuelLevel(status);};

    virtual bool getDamage() {PitCrew::getDamage();};
    virtual void setDamage(bool status){PitCrew::setDamage(status);};

    virtual void update(bool* tyreCondition, bool fuelLevel, bool damage){
        setTyreCondition(tyreCondition);
        if(tyreCondition[id])
            changeTyre();
        cout << "TyreChanger :: No change needed\n";
    };

    void changeTyre(){
        cout << "TyreChanger :: changing the tyre\n";
        int time = 5;
        car->setTrackTime(car->getTrackTime() + time);
        car->setChanged(id, 100);
        bool* condition = tyreCondition;
        condition[id] = false;
        setTyreCondition(condition);
        cout << "TyreChanger :: changed the tyre in " << time << " seconds\n";
        changed();
    };

private:
    int id;
};


#endif //PROJECT_TYRECHANGER_H
