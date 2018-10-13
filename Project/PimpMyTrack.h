/**
 *  @file PimpMyTrack.h
 *  @class PimpMyTrack
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Abstract Decorator for Decorator design pattern
 */

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
