//
// Created by Duncan on 2018/10/20.
//

#ifndef PROJECT_RACEMANAGER_H
#define PROJECT_RACEMANAGER_H

#include <vector>
#include "Car.h"
class RaceManager{
public:
    virtual void readyRace()=0;
    virtual void startRace()=0;
    virtual void stopRace()=0;
    virtual void printLeaderBoard()=0;
    virtual void addCars(vector<Car*> _cars)=0;
    virtual void addRacetrack(RaceTrackComponent*raceTrackComponent)=0;
private:
    bool ready;
    bool start;
    bool stop;
};
#endif //PROJECT_RACEMANAGER_H
