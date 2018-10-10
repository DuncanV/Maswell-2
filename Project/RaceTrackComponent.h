//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_RACETRACKCOMPONENT_H
#define PROJECT_RACETRACKCOMPONENT_H
using namespace std;
#include <string>
#include <iostream>
class RaceTrackComponent
{
public:
    virtual string print()=0;
    virtual void add(RaceTrackComponent*)=0;
    virtual ~RaceTrackComponent(){};
    void setDescription(string d){description=d;};
    string getDescription(){ return description;};
private:
    string description;
};
#endif //PROJECT_RACETRACKCOMPONENT_H
