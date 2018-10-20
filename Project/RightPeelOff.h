/**
 *  @file RightPeelOff.h
 *  @class RightPeelOff
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Leaf for Composite design pattern
 */

#ifndef PROJECT_RIGHTPEELOFF_H
#define PROJECT_RIGHTPEELOFF_H
#include "RaceTrackComponent.h"
class RightPeelOff:public RaceTrackComponent{
public:
    /**
    *  constructor calls RaceTrackComponent and sets description
    */
    RightPeelOff():RaceTrackComponent()
    {setDescription("Right Peel Off");}
    /**
     * destructor
     */
    virtual ~RightPeelOff(){};
    /**
    * implentation of add function, used by decorator
    * @param R
    */
    virtual void add(RaceTrackComponent*R){};
    /**
    * prints the description of the race track component /with decorators if it has
    */
    virtual void print(){ if(decorate==0)
            cout<<getDescription()+"\n";
        else
            cout<<getDescription()+"\tWITH ADDED: "+getDecorator()+"\n";
    };

private:

};
#endif //PROJECT_RIGHTPEELOFF_H
