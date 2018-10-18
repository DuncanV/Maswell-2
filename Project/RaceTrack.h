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
    /**
     * @return the RacetrackID
     */
    int getRaceTrackID(){ return RaceTrackID;};

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
