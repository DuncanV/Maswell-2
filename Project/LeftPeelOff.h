//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_LEFTPEELOFF_H
#define PROJECT_LEFTPEELOFF_H
#include "RaceTrackComponent.h"
class LeftPeelOff:public RaceTrackComponent{
public:
    LeftPeelOff():RaceTrackComponent(){setDescription("Left Peel Off");}
    virtual ~LeftPeelOff(){};
    virtual void add(RaceTrackComponent*R){};
    virtual void print(){  if(decorate==0)
            cout<<getDescription()+"\n";
        else
            cout<<getDescription()+" WITH ADDED: "+getDecorator()+"\n";
    };
private:

};
#endif //PROJECT_LEFTPEELOFF_H
