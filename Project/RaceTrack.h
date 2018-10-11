//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_RACETRACK_H
#define PROJECT_RACETRACK_H

#include <vector>
#include "RaceTrackComponent.h"

class RaceTrack: public RaceTrackComponent
{
public:
    RaceTrack():RaceTrackComponent(){};
    virtual void print()
    {
        vector<RaceTrackComponent*>::iterator it;
        for(it=components.begin();it!=components.end();it++)
        {
            (*it)->print();
        }
    };

    virtual void add(RaceTrackComponent* Ra)
    {
        components.push_back(Ra);
    }
    virtual ~RaceTrack(){
        vector<RaceTrackComponent*>:: iterator it;

        for (it = components.begin(); it != components.end(); ++it)
            delete *it;
    };
    void show()
    {
        string star="******************************************\n";
        cout<<"Here's your Race Track!\n"
              <<star;
        print();
        cout<<star;
    }

private:
    vector<RaceTrackComponent*> components;
    static int trackNumber;
};
#endif //PROJECT_RACETRACK_H
