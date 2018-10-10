//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_PITSTOPDECORATOR_H
#define PROJECT_PITSTOPDECORATOR_H

#include "RaceTrackComponent.h"
class PitStopDecorator: public RaceTrackComponent
{
public:
    PitStopDecorator():RaceTrackComponent()
    {setDescription("Pitstop!");}
    ~PitStopDecorator(){};
    virtual void print(){};
    virtual void add(RaceTrackComponent*){}

};
#endif //PROJECT_PITSTOPDECORATOR_H
