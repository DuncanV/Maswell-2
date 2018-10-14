//
// Created by Tjaart on 2018/10/13.
//

#include "Team.h"

Team::Team(string name) : PitStop(name){}

void Team::getTyres(int index) {
    Car* temp = getCar(index);
    int* tempTyres = temp->getCarTyres();

    bool* problem = new bool[temp->getNumTyres()];
    for (int i = 0; i < temp->getNumTyres(); ++i) {
        problem[i] = false;
    }

    int optimum = 60;
    for (int i=0; i<temp->getNumTyres(); ++i){
        if (tempTyres[i] < optimum){
            problem[i] = true;
        }
    }
    //If tyreCondition = true -> problem
    setTyreCondition(problem);
    notify(index);
}

void Team::getFuel(int index) {
    Car* temp = getCar(index);
    int tempFuel = temp->getCarFuel();

    bool problem = false;
    int optimum = 30;
    if (tempFuel < optimum){
        problem = true;
    }
    //If tyreCondition = true -> problem
    setFuelLevel(problem);
    notify(index);
}

void Team::getDamage(int index) {
    Car* temp = getCar(index);
    int tempDamage = temp->getCarDamage();

    bool problem = false;
    int optimum = 50;
    if (tempDamage > optimum){
        problem = true;
    }
    //If tyreCondition = true -> problem
    setDamage(problem);
    notify(index);
}


