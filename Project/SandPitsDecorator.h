//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_SANDPITSDECORATOR_H
#define PROJECT_SANDPITSDECORATOR_H

#include "RaceTrackComponent.h"
class SandPitsDecorator: public RaceTrackComponent
{
public:
    SandPitsDecorator():RaceTrackComponent()
    {setDescription("Sand Pits!");}
    ~SandPitsDecorator(){};
    virtual void print(){};
    virtual void add(RaceTrackComponent*){}
};
#endif //PROJECT_SANDPITSDECORATOR_H
