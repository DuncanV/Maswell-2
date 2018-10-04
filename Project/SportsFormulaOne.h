/**
 *  @file SportsFormulaOne.h
 *  @class SportsFormulaOne
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Product for Abstract Factory Pattern and Concrete Component for Decorator Pattern
 */

#ifndef PROJECT_SPORTSFORMULAONE_H
#define PROJECT_SPORTSFORMULAONE_H

#include "SportsCar.h"

class SportsFormulaOne : public SportsCar{
public:
    /**
     * Constructor for SportsFormulaOne, calls Constructor of SportsCar
     */
    SportsFormulaOne() : SportsCar("FormulaOne"){
        setHandling(120);
        setSpeed(200);
        setAcceleration(150);

        cout << "Creating ...\n" << toString() << endl;
    };

    SportsFormulaOne(const Car& car_, bool flag_) : SportsCar(car_, flag_){
        if (flag_ == false) {
            setAcceleration(120);
            setSpeed(200);
            setHandling(150);
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
        return new SportsFormulaOne(*this, flag_);
    };
};

#endif //PROJECT_SPORTSFORMULAONE_H
