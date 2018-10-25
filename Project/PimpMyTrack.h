/**
 *  @file PimpMyTrack.h
 *  @class PimpMyTrack
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Abstract Decorator for Decorator design pattern
 */

#ifndef PROJECT_PIMPMYTRACK_H
#define PROJECT_PIMPMYTRACK_H

#include "RaceTrackComponent.h"

class PimpMyTrack: public RaceTrackComponent
{
public:
    /**
     * constructor calls parent constructor
     */
    PimpMyTrack():RaceTrackComponent(){};
    /**
     * destuctor
     */
    ~PimpMyTrack(){};
    /**
     * empty implementation of print
     */
    virtual void print(){};
    /**
     *  empty implementation of add
     */
    virtual void add(RaceTrackComponent*){}
    /**
     * empty implementation of add time
     */
    virtual void addTime(){};
    /**
     * empty implementation of accept
     * @param v
     */
    virtual void accept(BigBrother* v){};
private:

};
#endif //PROJECT_PIMPMYTRACK_H
