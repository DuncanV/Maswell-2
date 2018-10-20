//
// Created by Duncan on 2018/10/20.
//

#ifndef PROJECT_AGGRESSIVEDRIVER_H
#define PROJECT_AGGRESSIVEDRIVER_H

#include "Driver.h"
class AggressiveDriver:public Driver
{

    AggressiveDriver(){
        srand(time(NULL));

        int amount= rand()%80+10;
        double ability = 1/amount;
        setAbility(ability);
    };
};
#endif //PROJECT_AGGRESSIVEDRIVER_H
