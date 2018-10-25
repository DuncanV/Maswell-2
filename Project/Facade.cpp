//
// Created by Duncan on 2018/10/25.
//
#include "Facade.h"

Facade::Facade() {
    raceManager = new ConcreteRaceManager();
    registratcionManager= new ConcreteRegistrationManager();
}

PitStop *Facade::createTeam(string name) {
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
    return nullptr;
}

Facade::~Facade() {

}
