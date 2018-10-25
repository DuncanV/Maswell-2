/**
 *  @file ConcreteMediator.h
 *  @class ConcreteMediator
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 */

#ifndef PROJECT_CONCRETEMEDIATOR_H
#define PROJECT_CONCRETEMEDIATOR_H

#include "Mediator.h"

class ConcreteMediator : public Mediator{
public:

    /**
     * Destructor for the ConcreteMediator
     */
    ~ConcreteMediator();

    /**
     * Add a member of the pitcrew to the mediator to talk to other members
     * @param member
     */
    virtual void addMember(PitCrew* member);

    /**
     * Notify the team that the car has changed
     * @param member
     */
    virtual void notify(PitCrew* member);

    /**
     * Notify the manager that the car has changed
     * @param member
     */
    virtual void notifyManager(PitCrew* member);

    /**
     * Get the manager of the pitcrew
     * @return
     */
    PitCrew* getManager(){return crewMembers[numCrewMembers-1];};
private:

    /**
     * @brief Vector to hold the pitcrew
     */
    vector<PitCrew*> crewMembers;

    /**
     * @brief The amount of members in the crew
     */
    int numCrewMembers;
};


#endif //PROJECT_CONCRETEMEDIATOR_H
