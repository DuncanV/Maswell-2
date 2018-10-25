//
// Created by Tjaart on 2018/10/13.
//

#include "PitStop.h"

PitStop::PitStop(string name_) {
    name = name_;
    numMembers = 0;
}

PitStop::~PitStop() {
    delete manager;
    delete car;
}

void PitStop::attach(PitCrew *member) {
    pitCrew.push_back(member);
    member->registerWork(this);
    numMembers++;
}

void PitStop::attachManager(PitCrew *manager_) {
    manager = manager_;
    manager->registerWork(this);
}

void PitStop::detach(PitCrew *member) {
    bool found = false;

    auto it = pitCrew.begin();
    while ((it != pitCrew.end()) && (! found)) {
        if (*it == member) {
            found = true;
            pitCrew.erase(it);
        }
        ++it;
    }
    numMembers--;
}

void PitStop::notify() {
    manager->update(tyreCondition, fuelLevel, damage);
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

void PitStop::addCar(Car *car_) {
    car = car_;
}

Car* PitStop::getCar() {
    return car;
}

PitCrew* PitStop::getManager() {
    return manager;
}

string PitStop::showCar() {
    string sep = "*********************************\n";

    string out = "";
    out += "Car:\n";
    out += sep;
    out += car->toString();
    return out;
}

string PitStop::showManager() {
    string sep = "*********************************\n";

    string out = "";
    out += "Manager:\n";
    out += sep;
    out += manager->getDescription() + "\n";
    return out;
}

string PitStop::showCrew(){
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
    out += showCar();
    out += sep;
    out += showManager();
    out += sep;
    out += showCrew();
    out += sep;
    return out;
}