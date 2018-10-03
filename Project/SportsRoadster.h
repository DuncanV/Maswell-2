/**
 *  @file SportsFormulaOne.h
 *  @class SportsFormulaOne
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Product for Abstract Factory Pattern
 */


#ifndef PROJECT_SPORTSROADSTER_H
#define PROJECT_SPORTSROADSTER_H

#include "SportsCar.h"

class SportsRoadster : public SportsCar{
public:
    /**
    * Constructor for SportsRoadster, calls Constructor  of SportsCar
    */
    SportsRoadster() : SportsCar("Roadster"){};
};
#endif //PROJECT_SPORTSROADSTER_H
