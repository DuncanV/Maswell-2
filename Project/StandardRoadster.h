/**
*  @file StandardRoadster.h
*  @class StandardRoadster
*  @authors Duncan + Tjaart
*  @version 1.0.0
*  @brief Concrete Product for Abstract Factory Pattern and Concrete Component for Decorator Pattern
*/

#ifndef PROJECT_STANDARDROADSTER_H
#define PROJECT_STANDARDROADSTER_H

#include "StandardCar.h"

class StandardRoadster : public StandardCar{
public:
    /**
     * Constructor for StandardRoadster, calls Constructor of StandardCar
     */
    StandardRoadster() : StandardCar("Roadster"){
        setAcceleration(75);
        setSpeed(110);
        setHandling(85);
    };

    StandardRoadster(const Car& car_, bool flag_) : StandardCar(car_, flag_){
        if (flag_ == false) {
            setAcceleration(150);
            setSpeed(120);
            setHandling(200);
        }
    };

    virtual Car* clone(bool flag_ = false){
        cout << "Cloning ..." << endl;
        return new StandardRoadster(*this, flag_);
    };
};

#endif //PROJECT_STANDARDROADSTER_H
