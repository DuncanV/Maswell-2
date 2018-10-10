//
// Created by  Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_REGISTRATIONMANAGER_H
#define PROJECT_REGISTRATIONMANAGER_H

#include <iostream>
using namespace std;
class Car;
class RegistratcionManager{
public:
    virtual void addCar(Car* _car, int track)=0;
private:

};
#endif //PROJECT_REGISTRATIONMANAGER_H
