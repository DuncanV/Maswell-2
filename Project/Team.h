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

    /**
     * function to get the condition of all the tyres and check if there is a problem or not
     * @param index is the car to check up on
     */
    void getTyres(int index);

    /**
     * function to get the fuel level of the car and check if there is a problem or not
     * @param index is the car to check up on
     */
    void getFuel(int index);

    /**
     * function to get the damage of the car and check if there is a problem or not
     * @param index is the car to check up on
     */
    void getDamage(int index);

};


#endif //PROJECT_TEAM_H
