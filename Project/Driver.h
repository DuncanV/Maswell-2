//
// Created by Duncan on 2018/10/20.
//

#ifndef PROJECT_DRIVER_H
#define PROJECT_DRIVER_H
#include <stdlib.h>
#include <time.h>
class Driver{
public:
    void setAbility(double ability){driverAbility=ability;};
    double getDriverAbilty(){ return driverAbility;};
private:
    double driverAbility;
};
#endif //PROJECT_DRIVER_H
