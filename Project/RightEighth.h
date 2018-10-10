//
// Created by Duncan + Tjaart on 2018/10/10.
//

#ifndef PROJECT_RIGHTEIGTH_H
#define PROJECT_RIGHTEIGTH_H
#include "RaceTrackComponent.h"
class RightEighth:public RaceTrackComponent{
public:
    RightEighth(){setDescription("Right Eighth");}
    virtual ~RightEighth(){};
    virtual void add(RaceTrackComponent*R){};
    virtual string print(){ cout<<getDescription()+"\n";};
private:

};
#endif //PROJECT_RIGHTEIGTH_H
