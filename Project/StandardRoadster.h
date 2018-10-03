/**
*  @file StandardRoadster.h
*  @class StandardRoadster
*  @authors Duncan + Tjaart
*  @version 1.0.0
*  @brief Concrete Product for Abstract Factory Pattern and Concrete Component for Decorator Pattern
*/

#ifndef PROJECT_STANDARDROADSTER_H
#define PROJECT_STANDARDROADSTER_H

#include "StandardCar.h"

class StandardRoadster : public StandardCar{
public:
    /**
     * Constructor for StandardRoadster, calls Constructor of StandardCar
     */
    StandardRoadster() : StandardCar("Roadster"){};
};

#endif //PROJECT_STANDARDROADSTER_H
