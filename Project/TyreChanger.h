/**
 *  @file TyreChanger.h
 *  @class TyreChanger
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 */

#ifndef PROJECT_TYRECHANGER_H
#define PROJECT_TYRECHANGER_H

#include "PitCrew.h"

class TyreChanger : public PitCrew{
public:

    /**
     * Constructor for the Refueller
     * @param med - Mediator for the team
     * @param car - Car for the team
     */
    TyreChanger(Mediator* med, int id_, Car* car) : PitCrew(med, car){
        id = id_;
        setDescription("TyreChanger" + to_string(id) + " working for " + car->getModelType());
    };

    /**
     * Get the tyreCondition for the car
     * @return bool saying if there is a problem or not
     */
    virtual bool* getTyreCondition() {PitCrew::getTyreCondition();};

    /**
     * Set the tyreCondition for the car
     * @param bool saying if there is a problem or not
     */
    virtual void setTyreCondition(bool* status){PitCrew::setTyreCondition(status);};

    /**
     * Get the fuelLevel for the car
     * @return bool saying if there is a problem or not
     */
    virtual bool getFuelLevel() {PitCrew::getFuelLevel();};

    /**
     * Set the fuelLevel for the car
     * @param bool saying if there is a problem or not
     */
    virtual void setFuelLevel(bool status){PitCrew::setFuelLevel(status);};

    /**
     * Get the damage for the car
     * @return bool saying if there is a problem or not
     */
    virtual bool getDamage() {PitCrew::getDamage();};

    /**
    * Set the damage for the car
    * @param bool saying if there is a problem or not
    */
    virtual void setDamage(bool status){PitCrew::setDamage(status);};

    /**
    * Check if there is a problem with the car and change the state accordingly and notify other members
    * @param tyreCondition
    * @param fuelLevel
    * @param damage
    */
    virtual void update(bool* tyreCondition, bool fuelLevel, bool damage){
        setTyreCondition(tyreCondition);
        if(tyreCondition[id])
            changeTyre();
        cout << "TyreChanger :: No change needed\n";
    };

    /**
     * Change the tyre of the car and notify the manager
     */
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
