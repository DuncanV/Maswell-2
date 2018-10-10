/**
 *  @file RegistratcionManager.h
 *  @class ConcreteRegistrationManager
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief AbstractMediator for mediator design pattern
 */


#ifndef PROJECT_REGISTRATIONMANAGER_H
#define PROJECT_REGISTRATIONMANAGER_H

#include <iostream>
using namespace std;
class Car;
class RegistratcionManager{
public:
    /**
    * abstract function to add cars into mediator
    */
    virtual void addCar(Car* _car, int track)=0;
private:

};
#endif //PROJECT_REGISTRATIONMANAGER_H
