//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_LEFTEIGTH_H
#define PROJECT_LEFTEIGTH_H
#include "RaceTrackComponent.h"
class LeftEighth:public RaceTrackComponent{
public:
    LeftEighth():RaceTrackComponent(){setDescription("Left Eighth");}
    virtual ~LeftEighth(){};
    virtual void add(RaceTrackComponent*R){};
    virtual void print(){  if(decorate==0)
            cout<<getDescription()+"\n";
        else
            cout<<getDescription()+"\tWITH ADDED: "+getDecorator()+"\n";
    };
private:

};
#endif //PROJECT_LEFTEIGTH_H
