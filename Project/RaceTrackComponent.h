//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_RACETRACKCOMPONENT_H
#define PROJECT_RACETRACKCOMPONENT_H
using namespace std;

#include "Car.h"
#include <string>
#include <vector>
#include <iostream>
class RaceTrackComponent
{

public:
    RaceTrackComponent(){
        decorate=0;
//        ID=partNumber++;
    }
    virtual void decorateTrack(RaceTrackComponent* R)
    {
        if(decorate==0)
            decorate=R;
        else
        {
            decorate->decorateTrack(R);
        }
    }
    virtual string getDecorator(){
        if(decorate->decorate==0)
            return decorate->getDescription();
        if(decorate!=0)
            return decorate->getDescription()+", "+decorate->getDecorator();
        return "";

    }
    void addCar(Car* _car)
    {
        cars.push_back(_car);
    }
    void removeCar(Car* _car)
    {
        int i=0;
        vector<Car*>::iterator it;
        for(it=cars.begin();it!=cars.end();it++)
        {
            if((*it)==_car)
                break;
            i++;
        }
        cars.erase(cars.begin()+i);
    }

    virtual void show(){};
    virtual void print()=0;
    virtual void add(RaceTrackComponent*)=0;
    virtual ~RaceTrackComponent(){};
    void setDescription(string d){description=d;};
    string getDescription(){ return description;};
    RaceTrackComponent* decorate;
//    int getPartNumber(){ return ID;};
//    void setPartNumber(int number){partNumber=number; };
private:
    string description;
//    int ID;
//    static int partNumber;
    vector<Car*> cars;

};
#endif //PROJECT_RACETRACKCOMPONENT_H

