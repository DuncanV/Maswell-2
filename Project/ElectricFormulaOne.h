/**
 *  @file ElectricFormulaOne.h
 *  @class ElectricFormulaOne
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Product for Abstract Factory Pattern and Concrete Component for Decorator Pattern
 */
#ifndef PROJECT_ELECTRICFORMULAONE_H
#define PROJECT_ELECTRICFORMULAONE_H

#include "ElectricCar.h"

class ElectricFormulaOne : public ElectricCar {
public:
    /**
     * Constructor for ElectricFormulaOne, calls Constructor of ElectricCar
     */
    ElectricFormulaOne() : ElectricCar("FormulaOne"){
        setHandling(150);
        setSpeed(120);
        setAcceleration(200);
    };

    ElectricFormulaOne(const Car& car_, bool flag_) : ElectricCar(car_, flag_){
        if (flag_ == false) {
            setAcceleration(150);
            setSpeed(120);
            setHandling(200);
        }
    };

    virtual Car* clone(bool flag_ = false){
        cout << "Cloning ..." << endl;
        return new ElectricFormulaOne(*this, flag_);
    };
};
#endif //PROJECT_ELECTRICFORMULAONE_H
