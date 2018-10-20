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
#include "RegistrationManager.h"

using namespace std;

class Car{

    class State* current;

public:

    /**
    * Defualt constructor used for Decoratoring
    */
    Car(int tyres = 4);

    /**
     * The base Constructor for Car
     * @param modelType_ states whether the car is Electirc/Sports/Standard
     */
    Car(string modelType_, int tyres = 4);

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
     * a abstract clone function for the prototype design pattern
     * @return a Car object
     */
    virtual Car* clone(bool flag = false) = 0;
    /**
     * abstract full clone implemented by decorator class to copy over the decorators
     * @return Car object
     */
    virtual Car* FullClone() = 0;

    /**
     * abstract add function for decorator
     * @param c is car object
     */
    virtual void add(Car* c);

    /**
     * setDescritption function
     * @param des string passed in
     */
    void setDescription(string des);

    /**
     * a getDescription Function
     * @return a string that states the info about the car
     */
    string getDescription()const;

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
     * function to print the condition of a car during the race
     * @return string describing the condition
     */
    string showCarCondition();

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
    void setAcceleration(int A){acceleration=A;}

    /**
    * Function to get Acceleration of a car
    * @return Acceleration
    */
    int getAcceleration(){ return acceleration;}

    /**
    * pointer to car object for decorator
    */
    Car* carDecorate;
    /**
     * function to get model type of a car
     * @return string (the model type)
     */
    const string getModelType()const { return modelType;};
    /**
     * function to return a full detail about the car
     * @return string of car details
     */
    string toString();

    /**
     * function to get the total time the car took in the race
     * @return int representing the total time
     */
    int getTrackTime();

    /**
     * function to add time to the track time when the car is making a pit stop
     * @param i the amount of time to be added to the existing time
     */
    void setTrackTime(int i);

    /**
     * function to get the amount of tyres the car have
     * @return the number of tyres
     */
    int getNumTyres();

    /**
     * function to get the condition of each tyres
     * @return int array showing the condition of each tyre
     */
    int* getCarTyres();

    /**
     * function to set the condition of the tyres after it has been changed
     * @param index says which tyre was changed and should be updated
     */
    void setCarTyres(int index);

    /**
     * function to get the fuel level of the car
     * @return the fuel level
     */
    int getCarFuel();

    /**
     * function to set the fuel level of a car
     * @param fuel is the amount the fuel level shoul be after refueling
     */
    void setCarFuel(int fuel);

    /**
     * function to get the damage the car has taken
     * @return the amount of damage since last repair
     */
    int getCarDamage();

    /**
     * function to set the damage of the car
     * @param damage the total amount of damage after the car has been repaired
     */
    void setCarDamage(int damage);

    /**
     * @return returns the car ID
     */
    int getCarID(){ return CarID;};

    /**
     * notifies the car which track it is registered for
     * @param msg the string to output
     */
    void RegistrationNotify(string msg);

    int getLap(){ return lapNo;};

    void setLap(int l){lapNo=l;};

    int getTrackPart(){return trackPart;};

    void setTrackPart(int t){trackPart= t;};

    void setState(State* state);
    string getState();
    void ready();
    void racing();
    void stopped();

private:

    /**
     * @brief a model string which states the type of car
     */
    string modelType;

    /**
     * @brief a Model number based on modelCounter for each vehicle made
     */
    int modelNumber;

    /**
    * @brief a Model counter for each car
    */
    static int modelCounter;

    /**
    * @brief a description used for cars and decorators
    */
    string description;

    /**
    * @brief int to hold top speed of a car
    */
    int topSpeed=0;

    /**
    * @brief int to hold handling of a car
    */
    int handling=0;

    /**
    * @brief int to hold acceleration of a car
    */
    int acceleration=0;
    /**
     * holds the ID of car
     */
    int CarID;

    /**
     * production number of the car
     */
    static int prodcuctionNum;
    /**
    * @brief number of tyres a car have
    */
    int numTyres;

    /**
     * @brief amount of time the car took to complete the race
     */
    int trackTime;

    //Everything is ints to represent % but can be implemented differently
    /**
     * @brief array of amount tyres to show each tyres condition (until changed)
     */
    int* tyreCondition;

    /**
     * @brief fuel level of the car (until refuelled)
     */
    int fuelLevel;

    /**
     * @brief total amount of damage the car took during the race (until repaired)
     */
    int damage;

    /**
     * the lap number of the car
     */
    int lapNo;
    /**
     * the part of track the car is on
     */
    int trackPart;

};

#include "State.h"

#endif //PROJECT_CAR_H
