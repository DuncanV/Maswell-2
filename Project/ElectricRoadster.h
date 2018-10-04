/**
 *  @file ElectricRoadster.h
 *  @class ElectricRoadster
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Product for Abstract Factory Pattern
 */
#ifndef PROJECT_ELECTRICROADSTER_H
#define PROJECT_ELECTRICROADSTER_H

#include "ElectricCar.h"

class ElectricRoadster : public ElectricCar{
public:
    /**
     * Constructor for ElectricFormulaOne, calls Constructor  of ElectricCar
     */
    ElectricRoadster() : ElectricCar("Roadster"){
        setAccel(150);
        setSpeed(75);
        setHandling(110);
    };
};
#endif //PROJECT_ELECTRICROADSTER_H
