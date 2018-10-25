/**
 *  @file Refueller.h
 *  @class Refueller
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 */

#ifndef PROJECT_REFUELLER_H
#define PROJECT_REFUELLER_H

#include "PitCrew.h"

class Refueller : public PitCrew{
public:

    /**
     * Constructor for the Refueller
     * @param med - Mediator for the team
     * @param car - Car for the team
     */
    Refueller(Mediator* med, Car* car) : PitCrew(med, car){
        setDescription("Refueller working for " + car->getModelType());
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
        setFuelLevel(fuelLevel);
        if (fuelLevel)
            refuel();
        cout << "Refueller :: No fuel needed\n";
    };

    /**
     * Refuel the car and notify the manager
     */
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
