//
// Created by Tjaart on 2018/10/13.
//

#ifndef PROJECT_PITCREW_H
#define PROJECT_PITCREW_H

#include <vector>
#include "Car.h"
#include "Mediator.h"

using namespace std;

class Mediator;
class PitStop;

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
     * function to tell other collegues that belongs to the same mediator that the car is changed
     */
    void changed();

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

    virtual void update(bool* tyreCondiiton, bool fuelLevel, bool damage) = 0;
    virtual bool * getTyreCondition() = 0;
    virtual void setTyreCondition(bool* status) = 0;
    virtual bool getFuelLevel() = 0;
    virtual void setFuelLevel(bool status) = 0;
    virtual bool getDamage() = 0;
    virtual void setDamage(bool status) = 0;

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
