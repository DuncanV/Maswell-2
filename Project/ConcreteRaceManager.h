//
// Created by Duncan on 2018/10/20.
//

#ifndef PROJECT_CONCRETERACEMANAGER_H
#define PROJECT_CONCRETERACEMANAGER_H

#include "RaceManager.h"
#include "Car.h"
#include <vector>
class ConcreteRaceManager: public RaceManager
{
public:
    virtual void readyRace()
    {
        for (int i=0; i<cars.size(); i++)
        {
            cars[i]->setLap(0);
            cars[i]->setTrackPart(0);
            cars[i]->setTrackTime(0);
        }

    }
    virtual void startRace()
    {//will have to have iterator object in here

    }
    virtual void stopRace()
    {

    }

    virtual void printLeaderBoard()
    {
        string stars="******************************************";

    }
    //used in printLeaderBoard
    string getCarInfo(Car*_car)
    {
        string r= "Car - "+to_string(_car->getCarID())+" with time: "+to_string(_car->getTrackTime());
        return r;
    }

    virtual void addCars(vector<Car*> _cars)
    {
        if(_cars.size()==0)
        {
            cout<<"No cars added to the track\n";
            return;
        }
        for (int i=0; i<_cars.size(); i++)
            cars.push_back(_cars[i]);
        cout<<"Cars added to the raceTrack!\n";
    }
    virtual void addRacetrack(RaceTrackComponent*raceTrackComponent)
    {
        RaceTrack=raceTrackComponent;
    }
private:
    vector<Car*> cars;
    RaceTrackComponent* RaceTrack;
};
#endif //PROJECT_CONCRETERACEMANAGER_H
