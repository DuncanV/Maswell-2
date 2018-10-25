/**
 *  @file PitCrew.h
 *  @class PitCrew
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 */

#ifndef PROJECT_PITCREW_H
#define PROJECT_PITCREW_H

#include <vector>
#include "Car.h"
#include "Mediator.h"

using namespace std;

class Mediator;
class PitStop;
class Car;

class PitCrew {
public:
    /**
     * default constructor for a new PitCrew member
     * @param med The mediator for which the member will communicate to
     * @param car The car the member will work with
     */
    PitCrew(Mediator* med, Car* car);

    /**
     * function for attaching the crewmembers to a pitstop allowing us to get a description
     * of the crew members of a team
     * @param pitStop the pitstop the member is working for
     */
    void registerWork(PitStop* pitStop);

    /**
     * function to tell other colleagues that belongs to the same mediator that the car is changed
     */
    void changed();

    /**
     * function when the car has been changed but when the team should not be notified
     */
    void changedCar();

    /**
     * function to set the description of a member allowing us to get a detailed view of the team
     * @param des
     */
    void setDescription(string des);

    /**
     * function to get the description of the member
     * @return
     */
    string getDescription();

    /**
     * Abstract function to update the team members
     * @param tyreCondiiton
     * @param fuelLevel
     * @param damage
     */
    virtual void update(bool* tyreCondiiton, bool fuelLevel, bool damage) = 0;

    /**
     * Get the tyreCondition for the car
     * @return bool saying if there is a problem or not
     */
    virtual bool * getTyreCondition();

    /**
    * Set the tyreCondition for the car
    * @param bool saying if there is a problem or not
    */
    virtual void setTyreCondition(bool* status);

    /**
     * Get the fuelLevel for the car
     * @return bool saying if there is a problem or not
     */
    virtual bool getFuelLevel();

    /**
     * Set the fuelLevel for the car
     * @param bool saying if there is a problem or not
     */
    virtual void setFuelLevel(bool status);

    /**
     * Get the damage for the car
     * @return bool saying if there is a problem or not
     */
    virtual bool getDamage();

    /**
     * Set the damage for the car
     * @param bool saying if there is a problem or not
     */
    virtual void setDamage(bool status);

protected:
    /**
     * @brief description describing the crew member
     */
    string description;

    /**
     * @brief the team/pitstop the member is working for
     */
    PitStop* workFor;

    /**
     * @brief the car the member is working for
     */
    Car* car;

    /**
     * @brief tyrecondition for the car
     */
    bool* tyreCondition;

    /**
     * @brief fuel level for the car
     */
    bool fuelLevel;

    /**
     * @brief damage for the car
     */
    bool damage;

    /**
     * @brief mediator the car belongs to
     */
    Mediator* mediator;
};


#endif //PROJECT_PITCREW_H
