//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_SANDPITSDECORATOR_H
#define PROJECT_SANDPITSDECORATOR_H

#include "PimpMyTrack.h"
class SandPitsDecorator: public PimpMyTrack
{
public:
    SandPitsDecorator():PimpMyTrack()
    {setDescription("Sand Pits!");}
    ~SandPitsDecorator(){};

};
#endif //PROJECT_SANDPITSDECORATOR_H
