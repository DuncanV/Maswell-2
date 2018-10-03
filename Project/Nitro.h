//
// Created by Duncan on 2018/10/03.
//

#ifndef PROJECT_NITRO_H
#define PROJECT_NITRO_H
#include "PimpMyRide.h"

class Nitro: public PimpMyRide
{
public:
    Nitro():PimpMyRide()
    {
        setDescription("Nitro Yeah!\n");
    }
    ~Nitro(){};
};
#endif //PROJECT_NITRO_H
