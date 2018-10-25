//
// Created by Duncan on 2018/10/25.
//
#include "Facade.h"

Facade::Facade() {
    raceManager = new ConcreteRaceManager();
    registratcionManager= new ConcreteRegistrationManager();
    CarFactory **Factories = new CarFactory *[3];
    Factories[0] = new GoKartFactory();
    Factories[1] = new RoadsterFactory();
    Factories[2] = new FormulaOneFactory();
}

PitStop *Facade::createTeam() {
    return nullptr;
}

Car *Facade::createCustomCar() {
    return nullptr;
}

RaceTrackComponent *Facade::createCustomeRacetrack() {
    return nullptr;
}

void Facade::registerCar(Car *c, int i) {

}

void Facade::registerTrack(RaceTrackComponent *rt) {

}

void Facade::prepRace(int racetrack) {

}

void Facade::StartRace() {

}

Driver *Facade::createDriver() {
    int num;
    while(true)
    {
        cout<<"\n====================== Driver Selection ======================\n";
        cout<<"0:Passive Driver\n1:Average Driver\n2:Aggressive Driver\n";
        cout<<"Please select what driver you would like for your car (0-2) > ";
        cin>>num;
        cout<<endl;
        if(num==0)
        {
            return new PassiveDriver();
        }
        else if (num==1)
        {
            return new AverageDriver();
        }
        else if (num==2)
        {
            return new AggressiveDriver();
        }
    }

}

Facade::~Facade() {

    for (int i = 0; i < 3; i++)
    {
        delete Factories[i];
    }
    delete []Factories;
}
