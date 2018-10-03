/**
 *  @file Spoiler.h
 *  @class Spoiler
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Concrete Decorcator for Decorator Pattern
 */

#ifndef PROJECT_SPOILER_H
#define PROJECT_SPOILER_H

#include "PimpMyRide.h"

class Spoiler: public PimpMyRide
{
public:
    Spoiler():PimpMyRide()
    {
        setDescription("You got yourself a spoiler!\n");
    }
    ~Spoiler(){};
};
#endif //PROJECT_SPOILER_H
