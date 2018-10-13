/**
 *  @file PitStopDecorator.h
 *  @class PitStopDecorator
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief ConcreteDecorator for Decorator design pattern
 */

#ifndef PROJECT_PITSTOPDECORATOR_H
#define PROJECT_PITSTOPDECORATOR_H

#include "PimpMyTrack.h"
class PitStopDecorator: public PimpMyTrack
{
public:
    /**
     * Constructor that calls constructor of pimpMyTrack and has a desciption
     */
    PitStopDecorator():PimpMyTrack()
    {setDescription("Pitstop!");}
    /**
    * destructor
    */
    ~PitStopDecorator(){};


};
#endif //PROJECT_PITSTOPDECORATOR_H
