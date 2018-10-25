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
#include "Driver.h"
#include "AverageDriver.h"
using namespace std;

class Car{

    /**
     * @brief Pointer to the car's current state
     */
    class State* current;

    /**
     * @brief Pointer to the car's manager
     */
    class PitCrew* manager;

    /**
     * @brief Pointer to the car's team
     */
    class PitStop* team;

public:

    /**
    * Defualt constructor for Car
    * @param tyres - the amount of tyres the car has
    */
    Car(int tyres = 4);

    /**
     * The base constructor for Car
     * @param modelType_ - states whether the car is Electirc/Sports/Standard
     * @param tyres - the amount of tyres the car has
     */
    Car(string modelType_, int tyres = 4);

    /**
     * The copy constructor for Car
     * @param car_ - a Car object that will be copied
     * @param flag_ - bool var to decide if the base car or the whole car will be cloned
     */
    Car(const Car& car_, bool flag_);

    /**
     * The virtual destructor for Car
     */
    virtual ~Car(){};

    /**
     * Abstract clone function for the prototype design pattern
     * @param flag - bool var to decide if the base car or the whole car will be cloned
     * @return a Car object
     */
    virtual Car* clone(bool flag = false) = 0;

    /**
     * Abstract full clone implemented by decorator class to copy over the decorators
     * @return Car object
     */
    virtual Car* FullClone() = 0;

    /**
     * abstract add function for decorator
     * @param c - A Car object
     */
    virtual void add(Car* c);

    /**
     * Set the description of the car
     * @param des string passed in
     */
    void setDescription(string des);

    /**
     * Get the description of the car
     * @return string
     */
    string getDescription()const;

    /**
     * Get the model number of the car
     * @return the car modelNumber
     */
    int getModelNumber()const;

    /**
     * Abstract showCarStats function to show the stats of a car
     * @return string stating the stats
     */
    virtual string showCarStats();

    /**
     * Print the condition of a car during the race
     * @return string describing the condition
     */
    string showCarCondition();

    /**
     * Function to set speed of a car
     * @param speed - The speed the car has
     */
    void setSpeed(int speed){topSpeed=speed;}

    /**
    * Function to get speed of a car
    * @return speed - The speed the car has
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
     * Gets the manager of the car
     * @return PitCrew pointer to the manager
     */
    PitCrew* getManager(){return manager;};

    /**
     * Sets the manager of the car
     * @param m - PitCrew object which is the manager
     */
    void setManager(PitCrew* m){manager = m;};

    /**
     * Gets the team of the car
     * @return PitStop pointer to the team
     */
    PitStop* getTeam(){ return team; };

    /**
     * Sets the team of the car
     * @param t - PitStop object which is the team
     */
    void setTeam(PitStop* t){team = t;};

    /**
     * Car notifies the team that its variables has changed.
     * Car will do this during a race
     */
    void notifyTeam();

    /**
     * Get the condition of each tyre
     * @return int array showing the condition of each tyre
     */
    int* getCarTyres();

    /**
     * Get the tyre with the specific index's condition
     * @param index - index for the tyre array
     * @return int - the condition of the tyre
     */
    int getCarTyre(int index);

    /**
     * Set the condition of the tyres after it has been changed
     * Car will then notify the team
     * @param index - index for the tyre array
     * @param tyre - the new condition of the tyre
     */
    void setCarTyre(int index, int tyre);

    /**
     * Set the condition of the tyres after it has been changed
     * Car will not notify the team
     * @param index - index for the tyre array
     * @param tyre - the new condition of the tyre
     */
    void setChanged(int index, int tyre);

    /**
     * Get the fuel level of the car
     * @return int - the fuel level
     */
    int getCarFuel();

    /**
     * Set the fuel level of a car
     * Car will notify the team
     * @param fuel - the new fuel level of the car
     */
    void setCarFuel(int fuel);

    /**
     * Set the fuel level of a car
     * Car will not notify the team
     * @param fuel - the new fuel level of the car
     */
    void setRefuel(int fuel);

    /**
     * Get the damage the car has taken
     * @return the amount of damage since last repair
     */
    int getCarDamage();

    /**
     * Set the damage of the car
     * Car will then notify the team
     * @param damage - the new damage of the car
     */
    void setCarDamage(int damage_);

    /**
     * Set the damage of the car
     * Car will not notify the team
     * @param damage - the new damage of the car
     */
    void setRepair(int damage_);

    /**
     * Get the ID of the car
     * @return returns the car ID
     */
    int getCarID(){ return CarID;};

    /**
     * notifies the car which track it is registered for
     * @param msg the string to output
     */
    void RegistrationNotify(string msg);

    /**
     * returns lapnumber
     * @return lapno
     */
    int getLap(){ return lapNo;};

    /**
     * sets the lap number
     * @param l
     */
    void setLap(int l){lapNo=l;};
    /**
    * returns track part
    * @return trackPart
    */
    int getTrackPart(){return trackPart;};

    /**
     * sets track part of car
     * @param t
     */
    void setTrackPart(int t){trackPart= t;};

    /**
     * Set the current state of the car
     * @param state - State object which it needs to be
     */
    void setState(State* state);

    /**
     * Get the current state of the car
     * @return state
     */
    string getState();

    /**
     * Change car into the ready state
     */
    void ready();

    /**
     * Change car into the racing state
     */
    void racing();

    /**
     * Change car into the stopped state
     */
    void stopped();

    /**
     * sets the driver of the car
     * @param driver1
     */
    void setDriver(Driver* driver1){driver=driver1;};

    /**
    * returns the driver of the car
    * @return
    */
    Driver* getDriver(){ return driver;};

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
    /**
    * the driver object
    */
    Driver* driver;
};

#include "State.h"

#endif //PROJECT_CAR_H
