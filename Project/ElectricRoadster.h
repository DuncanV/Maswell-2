/**
 *  @file ElectricRoadster.h
 *  @class ElectricRoadster
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Product for Abstract Factory Pattern and Concrete Component for Decorator Pattern
 */
#ifndef PROJECT_ELECTRICROADSTER_H
#define PROJECT_ELECTRICROADSTER_H

#include "ElectricCar.h"

class ElectricRoadster : public ElectricCar{
public:
    /**
     * Constructor for ElectricFormulaOne, calls Constructor of ElectricCar
     */
    ElectricRoadster() : ElectricCar("Roadster"){
        setAcceleration(150);
        setSpeed(75);
        setHandling(110);
    };

    ElectricRoadster(const Car& car_, bool flag_) : ElectricCar(car_, flag_){
        if (flag_ == false) {
            setAcceleration(75);
            setSpeed(40);
            setHandling(50);
        }
    };

    virtual Car* clone(bool flag_ = false){
        cout << "Cloning ..." << endl;
        return new ElectricGoKart(*this, flag_);
    };
};
#endif //PROJECT_ELECTRICROADSTER_H
