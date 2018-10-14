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

void PitCrew::setDescription(string des) {
    description = des;
}

string PitCrew::getDescription() {
    return description;
}