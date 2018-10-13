/**
 *  @file StartDecorator.h
 *  @class StartDecorator
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief ConcreteDecorator for Decorator design pattern
 */
#ifndef PROJECT_STARTDECORATOR_H
#define PROJECT_STARTDECORATOR_H

#include "PimpMyTrack.h"

class StartDecorator: public PimpMyTrack
{
public:
    /**
     * Constructor that calls constructor of pimpMyTrack and has a desciption
     */
    StartDecorator():PimpMyTrack()
    {setDescription("Start Line!");}
    /**
    * destructor
    */
    ~StartDecorator(){};

};
#endif //PROJECT_STARTDECORATOR_H
