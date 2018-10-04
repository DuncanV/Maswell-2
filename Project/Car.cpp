//
// Created by Duncan + Tjaart on 2018/10/03.
//

#include "Car.h"

int Car::modelCounter = 0;

Car::Car(string modelType_) {
    modelType = modelType_;
    modelNumber = modelCounter++;
    carDecorate=0;
}

Car::Car(const Car& car_, bool flag) {
    if (flag == false){
        carDecorate=0;
    } else{
        carDecorate = car_.carDecorate;
        modelType = car_.modelType;
        modelNumber = car_.modelNumber;
    }
}

string Car::getDescription() {
    string out = "Top speed: "+to_string(getSpeed())+"\n";
    out+= "Acceleration: "+to_string(getAcce())+"\n";
    out+="Handling: "+to_string(getHandling())+"\n";
    out+=description;
    return description;
}

void Car::setDescription(string des) {
    description=des;
}

int Car::getModelNumber() {
    return modelNumber;
}

string Car::showCarStats() {
    string out= "Top speed: "+to_string(getSpeed())+"\n";
    out+= "Acceleration: "+to_string(getAcce())+"\n";
    out+="Handling: "+to_string(getHandling())+"\n";
    if(carDecorate!=0)
    {
       out+=getDescription()+"With Added:\n"+carDecorate->showCarStats();

        return out;
    }
    else
        return out+=getDescription()+"With NO Addons!\n";
}

void Car::add(Car *c) {
    if(carDecorate==0)
        carDecorate=c;
    else
        carDecorate->add(c);
}
