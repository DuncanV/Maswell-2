//
// Created by Tjaart on 2018/10/13.
//

#include "ConcreteMediator.h"

ConcreteMediator::~ConcreteMediator() {

}

void ConcreteMediator::addMember(PitCrew *member) {
    crewMembers.push_back(member);
    numCrewMembers++;
}

void ConcreteMediator::notify(PitCrew *pitcrew) {
    for (int i = 0; i < numCrewMembers; ++i) {
        if (crewMembers[i] != pitcrew){
            crewMembers[i]->update(reinterpret_cast<bool *>(pitcrew->getTyreCondition()), pitcrew->getFuelLevel(), pitcrew->getDamage());
        }
    }
}