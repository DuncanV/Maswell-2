/**
 *  @file LeftPeelOff.h
 *  @class LeftPeelOff
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Leaf for Composite design pattern
 */
#ifndef PROJECT_LEFTPEELOFF_H
#define PROJECT_LEFTPEELOFF_H
#include "BigBrother.h"
#include "RaceTrackComponent.h"
class LeftPeelOff:public RaceTrackComponent{
public:
    /**
    *  constructor calls RaceTrackComponent and sets description
    */
    LeftPeelOff():RaceTrackComponent(){setDescription("Left Peel Off");}
    /**
     * destructor
     */
    virtual ~LeftPeelOff(){};
    /**
    * implentation of add function, used by decorator
    * @param R
    */
    virtual void add(RaceTrackComponent*R){}
    /**
    * prints the description of the race track component /with decorators if it has
    */
    virtual void print(){  if(decorate==0)
            cout<<getDescription()+"\n";
        else
            cout<<getDescription()+"\tWITH ADDED: "+getDecorator()+"\n";
    };
    int getAverageTime(){ return averageTime;};
    virtual void accept(BigBrother* v)
    {
        v->visit(*this);
    }
private:
    int averageTime= 12;
};
#endif //PROJECT_LEFTPEELOFF_H
