/**
 *  @file SportsCar.h
 *  @class SportsCar
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Product for Abstract Factory Pattern
 */


#ifndef PROJECT_SPORTSCAR_H
#define PROJECT_SPORTSCAR_H

#include "Car.h"

class SportsCar : public Car{

public:
    /**
     * Constructor for SportsCar
     * @param modelType_ states whether car is Electric/Sports/Standard
     */
    SportsCar(string modelType_);

    /**
    * The copy constructor for SportsCar
    * @param car_ is a Car object that will be copied
    */
    SportsCar(const Car& car_);

    /**
    * The virtual destructor for SportsCar
    */
    virtual ~SportsCar(){};

    /**
     * a getDescription Function
     * @return a string that states the info about the car
     */
    virtual string getDescription();

    /**
    * a abstract clone function for the prototype design pattern
    * @return a pointer to car object
    */
    virtual Car* clone();

    virtual string showCarStats();
    virtual void add(Car* c){}

private:


};

#endif //PROJECT_SPORTSCAR_H
