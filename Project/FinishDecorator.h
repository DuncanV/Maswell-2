//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_FINISHDECORATOR_H
#define PROJECT_FINISHDECORATOR_H

#include "RaceTrackComponent.h"
class FinishDecorator: public RaceTrackComponent
{
public:
    FinishDecorator():RaceTrackComponent()
    {setDescription("Finish Line!");}
    ~FinishDecorator(){};
    virtual void print(){};
    virtual void add(RaceTrackComponent*){}
};
#endif //PROJECT_FINISHDECORATOR_H
