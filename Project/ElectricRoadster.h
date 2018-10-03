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
    ElectricRoadster() : ElectricCar("Roadster"){};
};
#endif //PROJECT_ELECTRICROADSTER_H
