//
// Created by Tjaart on 2018/10/13.
//

#include "PitStop.h"

PitStop::PitStop(string name_) {
    name = name_;
    numCars = 0;
}

PitStop::~PitStop() {

}

void PitStop::attach(PitCrew *member) {
    pitCrew.push_back(member);
    member->registerWork(this);
}

void PitStop::attachManager(PitCrew *manager_) {
    managers.push_back(manager_);
    manager_->registerWork(this);
}

void PitStop::detach(PitCrew *member) {
    bool found = false;

    vector<PitCrew*>::iterator it = pitCrew.begin();
    while ((it != pitCrew.end()) && (! found)) {
        if (*it == member) {
            found = true;
            pitCrew.erase(it);
        }
        ++it;
    }
}

void PitStop::notify(int index) {
    managers[index]->update(tyreCondition, fuelLevel, damage);
}

void PitStop::setTyreCondition(bool* status) {
    tyreCondition = status;
}

void PitStop::setFuelLevel(bool status) {
    fuelLevel = status;
}

void PitStop::setDamage(bool status) {
    damage = status;
}

void PitStop::addCar(Car *car) {
    cars.push_back(car);
    numCars++;
}

Car* PitStop::getCar(int index) {
    if (index >= cars.size()){
        return nullptr;
    }
    return cars[index];
}

string PitStop::showCars() {
    string sep = "*********************************\n";

    string out = "";
    out += "Cars:\n";
    out += sep;
    for (int i = 0; i < numCars-1; ++i) {
        out += "Car " + to_string(i) + "\n";
        out += cars[i]->toString();
        out += sep;
    }
    out += "Car " + to_string(numCars-1) + "\n";
    out += cars[numCars-1]->toString();
    return out;
}

string PitStop::getManagers() {
    string sep = "*********************************\n";

    string out = "";
    out += "Managers:\n";
    out += sep;
    for (int i = 0; i < managers.size(); ++i) {
        out += managers[i]->getDescription() + "\n";
    }
    return out;
}

string PitStop::getCrew(){
    string sep = "*********************************\n";

    string out = "";
    out += "Crew Members:\n";
    out += sep;
    for (int i = 0; i < pitCrew.size(); ++i) {
        out += pitCrew[i]->getDescription() + "\n";
    }
    return out;
}

string PitStop::getName() {
    return name;
}

string PitStop::toString() {
    string sep = "*********************************\n";

    string out = "";
    out += sep;
    out += "Team Name: " + getName() +"\n";
    out += sep;
    out += showCars();
    out += sep;
    out += getManagers();
    out += sep;
    out += getCrew();
    out += sep;
    return out;
}