//
// Created by  Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_CONCRETEREGISTRATIONMANAGER_H
#define PROJECT_CONCRETEREGISTRATIONMANAGER_H

#include "RegistrationManager.h"

class ConcreteRegistrationManager:public RegistratcionManager
{
public:
    ConcreteRegistrationManager(int _numTracks);
    ~ConcreteRegistrationManager();
    virtual void addCar(Car* _car, int track);

private:
    int numTracks;
    int* numCars;
    int* size;
    Car*** cars;
    void resize(int trackNo);

};

#endif //PROJECT_CONCRETEREGISTRATIONMANAGER_H
