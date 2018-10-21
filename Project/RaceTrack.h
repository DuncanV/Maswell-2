/**
 *  @file RaceTrack.h
 *  @class RaceTrack
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief composite class for composite pattern
 */
#ifndef PROJECT_RACETRACK_H
#define PROJECT_RACETRACK_H

#include <vector>
#include "RaceTrackComponent.h"

class RaceTrack: public RaceTrackComponent
{
public:
    /**
     * constructor calls parent constructor
     */
    RaceTrack():RaceTrackComponent(){RaceTrackID=trackNumber++;
//    setPartNumber(0);
 };
    /**
     * starts iteration of printing the race track
     */
    virtual void print()
    {
        vector<RaceTrackComponent*>::iterator it;
        for(it=components.begin();it!=components.end();it++)
        {
            (*it)->print();
        }
    };
    /**
     * implementation of adding racetrack component to the track
     * @param Ra
     */
    virtual void add(RaceTrackComponent* Ra)
    {
        components.push_back(Ra);
    }
    /**
     * destructor that deletes the racetrack parts
     */
    virtual ~RaceTrack(){
        vector<RaceTrackComponent*>:: iterator it;

        for (it = components.begin(); it != components.end(); ++it)
            delete *it;
    };
    /**
     * prints the race track parts nicely
     */
    void show()
    {
        string star="******************************************\n";
        cout<<"Here's your Race Track with ID = " +to_string(getRaceTrackID())+"\n"
            <<star;
        print();
        cout<<star;
    }

    void moveCar(Car* _car,int rt)
    {
        components[rt]->addCar(_car);
    }

    /**
     * @return the RacetrackID
     */
    int getRaceTrackID(){ return RaceTrackID;};

    int getNumComponents(){ return components.size();};

    void addAllCars(vector<Car*> _car,int rt)
    {
        for(int i=0;i<_car.size();i++)
        {
            components[rt]->addCar(_car[i]);
        }
    }

    void removeAllCars(vector<Car*>_car, int rt)
    {
        for(int i=0;i<_car.size();i++)
        {
            components[rt]->removeCar(_car[i]);
        }
    }

    vector<Car*> getAllCars(int rt)
    {
        return components[rt]->getCars();
    }
    virtual void accept(BigBrother* v){}

    void makeAccept(BigBrother*v,int rt){
        components[rt]->accept(v);
    }
    virtual void addTime(){}
private:
    /**
     * contains the components of the track
     */
    vector<RaceTrackComponent*> components;
    /**
     * component ID
     */
    int RaceTrackID;
    /**
     * to keep track of component ID
     */
    static int trackNumber;
};
#endif //PROJECT_RACETRACK_H
