//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_RIGHTPEELOFF_H
#define PROJECT_RIGHTPEELOFF_H
#include "RaceTrackComponent.h"
class RightPeelOff:public RaceTrackComponent{
public:
    RightPeelOff():RaceTrackComponent()
    {setDescription("Right Peel Off");}
    virtual ~RightPeelOff(){};
    virtual void add(RaceTrackComponent*R){};
    virtual void print(){ if(decorate==0)
            cout<<getDescription()+"\n";
        else
            cout<<getDescription()+"\tWITH ADDED: "+getDecorator()+"\n";
    };
private:

};
#endif //PROJECT_RIGHTPEELOFF_H
