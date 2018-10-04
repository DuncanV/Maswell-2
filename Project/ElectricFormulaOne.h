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

        cout << "Creating ...\n" << toString() << endl;
    };

    ElectricFormulaOne(const Car& car_, bool flag_) : ElectricCar(car_, flag_){
        if (flag_ == false) {
            setAcceleration(150);
            setSpeed(120);
            setHandling(200);
        }

        string out = "Cloning ";
        if (flag_ == false){
            out += "base car ...\n";
        }
        else{
            out += "upgraded car ...\n";
        }
        cout << out;
        cout << toString() << endl;
    };

    virtual Car* clone(bool flag_ = false){
        return new ElectricFormulaOne(*this, flag_);
    };
};
#endif //PROJECT_ELECTRICFORMULAONE_H
