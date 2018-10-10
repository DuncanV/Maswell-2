//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_RIGHTPEELON_H
#define PROJECT_RIGHTPEELON_H
#include "RaceTrackComponent.h"
class RightPeelOn:public RaceTrackComponent{
public:
    RightPeelOn():RaceTrackComponent()
    {setDescription("Right Peel On");}
    virtual ~RightPeelOn(){};
    virtual void add(RaceTrackComponent*R){};
    virtual void print(){  if(decorate==0)
            cout<<getDescription()+"\n";
        else
            cout<<getDescription()+"\tWITH ADDED: "+getDecorator()+"\n";
    };
private:

};
#endif //PROJECT_RIGHTPEELON_H
