/**
 *  @file Car.h
 *  @class Car
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Abstract Product for Abstract Factory Pattern and Component for Decorator Pattern
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
    Car(const Car& car_, bool flag_);

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
    virtual Car* clone(bool flag = false) = 0;
    

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
    int getModelNumber()const;

    /**
     * a abstract showCarStats function to show the stats of a car
     * @return string stating the stats
     */
    virtual string showCarStats();

    /**
     * Function to set speed of a car
     * @param speed
     */
    void setSpeed(int speed){topSpeed=speed;}

    /**
    * Function to get speed of a car
    * @return speed
    */
    int getSpeed(){ return topSpeed;}

    /**
    * Function to set Handling of a car
    * @param H
    */
    void setHandling(int H){handling=H;}

    /**
    * Function to get Handling of a car
    * @return handling
    */
    int getHandling(){ return handling;}

    /**
    * Function to set Acceleration of a car
    * @param A
    */
    void setAccel(int A){acceleration=A;}

    /**
    * Function to get Acceleration of a car
    * @return Acceleration
    */
    int getAcce(){ return acceleration;}

    /**
    * pointer to car object for decorator
    */
    Car* carDecorate;

    const string getModelType()const { return modelType;};


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
    int topSpeed=0;
    int handling=0;
    int acceleration=0;
};

#endif //PROJECT_CAR_H
