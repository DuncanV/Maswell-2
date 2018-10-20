//
// Created by Tjaart on 2018/10/20.
//

#ifndef PROJECT_STATE_H
#define PROJECT_STATE_H

#include "Car.h"

class State {
public:
    virtual void ready(Car* car){
        cout << "Car is READY\n";
    };
    virtual void racing(Car* car){
        cout << "Car is RACING\n";
    };
    virtual void stopped(Car* car){
        cout << "Car is STOPPED\n";
    };

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
