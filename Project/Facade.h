/**
 *  @file Facade.h
 *  @class Facade
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief Facade pattern
 */

#ifndef PROJECT_FACADE_H
#define PROJECT_FACADE_H
#include <iostream>
#include <vector>
#include "Car.h"
#include "GoKartFactory.h"
#include "RoadsterFactory.h"
#include "ForumlaOneFactory.h"
#include "CarFactory.h"
#include "Nitro.h"
#include "SkullVinyl.h"
#include "FlameVinyl.h"
#include "Slick.h"
#include "Spoiler.h"
#include "RegistrationManager.h"
#include "ConcreteRegistrationManager.h"
#include "RaceTrackComponent.h"
#include "RaceTrack.h"
#include "Straight.h"
#include "LeftEighth.h"
#include "RightEighth.h"
#include "LeftPeelOn.h"
#include "LeftPeelOff.h"
#include "RightPeelOff.h"
#include "RightPeelOn.h"
#include "FinishDecorator.h"
#include "StartDecorator.h"
#include "PitStopDecorator.h"
#include "SandPitsDecorator.h"
#include "Team.h"
#include "PitStop.h"
#include "PitCrew.h"
#include "Refueller.h"
#include "TyreChanger.h"
#include "Mechanic.h"
#include "Manager.h"
#include "Mediator.h"
#include "ConcreteMediator.h"
#include "RaceManager.h"
#include "ConcreteRaceManager.h"
#include "State.h"
#include "Driver.h"
#include "AggressiveDriver.h";
#include "AverageDriver.h"
#include "PassiveDriver.h";
class Facade
{
public:
    /**
     * constructor that creates the necessary registration objects
     */
    Facade();
    /**
     * destructor to delete all necessary things
     */
    ~Facade();
    /**
     * function to create a new team
     * @return a pitstop object
     */
    PitStop* createTeam();

    /**
     * create a custom car, will ask all options
     * @return the created car
     */
    Car* createCustomCar();
    /**
     * create a custom track
     * @return the custom track
     */
    RaceTrackComponent* createCustomeRacetrack();
    /**
     * register car to the track with the registration manager
     * @param c the car to add
     * @param i the track number
     */
    void registerCar(Car* c);

     /**
      * overloaded parameter to state which car you want to register
      */
    void registerCar();

    /**
    *  register the track with registration manager
    * @param rt
    */
    void registerTrack(RaceTrackComponent* rt);

    /**
     *  prepare the race by getting all the necessary info from the registration manager
     *  @param rt
     *  @return returns if you chose to go back
     */
    bool prepRace();

    /**
     * will start the race
     */
    void StartRace();

    /**
     * create a driver, asking which driver the user wants
     * @return the driver
     */
    Driver* createDriver();

    /**
     * function to clone a car
     * @return the cloned car
     */
    Car* copyCar();

private:
    /**
     * the list of all the cars
     */
    vector<Car*>cars;
    /**
     * the list of all the tracks
     */
    vector<RaceTrackComponent*>racetracks;
    /**
     * the different factories
     */
    CarFactory **Factories;
    /**
     *  the racemanager of the track
     */
    RaceManager* raceManager;
    /**
     * registration manager for the track
     */
    RegistratcionManager* registratcionManager;


};


#endif //PROJECT_FACADE_H
