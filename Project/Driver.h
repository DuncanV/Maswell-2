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
    void setFuelAbility(double ability){driverFuel=ability;};
    double getFuelAbilty(){ return driverFuel;};
    void setTyreAbility(double ability){driverTyre=ability;};
    double getTyreAbilty(){ return driverTyre;};

private:
    double driverAbility;
    double driverFuel;
    double driverTyre;
};
#endif //PROJECT_DRIVER_H
