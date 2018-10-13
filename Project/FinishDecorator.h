//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_FINISHDECORATOR_H
#define PROJECT_FINISHDECORATOR_H

#include "PimpMyTrack.h"
class FinishDecorator: public PimpMyTrack
{
public:
    FinishDecorator():PimpMyTrack()
    {setDescription("Finish Line!");}
    ~FinishDecorator(){};

};
#endif //PROJECT_FINISHDECORATOR_H
