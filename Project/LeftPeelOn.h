/**
 *  @file LeftPeelOn.h
 *  @class LeftPeelOn
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Leaf for Composite design pattern
 */

#ifndef PROJECT_LEFTPEELON_H
#define PROJECT_LEFTPEELON_H
#include "BigBrother.h"
#include "RaceTrackComponent.h"
class LeftPeelOn:public RaceTrackComponent{
public:
    /**
    *  constructor calls RaceTrackComponent and sets description
    */
    LeftPeelOn():RaceTrackComponent(){setDescription("Left Peel On");}
    /**
     * destructor
     */
    virtual ~LeftPeelOn(){};
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
    /**
     * returns the average time for the track
     * @return
     */
    int getAverageTime(){ return averageTime;};
    /**
     * accepts the visitor to go to the correct part of the visitor
     * @param v
     */
    virtual void accept(BigBrother* v)
    {
        v->visit(this);
    }
    /**
    *adds the time and fuel and tyre conditions to the car
    */
    virtual void addTime()
    {
        double driver;
        double fuel;
        double tyre;
        for(int i =0;i<cars.size();i++)
        {
            if(cars[i]->getDriver()!=NULL)
            {
                driver=cars[i]->getDriver()->getDriverAbilty();
                fuel= cars[i]->getDriver()->getFuelAbilty();
                tyre=cars[i]->getDriver()->getTyreAbilty();
            } else
            {
                driver=1;
                fuel=1;
                tyre=1;
            }
            cars[i]->setTrackTime(cars[i]->getTrackTime()+(int)(getAverageTime()*driver+0.5));
            cars[i]->setCarFuel(cars[i]->getCarFuel()-(int)(averageFuel*fuel+0.5));
//            for(int i=0;i<cars[i]->getNumTyres();i++)
//            {
//                cars[i]->setCarTyre(i,cars[i]->getCarTyre(i)-(int)(averageTyre*tyre+0.5));
//            }
        }
    }
private:
    /**
     * average time for completing a track component
     */
    int averageTime= 25;
    /**
     * average fuel used for the track part
     */
    int averageFuel=5;
    /**
     * average tyre wear for the track part
     */
    int averageTyre=5;
};
#endif //PROJECT_LEFTPEELON_H
