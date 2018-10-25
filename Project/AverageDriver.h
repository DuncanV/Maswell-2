//
// Created by Duncan on 2018/10/20.
//

#ifndef PROJECT_AVERAGEDRIVER_H
#define PROJECT_AVERAGEDRIVER_H
#include "Driver.h"
class AverageDriver:public Driver
{
public:
    AverageDriver(){


        int amount= rand()%40+120;
        double ability = (amount*1.0)/100;
        setAbility(ability);

        amount= rand()%40+120;
        ability = (amount*1.0)/100;
        setFuelAbility(ability);

        amount= rand()%40+120;
        ability = (amount*1.0)/100;
        setTyreAbility(ability);
    }
};
#endif //PROJECT_AVERAGEDRIVER_H
