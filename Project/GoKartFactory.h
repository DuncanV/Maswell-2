/**
 *  @file GoKartFactory.h
 *  @class GoKartFactory
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Factory for Abstract Factory Pattern
 */
#ifndef PROJECT_GOKARTFACTORY_H
#define PROJECT_GOKARTFACTORY_H

#include "CarFactory.h"
#include "SportsGoKart.h"
#include "StandardGoKart.h"
#include "ElectricGokart.h"
class GoKartFactory:public CarFactory
{
public:
    /**
     * Implemented Function to produce an ElectricCar
     * @return ElectricCar*
     */
    virtual ElectricCar* produceElectric()
    {
        return new ElectricGoKart();
    }


    /**
    * Implemented Function to produce an SportsCar
    * @return SportsCar*
    */
    virtual SportsCar*   produceSports()
    {
        return new SportsGoKart();
    }

    /**
    * Implemented Function to produce an StandardCar
    * @return StandardCar*
    */
    virtual StandardCar* produceStandard()
    {
        return new StandardGoKart();
    }
     //concrete Factory For Abstract Factory, returns appropriate car for which function called
};
#endif //PROJECT_GOKARTFACTORY_H
