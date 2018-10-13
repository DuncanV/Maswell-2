//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_STARTDECORATOR_H
#define PROJECT_STARTDECORATOR_H

#include "PimpMyTrack.h"

class StartDecorator: public PimpMyTrack
{
public:
    StartDecorator():PimpMyTrack()
    {setDescription("Start Line!");}
    ~StartDecorator(){};

};
#endif //PROJECT_STARTDECORATOR_H
