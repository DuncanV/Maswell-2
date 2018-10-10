//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_STRAIGHT_H
#define PROJECT_STRAIGHT_H

#include "RaceTrackComponent.h"
class Straight:public RaceTrackComponent{
public:
    Straight(){setDescription("Straight");}
    virtual ~Straight(){};
    virtual void add(RaceTrackComponent*R){};
    virtual void print(){ cout<<getDescription()+"\n";};
private:

};
#endif //PROJECT_STRAIGHT_H
