/**
 *  @file Mechanic.h
 *  @class Mechanic
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 */

#ifndef PROJECT_MECHANIC_H
#define PROJECT_MECHANIC_H

#include "PitCrew.h"

class Mechanic : public PitCrew{
public:

    /**
     * Constructor for the Mechanic
     * @param med - Mediator for the team
     * @param car - Car for the team
     */
    Mechanic(Mediator* med, Car* car) : PitCrew(med, car){
        setDescription("Mechanic working for " + car->getModelType());
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
        setDamage(damage);
        if (damage)
            repair();
        cout << "Mechanic :: No repair needed\n";
    };

    /**
     * Repair the car and notify the manager
     */
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
