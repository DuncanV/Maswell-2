/**
 *  @file SportsFormulaOne.h
 *  @class SportsFormulaOne
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Product for Abstract Factory Pattern
 */

#ifndef PROJECT_SPORTSFORMULAONE_H
#define PROJECT_SPORTSFORMULAONE_H

#include "SportsCar.h"

class SportsFormulaOne : public SportsCar{
public:
    /**
     * Constructor for SportsFormulaOne, calls Constructor  of SportsCar
     */
    SportsFormulaOne() : SportsCar("FormulaOne"){};
};

#endif //PROJECT_SPORTSFORMULAONE_H
