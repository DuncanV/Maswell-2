/**
 *  @file LeftEighth.h
 *  @class LeftEighth
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Leaf for Composite design pattern
 */

#ifndef PROJECT_LEFTEIGTH_H
#define PROJECT_LEFTEIGTH_H
#include "RaceTrackComponent.h"
class LeftEighth:public RaceTrackComponent{
public:
    /**
     * constructor calls RaceTrackComponent and sets description
     */
    LeftEighth():RaceTrackComponent(){setDescription("Left Eighth");}
    /**
     * destructor
     */
    virtual ~LeftEighth(){};
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
private:

};
#endif //PROJECT_LEFTEIGTH_H
