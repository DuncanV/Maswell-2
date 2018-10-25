/**
 *  @file Manager.h
 *  @class Manager
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 */

#ifndef PROJECT_MANAGER_H
#define PROJECT_MANAGER_H

#include "PitCrew.h"
#include "State.h"

class Manager : public PitCrew{
public:

    /**
     * Constructor for the Manager
     * @param med - Mediator for the team
     * @param car - Car for the team
     */
    Manager(Mediator* med, Car* car) : PitCrew(med, car){
        setDescription("Manager working for " + car->getModelType());
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

        if(!elligible){

            car->stopped();
            cout << "Manager :: Telling crew to fix the car!\n";
            changed();
            car->racing();
        }
    };
};


#endif //PROJECT_MANAGER_H
