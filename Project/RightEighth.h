/**
 *  @file RightEighth.h
 *  @class RightEighth
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Leaf for Composite design pattern
 */
#ifndef PROJECT_RIGHTEIGTH_H
#define PROJECT_RIGHTEIGTH_H
#include "RaceTrackComponent.h"
class RightEighth:public RaceTrackComponent{
public:
    /**
    *  constructor calls RaceTrackComponent and sets description
    */
    RightEighth():RaceTrackComponent()
    {setDescription("Right Eighth");}
    /**
     * destructor
     */
    virtual ~RightEighth(){};
    /**
    * implentation of add function, used by decorator
    * @param R
    */
    virtual void add(RaceTrackComponent*R){};
    /**
    * prints the description of the race track component /with decorators if it has
    */
    virtual void print(){
        if(decorate==0)
            cout<<getDescription()+"\n";
        else
            cout<<getDescription()+"\tWITH ADDED: "+getDecorator()+"\n";
    };
    int getAverageTime(){ return averageTime;};
private:
    int averageTime= 15;
};
#endif //PROJECT_RIGHTEIGTH_H
