//
// Created by Tjaart on 2018/10/13.
//

#include "Team.h"

Team::Team(string name) : PitStop(name){}

void Team::getCarStats() {
    Car* temp = getCar();

    //TYRE
    int* tempTyres = temp->getCarTyres();
    bool* problemTyre = new bool[temp->getNumTyres()];
    for (int i = 0; i < temp->getNumTyres(); ++i) {
        problemTyre[i] = false;
    }

    int tyreOptimum = 60;
    for (int i=0; i<temp->getNumTyres(); ++i){
        if (tempTyres[i] < tyreOptimum){
            problemTyre[i] = true;
        }
    }

    //FUEL
    int tempFuel = temp->getCarFuel();
    bool problemFuel = false;

    int fuelOptimum = 30;
    if (tempFuel < fuelOptimum){
        problemFuel = true;
    }

    //DAMAGE
    int tempDamage = temp->getCarDamage();
    bool problemDamage = false;

    int damageOptimum = 50;
    if (tempDamage > damageOptimum){
        problemDamage = true;
    }

    setTyreCondition(problemTyre);
    setFuelLevel(problemFuel);
    setDamage(problemDamage);
    notify();
}


