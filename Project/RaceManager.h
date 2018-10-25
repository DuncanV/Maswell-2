/**
 *  @file RaceManager.h
 *  @class RaceManager
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Observer class for Observer pattern
 */


#ifndef PROJECT_RACEMANAGER_H
#define PROJECT_RACEMANAGER_H

#include <vector>
#include "Car.h"
#include "RaceTrackComponent.h"
class RaceManager{
public:
    /**
      * Moves all cars to starting point of track and sets the times to 0
      */
    virtual void readyRace()=0;
    /**
     * starts to move the cars along the racetrack
     */
    virtual void startRace()=0;
    /**
     * announcs when the race is finished and prints the final leaderboard
     */
    virtual void stopRace()=0;
    /**
      * pauses the race
      * @param numComponent
      */
    virtual void pauseRace(int numComponent)=0;
    /**
     * resumes the race according to where it left
     * @param numComponent
     */
    virtual void resumeRace(int numComponent)=0;
    /**
     * prints the cars in order according to track times
     */
    virtual void printLeaderBoard()=0;
    /**
     *add cars to the race manager
     * @param _cars
     */
    virtual void addCars(vector<Car*> _cars)=0;
    /**
    * adds the race
    * @param raceTrackComponent
    */
    virtual void addRacetrack(RaceTrackComponent*raceTrackComponent)=0;
private:

};
#endif //PROJECT_RACEMANAGER_H
