/**
*  @file StandardGoKart.h
*  @class StandardGoKart
*  @authors Duncan + Tjaart
*  @version 1.0.0
*  @brief Concrete Product for Abstract Factory Pattern
*/

#ifndef PROJECT_STANDARDGOKART_H
#define PROJECT_STANDARDGOKART_H

#include "StandardCar.h"

class StandardGoKart : public StandardCar{
public:
    /**
     * The base Constructor for StandardGoKart
     */
    StandardGoKart() : StandardCar("GoKart"){
        setAccel(45);
        setSpeed(50);
        setHandling(60);
    };
};

#endif //PROJECT_STANDARDGOKART_H
