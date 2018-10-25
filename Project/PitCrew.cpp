//
// Created by Tjaart on 2018/10/13.
//

#include "PitCrew.h"

PitCrew::PitCrew(Mediator* med, Car* car_) {
    mediator = med;
    car = car_;

    tyreCondition = new bool[car->getNumTyres()];
    for (int i = 0; i < car->getNumTyres(); ++i) {
        tyreCondition[i] = false;
    }
    fuelLevel = false;
    damage = false;
}

void PitCrew::registerWork(PitStop *pitStop) {
    workFor = pitStop;
}

void PitCrew::changed() {
    mediator->notify(this);
}

void PitCrew::changedCar() {
    mediator->notifyManager(this);
}

void PitCrew::setDescription(string des) {
    description = des;
}

string PitCrew::getDescription() {
    return description;
}

bool* PitCrew::getTyreCondition() {
    return tyreCondition;
}

void PitCrew::setTyreCondition(bool *status) {
    tyreCondition = status;
}

bool PitCrew::getFuelLevel() {
    return fuelLevel;
}

void PitCrew::setFuelLevel(bool status) {
    fuelLevel = status;
}

bool PitCrew::getDamage() {
    return damage;
}

void PitCrew::setDamage(bool status) {
    damage = status;
}