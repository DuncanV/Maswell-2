/**
 *  @file CarFactory.h
 *  @class CarFactory
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Abstract Factory for Abstract Factory Pattern
 */

#ifndef CARFACTORY_H
#define CARFACTORY_H

#include <string>
#include "ElectricCar.h"
#include "StandardCar.h"
#include "SportsCar.h"
using namespace std;
class CarFactory{
public:
    /**
     * A Abstract Function to produce an ElectricCar
     * @return ElectricCar*
     */
    virtual ElectricCar* produceElectric()=0;

    /**
    * A Abstract Function to produce an SportsCar
    * @return SportsCar*
    */
    virtual SportsCar*   produceSports()=0;

    /**
    * A Abstract Function to produce an StandardCar
    * @return StandardCar*
    */
    virtual StandardCar* produceStandard()=0;
    //Abstract class for Abstract Factory
};
#endif //CARFACTORY_H
