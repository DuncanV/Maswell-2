//
// Created by  Duncan + Tjaart on 2018/10/03.
//

#ifndef PROJECT_FLAMEVINYL_H
#define PROJECT_FLAMEVINYL_H

#include "PimpMyRide.h"

class FlameVinyl: public PimpMyRide
{
public:
    FlameVinyl():PimpMyRide()
    {
        setDescription("Flame Vinyls!\n");
    }
    ~FlameVinyl(){};
};
#endif //PROJECT_FLAMEVINYL_H
