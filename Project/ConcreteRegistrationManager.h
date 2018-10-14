/**
 *  @file ConcreteRegistrationManager.h
 *  @class ConcreteRegistrationManager
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief ConcreteMediator for mediator design pattern
 */

#ifndef PROJECT_CONCRETEREGISTRATIONMANAGER_H
#define PROJECT_CONCRETEREGISTRATIONMANAGER_H

#include "RegistrationManager.h"

class ConcreteRegistrationManager:public RegistratcionManager
{
public:
    /**
     * constructor for ConcreteRegistrationManager
     * @param _numTracks determines how many racetracks there are
     */
    ConcreteRegistrationManager(int _numTracks);

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

private:
    /**
    * the number of tracks the mediator looks after
    */
    int numTracks;

    /**
     * the amount of cars on each track
     */
    int* numCars;

    /**
     * the size/ Max capacity of the track, dynamic
     */
    int* size;

    /**
     * cars array holds tracks and the cars
     */
    Car*** cars;

    /**
     * resizes the track number of cars to fit more cars in
     * @param trackNo the track no to be resized
     */
    void resize(int trackNo);

};

#endif //PROJECT_CONCRETEREGISTRATIONMANAGER_H
