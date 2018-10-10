//
// Created by Duncan on 2018/10/10.
//

#ifndef PROJECT_LEFTPEELON_H
#define PROJECT_LEFTPEELON_H
#include "RaceTrackComponent.h"
class LeftPeelOn:public RaceTrackComponent{
public:
    LeftPeelOn():RaceTrackComponent(){setDescription("Left Peel On");}
    virtual ~LeftPeelOn(){};
    virtual void add(RaceTrackComponent*R){};
    virtual void print(){  if(decorate==0)
            cout<<getDescription()+"\n";
        else
            cout<<getDescription()+" WITH ADDED: "+getDecorator()+"\n";
    };
private:

};
#endif //PROJECT_LEFTPEELON_H
