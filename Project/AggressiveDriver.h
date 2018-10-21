//
// Created by Duncan on 2018/10/20.
//

#ifndef PROJECT_AGGRESSIVEDRIVER_H
#define PROJECT_AGGRESSIVEDRIVER_H

#include "Driver.h"
class AggressiveDriver:public Driver
{
public:
    AggressiveDriver(){
        srand(time(NULL));

        int amount= rand()%80+10;
        double ability = (amount*1.0)/100;
        setAbility(ability);
    };
};
#endif //PROJECT_AGGRESSIVEDRIVER_H
