/**
 *  @file RegistratcionManager.h
 *  @class ConcreteRegistrationManager
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief AbstractMediator for mediator design pattern
 */

#ifndef PROJECT_REGISTRATIONMANAGER_H
#define PROJECT_REGISTRATIONMANAGER_H

#include "Car.h"
#include <iostream>
#include <vector>

using namespace std;
class RaceTrackComponent;
class Car;
class RegistratcionManager{
public:
    /**
    * abstract function to add cars into mediator
    */
    virtual void addCar(Car* _car, int track)=0;
    /**
    * abstract function to add trackComponents into mediator
    */
    virtual void addTrack(RaceTrackComponent* _racetrack)=0;

    virtual vector<Car*> getCars(int racetrack)=0;
private:

};
#endif //PROJECT_REGISTRATIONMANAGER_H
