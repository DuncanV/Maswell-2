/**
 *  @file Mediator.h
 *  @class Mediator
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 */

#ifndef PROJECT_MEDIATOR_H
#define PROJECT_MEDIATOR_H

#include "PitCrew.h"

class PitCrew;

class Mediator {
public:

    /**
     * Abstract method for notifying other members of the team
     * @param member
     */
    virtual void notify(PitCrew* member) = 0;

    /**
     * Abstract method for adding a member to the mediator
     * @param member
     */
    virtual void addMember(PitCrew* member) = 0;

    /**
     * Abstract method for notifying the manager of the team
     * @param member
     */
    virtual void notifyManager(PitCrew* member) = 0;

    /**
     * Virtual destructor for the mediator
     */
    virtual ~Mediator(){};
};


#endif //PROJECT_MEDIATOR_H
