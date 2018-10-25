/**
 *  @file State.h
 *  @class State
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 */


#ifndef PROJECT_STATE_H
#define PROJECT_STATE_H

#include "Car.h"

class State {
public:

    /**
     * Change car to ready state
     * @param car
     */
    virtual void ready(Car* car){
        cout << "Car "<<car->getCarID()<<" is READY\n";
    };

    /**
     * Change car to racing state
     * @param car
     */
    virtual void racing(Car* car){
        cout << "Car "<<car->getCarID()<<" is RACING\n";
    };

    /**
     * Change car to stopped state
     * @param car
     */
    virtual void stopped(Car* car){
        cout << "Car "<<car->getCarID()<<" is STOPPED\n";
    };

    /**
     * Print the current state to the screen
     * @return
     */
    virtual string toString() = 0;
};

class Ready : public State{
    void racing(Car* car);
    void stopped(Car* car);
    string toString(){
        return "Ready State\n";
    };
};

class Racing : public State{
    void ready(Car* car);
    void stopped(Car* car);
    string toString(){
        return "Racing State\n";
    };
};

class Stopped : public State{
    void ready(Car* car);
    void racing(Car* car);
    string toString(){
        return "Stopped State\n";
    };
};


#endif //PROJECT_STATE_H
