/**
 *  @file FormulaOneFactory.h
 *  @class FormulaOneFactory
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Factory for Abstract Factory Pattern
 */
#ifndef PROJECT_FORUMLAONEFACTORY_H
#define PROJECT_FORUMLAONEFACTORY_H

#include "CarFactory.h"
#include "SportsFormulaOne.h"
#include "StandardFormulaOne.h"
#include "ElectricFormulaOne.h"
class FormulaOneFactory: public CarFactory
{
public:
    /**
     * Implemented Function to produce an ElectricCar
     * @return ElectricCar*
     */
    virtual ElectricCar* produceElectric()
    {
        return new ElectricFormulaOne();
    }

    /**
     * Implemented Function to produce an SportsCar
     * @return SportsCar*
     */
    virtual SportsCar*   produceSports()
    {
        return new SportsFormulaOne();
    }

    /**
     * Implemented Function to produce an StandardCar
     * @return StandardCar*
     */
    virtual StandardCar* produceStandard()
    {
        return new StandardFormulaOne();
    }
    //concrete Factory For Abstract Factory, returns appropriate car for which function called
};
#endif //PROJECT_FORUMLAONEFACTORY_H
