/**
 *  @file Car.h
 *  @class Car
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 */

#ifndef PROJECT_CAR_H
#define PROJECT_CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car{

public:

    /**
    * Defualt constructor used for Decoratoring
    */
    Car(){carDecorate=0;};

    /**
     * The base Constructor for Car
     * @param modelType_ states whether the car is Electirc/Sports/Standard
     */
    Car(string modelType_);

    /**
     * The copy constructor for Car
     * @param car_ is a Car object that will be copied
     */
    Car(const Car& car_);

    /**
     * The virtual destructor for Car
     */
    virtual ~Car(){};

    /**
     * a getDescription Function
     * @return a string that states the info about the car
     */
    string getDescription();

    /**
     * a abstract clone function for the prototype design pattern
     * @return a Car object
     */
    virtual Car* clone() = 0;
    

    /**
     *abstract add function for decorator
     * @param c is car object
     */
    virtual void add(Car* c);

    /**
     * setDescritption function
     * @param des string passed in
     */
    void setDescription(string des);

    /**
     * @return the car modelNumber
     */
    int getModelNumber();

    /**
     * a abstract showCarStats function to show the stats of a car
     * @return string stating the stats
     */
    virtual string showCarStats();

    void setSpeed(int speed){topSpeed=speed;}
    int getSpeed(){ return topSpeed;}
    void setHandling(int H){handling=H;}
    int getHandling(){ return handling;}
    void setAccel(int A){acceleration=A;}
    int getAcce(){ return acceleration;}
    Car* carDecorate;



private:
    /**
     * @brief a model string which states the type of car
     */
    string modelType;

    /**
     * @brief a Model number based on modelCounter for each vehicle made
     */
    int modelNumber;
    static int modelCounter;
    string description;
    int topSpeed;
    int handling;
    int acceleration;
};

#endif //PROJECT_CAR_H
