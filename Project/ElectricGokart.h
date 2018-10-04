/**
 *  @file ElectricGoKart.h
 *  @class ElectricGoKart
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Product for Abstract Factory Pattern and Concrete Component for Decorator Pattern
 */
#ifndef PROJECT_ELECTRICGOKART_H
#define PROJECT_ELECTRICGOKART_H

#include "ElectricCar.h"

class ElectricGoKart : public ElectricCar{
public:
    /**
    *  Constructor for ElectricGoKart, calls Constructor of ElectricCar
    */
    ElectricGoKart() : ElectricCar("GoKart"){
        setAccel(75);
        setSpeed(40);
        setHandling(50);
    };
};
#endif //PROJECT_ELECTRICGOKART_H
