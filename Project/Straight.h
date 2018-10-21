/**
 *  @file Straight.h
 *  @class Straight
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Leaf for Composite design pattern
 */

#ifndef PROJECT_STRAIGHT_H
#define PROJECT_STRAIGHT_H
#include "BigBrother.h"
#include "RaceTrackComponent.h"
class Straight:public RaceTrackComponent{
public:
    /**
    *  constructor calls RaceTrackComponent and sets description
    */
    Straight():RaceTrackComponent(){setDescription("Straight");}
    /**
     * destructor
     */
    virtual ~Straight(){};
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
    int getAverageTime(){ return averageTime;};
    virtual void accept(BigBrother* v)
    {
        v->visit(this);
    }
    virtual void addTime()
    {
        double driver;
        for(int i =0;i<cars.size();i++)
        {
            if(cars[i]->getDriver()!=NULL)
            {

                driver=cars[i]->getDriver()->getDriverAbilty();
            } else
            {
                driver=1;
            }
            cars[i]->setTrackTime(cars[i]->getTrackTime()+(int)(getAverageTime()*driver+0.5));
        }
    }
private:
    int averageTime= 20;
};
#endif //PROJECT_STRAIGHT_H
