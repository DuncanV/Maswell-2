/**
*  @file StandardRoadster.h
*  @class StandardRoadster
*  @authors Duncan + Tjaart
*  @version 1.0.0
*  @brief Concrete Product for Abstract Factory Pattern
*/

#ifndef PROJECT_STANDARDROADSTER_H
#define PROJECT_STANDARDROADSTER_H

#include "StandardCar.h"

class StandardRoadster : public StandardCar{
public:
    /**
     * The base Constructor for StandardRoadster
     */
    StandardRoadster() : StandardCar("Roadster"){};
};

#endif //PROJECT_STANDARDROADSTER_H
