//
// Created by Duncan on 2018/10/03.
//

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
