//
// Created by Duncan on 2018/10/03.
//

#ifndef PROJECT_SPIKEDTIRES_H
#define PROJECT_SPIKEDTIRES_H
#include "PimpMyRide.h"

class SpikedTires: public PimpMyRide
{
public:
    SpikedTires():PimpMyRide()
    {
        setDescription("Spiked Tires!\n");
    }
    ~SpikedTires(){};
};
#endif //PROJECT_SPIKEDTIRES_H
