/**
 *  @file SandPitsDecorator.h
 *  @class SandPitsDecorator
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief ConcreteDecorator for Decorator design pattern
 */
#ifndef PROJECT_SANDPITSDECORATOR_H
#define PROJECT_SANDPITSDECORATOR_H

#include "PimpMyTrack.h"
class SandPitsDecorator: public PimpMyTrack
{
public:
    /**
     * Constructor that calls constructor of pimpMyTrack and has a desciption
     */
    SandPitsDecorator():PimpMyTrack()
    {setDescription("Sand Pits!");}
    /**
    * destructor
    */
    ~SandPitsDecorator(){};

};
#endif //PROJECT_SANDPITSDECORATOR_H
