/**
 *  @file AggressiveDriver.h
 *  @class AggressiveDriver
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief concreteStratey for strategy design pattern
 */

#ifndef PROJECT_AVERAGEDRIVER_H
#define PROJECT_AVERAGEDRIVER_H
#include "Driver.h"
class AverageDriver:public Driver
{
public:
    /**
    * constructor to set fuel, tyre and driving ability
    */
    AverageDriver(){

        int amount= rand()%40+120;
        double ability = (amount*1.0)/100;
        setAbility(ability);

        amount= rand()%40+120;
        ability = (amount*1.0)/100;
        setFuelAbility(ability);

        amount= rand()%40+120;
        ability = (amount*1.0)/100;
        setTyreAbility(ability);
    }
};
#endif //PROJECT_AVERAGEDRIVER_H
