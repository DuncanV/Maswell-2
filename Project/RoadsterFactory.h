/**
 *  @file RoadsterFactory.h
 *  @class RoadsterFactory
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Factory for Abstract Factory Pattern
 */
#ifndef PROJECT_ROADSTERFACTORY_H
#define PROJECT_ROADSTERFACTORY_H

#include "CarFactory.h"
#include "ElectricRoadster.h"
#include "SportsRoadster.h"
#include "StandardRoadster.h"
class RoadsterFactory: public CarFactory
{
public:
    /**
     * Implemented Function to produce an ElectricCar
     * @return ElectricCar*
     */
    virtual ElectricCar* produceElectric()
    {
        return new ElectricRoadster();
    }

    /**
     * Implemented Function to produce an SportsCar
     * @return SportsCar*
     */
    virtual SportsCar*   produceSports()
    {
        return new SportsRoadster();
    }

    /**
    * Implemented Function to produce an StandardCar
    * @return StandardCar*
    */
    virtual StandardCar* produceStandard()
    {
        return new StandardRoadster();
    }
    //concrete Factory For Abstract Factory, returns appropriate car for which function called
};
#endif //PROJECT_ROADSTERFACTORY_H
