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
    modelType = car_.modelType;
    modelNumber = car_.modelNumber;

    if (flag == false){
        carDecorate=0;
    } else{
        carDecorate = car_.carDecorate;
        topSpeed=car_.topSpeed;
        handling=car_.handling;
        acceleration=car_.acceleration;
    }
}

string Car::getDescription() {
    string out = "Top speed: "+to_string(getSpeed())+"\n";
    out+= "Acceleration: "+to_string(getAcceleration())+"\n";
    out+="Handling: "+to_string(getHandling())+"\n";
    out+=description;
    return description;
}

void Car::setDescription(string des) {
    description=des;
}

int Car::getModelNumber()const {
    return modelNumber;
}

string Car::showCarStats() {
    string out= "Top speed: "+to_string(getSpeed())+"\n";
    out+= "Acceleration: "+to_string(getAcceleration())+"\n";
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
