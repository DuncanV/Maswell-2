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

    }
    virtual void startRace()
    {

    }
    virtual void stopRace()
    {

    }

    virtual void printLeaderBoard()
    {

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
private:
    vector<Car*> cars;
};
#endif //PROJECT_CONCRETERACEMANAGER_H
