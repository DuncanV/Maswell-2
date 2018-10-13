/**
 *  @file FinishDecorator.h
 *  @class FinishDecorator
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief ConcreteDecorator for Decorator design pattern
 */
#ifndef PROJECT_FINISHDECORATOR_H
#define PROJECT_FINISHDECORATOR_H

#include "PimpMyTrack.h"
class FinishDecorator: public PimpMyTrack
{
public:
    /**
     * Constructor that calls constructor of pimpMyTrack and has a desciption
     */
    FinishDecorator():PimpMyTrack()
    {setDescription("Finish Line!");}
    /**
     * destructor
     */
    ~FinishDecorator(){};

};
#endif //PROJECT_FINISHDECORATOR_H
