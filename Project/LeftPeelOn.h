//
// Created by Duncan on 2018/10/10.
//

#ifndef PROJECT_LEFTPEELON_H
#define PROJECT_LEFTPEELON_H
#include "RaceTrackComponent.h"
class LeftPeelOn:public RaceTrackComponent{
public:
    LeftPeelOn(){setDescription("Left Peel On");}
    virtual ~LeftPeelOn(){};
    virtual void add(RaceTrackComponent*R){};
    virtual string print(){ cout<<getDescription()+"\n";};
private:

};
#endif //PROJECT_LEFTPEELON_H
