//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_PITSTOPDECORATOR_H
#define PROJECT_PITSTOPDECORATOR_H

#include "PimpMyTrack.h"
class PitStopDecorator: public PimpMyTrack
{
public:
    PitStopDecorator():PimpMyTrack()
    {setDescription("Pitstop!");}
    ~PitStopDecorator(){};


};
#endif //PROJECT_PITSTOPDECORATOR_H
