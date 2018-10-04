/**
*  @file StandardFormulaOne.h
*  @class StandardFormulaOne
*  @authors Duncan + Tjaart
*  @version 1.0.0
*  @brief Concrete Product for Abstract Factory Pattern and Concrete Component for Decorator Pattern
*/

#ifndef PROJECT_STANDARDFORMULAONE_H
#define PROJECT_STANDARDFORMULAONE_H

#include "StandardCar.h"

class StandardFormulaOne : public StandardCar{
public:
    /**
     * Constructor for StandardFormulaOne, calls Constructor of StandardCar
     */
    StandardFormulaOne() : StandardCar("FormulaOne"){
        setHandling(120);
        setSpeed(150);
        setAccel(120);
    };
};

#endif //PROJECT_STANDARDFORMULAONE_H
