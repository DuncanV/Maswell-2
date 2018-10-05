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

        cout << "Creating ...\n" << toString() << endl;
    };

    StandardGoKart(const Car& car_, bool flag_) : StandardCar(car_, flag_){
        if (flag_ == false) {
            setAcceleration(45);
            setSpeed(50);
            setHandling(60);
        }
    /**
    * Copy constructor used for cloning
    * @param car_  car object for copying
    * @param flag_ to determine if must be full clone or basic clone
    */
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

    /**
     * implementation of clone function
     * @param flag_ determines if must be full clone or basic clone
     * @return a copied car object
     */
    virtual Car* clone(bool flag_ = false){
        return new StandardGoKart(*this, flag_);
    };
};

#endif //PROJECT_STANDARDGOKART_H
