//
// Created by Tjaart on 2018/10/13.
//

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

    virtual void getCarStats();
};


#endif //PROJECT_TEAM_H
