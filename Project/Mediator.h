//
// Created by Tjaart on 2018/10/13.
//

#ifndef PROJECT_MEDIATOR_H
#define PROJECT_MEDIATOR_H

#include "PitCrew.h"

class PitCrew;

class Mediator {
public:
    virtual void notify(PitCrew* member) = 0;
    virtual void addMember(PitCrew* member) = 0;
    virtual void notifyManager(PitCrew* member) = 0;
    virtual ~Mediator(){};
};


#endif //PROJECT_MEDIATOR_H
