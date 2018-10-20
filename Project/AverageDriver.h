//
// Created by Duncan on 2018/10/20.
//

#ifndef PROJECT_AVERAGEDRIVER_H
#define PROJECT_AVERAGEDRIVER_H
#include "Driver.h"
class AverageDriver:public Driver
{
    AverageDriver(){
        srand(time(NULL));

        int amount= rand()%40+80;
        double ability = 1/amount;
        setAbility(ability);
    }
};
#endif //PROJECT_AVERAGEDRIVER_H
