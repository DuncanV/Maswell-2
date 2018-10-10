//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_RIGHTEIGTH_H
#define PROJECT_RIGHTEIGTH_H
#include "RaceTrackComponent.h"
class RightEighth:public RaceTrackComponent{
public:
    RightEighth():RaceTrackComponent()
    {setDescription("Right Eighth");}
    virtual ~RightEighth(){};
    virtual void add(RaceTrackComponent*R){};
    virtual void print(){
        if(decorate==0)
            cout<<getDescription()+"\n";
        else
            cout<<getDescription()+"\tWITH ADDED: "+getDecorator()+"\n";
    };
private:

};
#endif //PROJECT_RIGHTEIGTH_H
