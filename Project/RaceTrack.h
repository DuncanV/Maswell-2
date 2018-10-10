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
    RaceTrack(){};
    virtual string print()
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

private:
    vector<RaceTrackComponent*> components;
};
#endif //PROJECT_RACETRACK_H
