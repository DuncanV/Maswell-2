//
// Created by Duncan on 2018/10/20.
//

#ifndef PROJECT_PASSIVEDRIVER_H
#define PROJECT_PASSIVEDRIVER_H
#include "Driver.h"
class PassiveDriver:public Driver
{
public:
    PassiveDriver(){
        srand(time(NULL));

        int amount= rand()%80+110;
        double ability = (amount*1.0)/100;
        setAbility(ability);
    };
};
#endif //PROJECT_PASSIVEDRIVER_H
