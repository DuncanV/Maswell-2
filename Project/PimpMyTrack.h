//
// Created by Duncan + Tjaart on 2018/10/13.
//

#ifndef PROJECT_PIMPMYTRACK_H
#define PROJECT_PIMPMYTRACK_H

#include "RaceTrackComponent.h"

class PimpMyTrack: public RaceTrackComponent
{
public:
    PimpMyTrack():RaceTrackComponent(){};
    ~PimpMyTrack(){};
    virtual void print(){};
    virtual void add(RaceTrackComponent*){}
private:

};
#endif //PROJECT_PIMPMYTRACK_H
