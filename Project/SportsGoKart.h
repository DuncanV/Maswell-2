/**
 *  @file SportsGoKart.h
 *  @class SportsGoKart
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Product for Abstract Factory Pattern
 */

#ifndef PROJECT_SPORTSGOKART_H
#define PROJECT_SPORTSGOKART_H

#include "SportsCar.h"

class SportsGoKart : public SportsCar{
public:
    /**
    * Constructor for SportsGoKart, calls Constructor  of SportsCar
    */
    SportsGoKart() : SportsCar("GoKart"){};
};

#endif //PROJECT_SPORTSGOKART_H
