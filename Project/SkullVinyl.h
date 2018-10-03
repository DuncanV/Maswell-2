//
// Created by Duncan on 2018/10/03.
//

#ifndef PROJECT_SKULLVINYL_H
#define PROJECT_SKULLVINYL_H
#include "PimpMyRide.h"

class SkullVinyl: public PimpMyRide
{
public:
    SkullVinyl():PimpMyRide()
    {
        setDescription("Skull Vinyls!\n");
    }
    ~SkullVinyl(){};
};
#endif //PROJECT_SKULLVINYL_H
