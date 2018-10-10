//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_STRAIGHT_H
#define PROJECT_STRAIGHT_H

#include "RaceTrackComponent.h"
class Straight:public RaceTrackComponent{
public:
    Straight():RaceTrackComponent(){setDescription("Straight");}
    virtual ~Straight(){};
    virtual void add(RaceTrackComponent*R){};
    virtual void print(){ if(decorate==0)
            cout<<getDescription()+"\n";
        else
            cout<<getDescription()+" WITH ADDED: "+getDecorator()+"\n";
    };
private:

};
#endif //PROJECT_STRAIGHT_H
