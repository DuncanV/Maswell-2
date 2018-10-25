//
// Created by Tjaart on 2018/10/13.
//

#include "ConcreteMediator.h"

ConcreteMediator::~ConcreteMediator() {
    numCrewMembers = 0;
}

void ConcreteMediator::addMember(PitCrew *member) {
    crewMembers.push_back(member);
    numCrewMembers++;
}

void ConcreteMediator::notify(PitCrew *member) {
    cout << member->getDescription() << " is notifying the team!\n";
    for (int i = 0; i < numCrewMembers; ++i) {
        if (crewMembers[i] != member){
            crewMembers[i]->update(member->getTyreCondition(),
                                   member->getFuelLevel(),
                                   member->getDamage());
        }
    }
}

void ConcreteMediator::notifyManager(PitCrew *member) {
    cout << member->getDescription() << " is notifying the manager!\n";
    getManager()->update(member->getTyreCondition(),
                    member->getFuelLevel(),
                    member->getDamage());
}