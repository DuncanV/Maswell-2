//
// Created by Tjaart on 2018/10/13.
//

#ifndef PROJECT_TYRECHANGER_H
#define PROJECT_TYRECHANGER_H

#include "PitCrew.h"

class TyreChanger : public PitCrew{
public:
    TyreChanger(Mediator* med, int id_, Car* car) : PitCrew(med, car){id = id_; setDescription("TyreChanger" + to_string(id) + " working for " + car->getModelType());};

    virtual bool* getTyreCondition(){return tyreCondition;};
    virtual void setTyreCondition(bool* status){
        tyreCondition = status;
    };

    virtual bool getFuelLevel(){};
    virtual void setFuelLevel(bool status){};

    virtual bool getDamage(){};
    virtual void setDamage(bool status){};

    virtual void update(bool* tyreCondition, bool fuelLevel, bool damage){
        setTyreCondition(tyreCondition);
        changeTyre();
    };

    void changeTyre(){
        car->setTrackTime(20);
        car->setCarTyres(id);
        bool* condition = tyreCondition;
        condition[id] = false;
        setTyreCondition(condition);
        changed();
    };

private:
    int id;
};


#endif //PROJECT_TYRECHANGER_H
