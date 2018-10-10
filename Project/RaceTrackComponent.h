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
    RaceTrackComponent(){decorate=0;}
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
    virtual void print()=0;
    virtual void add(RaceTrackComponent*)=0;
    virtual ~RaceTrackComponent(){};
    void setDescription(string d){description=d;};
    string getDescription(){ return description;};
    RaceTrackComponent* decorate;
private:
    string description;


};
#endif //PROJECT_RACETRACKCOMPONENT_H
