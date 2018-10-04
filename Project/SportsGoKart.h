/**
 *  @file SportsGoKart.h
 *  @class SportsGoKart
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Product for Abstract Factory Pattern and Concrete Component for Decorator Pattern
 */

#ifndef PROJECT_SPORTSGOKART_H
#define PROJECT_SPORTSGOKART_H

#include "SportsCar.h"

class SportsGoKart : public SportsCar{
public:
    /**
    * Constructor for SportsGoKart, calls Constructor of SportsCar
    */
    SportsGoKart() : SportsCar("GoKart"){
        setAcceleration(50);
        setSpeed(75);
        setHandling(45);
    };

    SportsGoKart(const Car& car_, bool flag_) : SportsCar(car_, flag_){
        if (flag_ == false) {
            setAcceleration(150);
            setSpeed(120);
            setHandling(200);
        }
    };

    virtual Car* clone(bool flag_ = false){
        cout << "Cloning ..." << endl;
        return new SportsGoKart(*this, flag_);
    };
};

#endif //PROJECT_SPORTSGOKART_H
