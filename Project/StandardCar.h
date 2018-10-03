/**
*  @file StandardCar.h
*  @class StandardCar
*  @authors Duncan + Tjaart
*  @version 1.0.0
*  @brief Concrete Product for Abstract Factory Pattern
*/

#ifndef PROJECT_STANDARDCAR_H
#define PROJECT_STANDARDCAR_H

#include "Car.h"

class StandardCar : public Car{

public:

    /**
     * The base Constructor for StandardCar
     * @param modelType_ states whether the car is FormulaOne/Roadster/GoKart
     */
    StandardCar(string modelType_);

    /**
     * The copy constructor for StandardCar
     * @param car_ is a Car object that will be copied
     */
    StandardCar(const Car& car_);

    /**
     * The virtual destructor for StandardCar
     */
    virtual ~StandardCar(){};

    /**
     * a getDescription Function
     * @return a string that states the info about the car
     */
    virtual string getDescription();

    /**
     * a abstract clone function for the prototype design pattern
     * @return a Car object
     */
    virtual Car* clone();

    virtual string showCarStats();
    virtual void add(Car* c){}
private:
};

#endif //PROJECT_STANDARDCAR_H
