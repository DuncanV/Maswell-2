//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_RIGHTPEELOFF_H
#define PROJECT_RIGHTPEELOFF_H
#include "RaceTrackComponent.h"
class RightPeelOff:public RaceTrackComponent{
public:
    RightPeelOff(){setDescription("Right Peel Off");}
    virtual ~RightPeelOff(){};
    virtual void add(RaceTrackComponent*R){};
    virtual string print(){ cout<<getDescription()+"\n";};
private:

};
#endif //PROJECT_RIGHTPEELOFF_H
