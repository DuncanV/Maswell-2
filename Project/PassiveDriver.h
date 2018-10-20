//
// Created by Duncan on 2018/10/20.
//

#ifndef PROJECT_PASSIVEDRIVER_H
#define PROJECT_PASSIVEDRIVER_H
#include "Driver.h"
class PassiveDriver:public Driver
{
    PassiveDriver(){
        srand(time(NULL));

        int amount= rand()%80+110;
        double ability = 1/amount;
        setAbility(ability);
    };
};
#endif //PROJECT_PASSIVEDRIVER_H
