/**
 *  @file AggressiveDriver.h
 *  @class AggressiveDriver
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief concreteStratey for strategy design pattern
 */
#ifndef PROJECT_PASSIVEDRIVER_H
#define PROJECT_PASSIVEDRIVER_H
#include "Driver.h"
class PassiveDriver:public Driver
{
public:
    /**
    * constructor to set fuel, tyre and driving ability
    */
    PassiveDriver(){

        int amount= rand()%80+110;
        double ability = (amount*1.0)/100;
        setAbility(ability);

        amount= rand()%80+10;
        ability = (amount*1.0)/100;
        setFuelAbility(ability);

        amount= rand()%80+10;
        ability = (amount*1.0)/100;
        setTyreAbility(ability);
    };
};
#endif //PROJECT_PASSIVEDRIVER_H
