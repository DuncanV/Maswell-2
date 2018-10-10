//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_STARTDECORATOR_H
#define PROJECT_STARTDECORATOR_H

#include "RaceTrackComponent.h"
class StartDecorator: public RaceTrackComponent
{
public:
    StartDecorator():RaceTrackComponent()
    {setDescription("Start Line!");}
    ~StartDecorator(){};
    virtual void print(){};
    virtual void add(RaceTrackComponent*){}

};
#endif //PROJECT_STARTDECORATOR_H
