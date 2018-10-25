/**
 *  @file Driver.h
 *  @class Driver
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Stratey for strategy design pattern
 */
#ifndef PROJECT_DRIVER_H
#define PROJECT_DRIVER_H
#include <stdlib.h>
#include <time.h>
class Driver{
public:
    /**
     * sets the driving ability of the driver
     * @param ability
     */
    void setAbility(double ability){driverAbility=ability;};
    /**
     * returns the driving ability of the driver
     * @return
     */
    double getDriverAbilty(){ return driverAbility;};
    /**
     * sets the fuel ability of the driver
     * @param ability
     */
    void setFuelAbility(double ability){driverFuel=ability;};
    /**
     * returns the fuel ability of the driver
     * @return
     */
    double getFuelAbilty(){ return driverFuel;};
    /**
     * returns the tyre ability of the driver
     * @param ability
     */
    void setTyreAbility(double ability){driverTyre=ability;};
    /**
     * returns the tyre ability of the driver
     * @return
     */
    double getTyreAbilty(){ return driverTyre;};

private:
    /**
     * fraction to hold driver ability
     */
    double driverAbility;
    /**
     * fraction to hold driverFuel
     */
    double driverFuel;
    /**
     * fraction to hold driverTyre
     */
    double driverTyre;
};
#endif //PROJECT_DRIVER_H
