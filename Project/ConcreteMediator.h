//
// Created by Tjaart on 2018/10/13.
//

#ifndef PROJECT_CONCRETEMEDIATOR_H
#define PROJECT_CONCRETEMEDIATOR_H

#include "Mediator.h"

class ConcreteMediator : public Mediator{
public:
    ~ConcreteMediator();
    virtual void addMember(PitCrew* member);
    virtual void notify(PitCrew* member);

private:
    vector<PitCrew*> crewMembers;
    int numCrewMembers;
};


#endif //PROJECT_CONCRETEMEDIATOR_H
