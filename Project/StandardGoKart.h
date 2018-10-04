/**
*  @file StandardGoKart.h
*  @class StandardGoKart
*  @authors Duncan + Tjaart
*  @version 1.0.0
*  @brief Concrete Product for Abstract Factory Pattern and Concrete Component for Decorator Pattern
*/

#ifndef PROJECT_STANDARDGOKART_H
#define PROJECT_STANDARDGOKART_H

#include "StandardCar.h"

class StandardGoKart : public StandardCar{
public:
    /**
     * Constructor for StandardGoKart, calls Constructor of StandardCar
     */
    StandardGoKart() : StandardCar("GoKart"){
        setAcceleration(45);
        setSpeed(50);
        setHandling(60);
    };

    StandardGoKart(const Car& car_, bool flag_) : StandardCar(car_, flag_){
        if (flag_ == false) {
            setAcceleration(150);
            setSpeed(120);
            setHandling(200);
        }
    };

    virtual Car* clone(bool flag_ = false){
        cout << "Cloning ..." << endl;
        return new StandardGoKart(*this, flag_);
    };
};

#endif //PROJECT_STANDARDGOKART_H
