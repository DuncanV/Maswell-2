/**
 *  @file RightPeelOn.h
 *  @class RightPeelOn
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Leaf for Composite design pattern
 */

#ifndef PROJECT_RIGHTPEELON_H
#define PROJECT_RIGHTPEELON_H
#include "RaceTrackComponent.h"
class RightPeelOn:public RaceTrackComponent{
public:
    /**
    *  constructor calls RaceTrackComponent and sets description
    */
    RightPeelOn():RaceTrackComponent()
    {setDescription("Right Peel On");}
    /**
     * destructor
     */
    virtual ~RightPeelOn(){};
    /**
    * implentation of add function, used by decorator
    * @param R
    */
    virtual void add(RaceTrackComponent*R){};
    /**
    * prints the description of the race track component /with decorators if it has
    */
    virtual void print(){  if(decorate==0)
            cout<<getDescription()+"\n";
        else
            cout<<getDescription()+"\tWITH ADDED: "+getDecorator()+"\n";
    };
    int getAverageTime(){ return averageTime;};
private:
    int averageTime= 25;
};
#endif //PROJECT_RIGHTPEELON_H
