/**
 *  @file ElectricFormulaOne.h
 *  @class ElectricFormulaOne
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Product for Abstract Factory Pattern
 */
#ifndef PROJECT_ELECTRICFORMULAONE_H
#define PROJECT_ELECTRICFORMULAONE_H

#include "ElectricCar.h"

class ElectricFormulaOne : public ElectricCar {
public:
    /**
     * Constructor for ElectricFormulaOne, calls Constructor  of ElectricCar
     */
    ElectricFormulaOne() : ElectricCar("FormulaOne"){};
};
#endif //PROJECT_ELECTRICFORMULAONE_H
