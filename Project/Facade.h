//
// Created by Duncan on 2018/10/25.
//

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
    Facade();
    PitStop* createTeam(string name);
    Car* createCustomCar();
    RaceTrackComponent* createCustomeRacetrack();
    void registerCar(Car* c,int i)();
    void registerTrack(RaceTrackComponent* rt);
    void prepRace();
    void StartRace();
    Driver* createDriver();

private:
    vector<Car*>cars;
    vector<RaceTrackComponent*>racetracks;
    CarFactory **Factories;


};


#endif //PROJECT_FACADE_H
