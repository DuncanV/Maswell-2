/**
 *  @file ConcreteRegistrationManager.h
 *  @class ConcreteRegistrationManager
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief ConcreteMediator for mediator design pattern
 */

#ifndef PROJECT_CONCRETEREGISTRATIONMANAGER_H
#define PROJECT_CONCRETEREGISTRATIONMANAGER_H

#include <vector>
#include "RegistrationManager.h"

class ConcreteRegistrationManager:public RegistratcionManager
{
public:
    /**
     * constructor for ConcreteRegistrationManager
     * @param _numTracks determines how many racetracks there are
     */
    ConcreteRegistrationManager();

    /**
     * destructor for manager
     */
    ~ConcreteRegistrationManager();

    /**
     * implementation of absrtact function to add car into the cars array
     * @param _car car object to be placed in the array
     * @param track specifies which track the car will be racing
     */
    virtual void addCar(Car* _car, int track);

    /**
    * implementation of absrtact function to add car into the cars array
    * @param _racetrack racetrack object to be placed in the array
    */
    virtual void addTrack(RaceTrackComponent* _racetrack);

    /**
     * returns the cars for a given racetrack
     * @param racetrack
     * @return vector of cars
     */
    virtual vector<Car*> getCars(int racetrack)
    {
        int track= tracks.size();
        if(tracks.size()<=racetrack)
        {
            cout<<"TRACK IS NOT AVAILABLE YET\n";
            vector<Car*> a;
            return a;
        } else
        {
            return cars[racetrack];
        }
    }

    /**
     * returns a racetrack given a racetrack number
     * @param trackNo
     * @return a racetrack number
     */
    virtual RaceTrackComponent* getTrack(int trackNo)
    {
        if(trackNo>=tracks.size())
        {
            cout<<"TRACK IS NOT AVAILABLE YET\n";
            return NULL;
        }
        return tracks[trackNo];
    }
private:

    /**
     * cars array holds tracks and the cars
     */
    vector<vector<Car*> > cars;

    /**
     * resizes the track number of cars to fit more cars in
     * @param trackNo the track no to be resized
     */
    void resize(int trackNo);

    /**
     * holds all the registered tracks
     */
    vector<RaceTrackComponent*> tracks;

};

#endif //PROJECT_CONCRETEREGISTRATIONMANAGER_H
