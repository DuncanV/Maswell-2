/**
*  @file StandardFormulaOne.h
*  @class StandardFormulaOne
*  @authors Duncan + Tjaart
*  @version 1.0.0
*  @brief Concrete Product for Abstract Factory Pattern
*/

#ifndef PROJECT_STANDARDFORMULAONE_H
#define PROJECT_STANDARDFORMULAONE_H

#include "StandardCar.h"

class StandardFormulaOne : public StandardCar{
public:
    /**
     * The base Constructor for StandardFormulaOne
     */
    StandardFormulaOne() : StandardCar("FormulaOne"){};
};

#endif //PROJECT_STANDARDFORMULAONE_H
