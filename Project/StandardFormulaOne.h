/**
*  @file StandardFormulaOne.h
*  @class StandardFormulaOne
*  @authors Duncan + Tjaart
*  @version 1.0.0
*  @brief Concrete Product for Abstract Factory Pattern and Concrete Component for Decorator Pattern
*/

#ifndef PROJECT_STANDARDFORMULAONE_H
#define PROJECT_STANDARDFORMULAONE_H

#include "StandardCar.h"

class StandardFormulaOne : public StandardCar{
public:
    /**
     * Constructor for StandardFormulaOne, calls Constructor of StandardCar
     */
    StandardFormulaOne() : StandardCar("FormulaOne"){
        setHandling(120);
        setSpeed(150);
        setAcceleration(120);
    };

    StandardFormulaOne(const Car& car_, bool flag_) : StandardCar(car_, flag_){
        if (flag_ == false) {
            setAcceleration(150);
            setSpeed(120);
            setHandling(200);
        }
    };

    virtual Car* clone(bool flag_ = false){
        cout << "Cloning ..." << endl;
        return new StandardFormulaOne(*this, flag_);
    };
};

#endif //PROJECT_STANDARDFORMULAONE_H
