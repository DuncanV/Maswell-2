/**
 *  @file AggressiveDriver.h
 *  @class AggressiveDriver
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief concreteStratey for strategy design pattern
 */

#ifndef PROJECT_AGGRESSIVEDRIVER_H
#define PROJECT_AGGRESSIVEDRIVER_H

#include "Driver.h"
class AggressiveDriver:public Driver
{
public:
    /**
     * constructor to set fuel, tyre and driving ability
     */
    AggressiveDriver(){

        int amount= rand()%80+10;
        double ability = (amount*1.0)/100;
        setAbility(ability);

        amount= rand()%80+100;
        ability = (amount*1.0)/100;
        setFuelAbility(ability);

        amount= rand()%80+100;
        ability = (amount*1.0)/100;
        setTyreAbility(ability);
    };
};
#endif //PROJECT_AGGRESSIVEDRIVER_H
