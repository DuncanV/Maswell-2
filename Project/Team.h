/**
 *  @file Team.h
 *  @class Team
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 */

#ifndef PROJECT_TEAM_H
#define PROJECT_TEAM_H

#include "PitStop.h"

class Team : public PitStop{
public:
    /**
     * default constructor for when a team is created, calls pitstop constructor
     * @param name_ the name of the team
     */
    Team(string name);

    /**
     * Function to get the car stats
     */
    virtual void getCarStats();
};


#endif //PROJECT_TEAM_H
