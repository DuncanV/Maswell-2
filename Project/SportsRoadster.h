/**
 *  @file SportsRoadster.h
 *  @class SportsRoadster
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Product for Abstract Factory Pattern and Concrete Component for Decorator Pattern
 */


#ifndef PROJECT_SPORTSROADSTER_H
#define PROJECT_SPORTSROADSTER_H

#include "SportsCar.h"

class SportsRoadster : public SportsCar{
public:
    /**
    * Constructor for SportsRoadster, calls Constructor of SportsCar
    */
    SportsRoadster() : SportsCar("Roadster"){
        setAcceleration(110);
        setSpeed(150);
        setHandling(75);
    };

    SportsRoadster(const Car& car_, bool flag_) : SportsCar(car_, flag_){
        if (flag_ == false) {
            setAcceleration(150);
            setSpeed(120);
            setHandling(200);
        }
    };

    virtual Car* clone(bool flag_ = false){
        cout << "Cloning ..." << endl;
        return new SportsRoadster(*this, flag_);
    };
};
#endif //PROJECT_SPORTSROADSTER_H
