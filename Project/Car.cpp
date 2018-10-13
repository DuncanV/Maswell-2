//
// Created by Duncan + Tjaart on 2018/10/03.
//

#include "Car.h"
#include "PimpMyRide.h"
int Car::modelCounter = 0;
int Car::prodcuctionNum = 0;

Car::Car(string modelType_) {
    modelType = modelType_;
    modelNumber = modelCounter++;
    carDecorate=0;
    CarID=prodcuctionNum++;
    for(int i =0;i<4;i++)
    {
        tyreCondition[i]=100;
    }
    fuelLevel=100;
    damage=0;
}

Car::Car(const Car& car_, bool flag) {
    modelType = car_.modelType;
    modelNumber = car_.modelNumber;
    CarID=prodcuctionNum++;
    if (flag == false){
        carDecorate=0;
    } else{
//        carDecorate = car_.carDecorate;
        carDecorate=car_.carDecorate->FullClone();
        topSpeed=car_.topSpeed;
        handling=car_.handling;
        acceleration=car_.acceleration;
    }
    for(int i =0;i<4;i++)
    {
        tyreCondition[i]=100;
    }
    fuelLevel=100;
    damage=0;
}

string Car::getDescription()const {
    return description;
}

void Car::setDescription(string des) {
    description = des;
}

int Car::getModelNumber()const {
    return modelNumber;
}

string Car::showCarStats() {
    string sep = "*********************************\n";

    string out = "Top speed: "+to_string(getSpeed())+"\n";
    out += "Acceleration: "+to_string(getAcceleration())+"\n";
    out +="Handling: "+to_string(getHandling())+"\n";
    out += sep;
    if(carDecorate!=0)
    {
        out += "With Added:\n" + carDecorate->showCarStats();
        return out;
    }
    else
        return out += "With NO Addons!\n";
}

void Car::add(Car *c) {
    if(carDecorate==0)
        carDecorate=c;
    else
        carDecorate->add(c);
}

string Car::toString(){
    string sep = "*********************************\n";

    string out = "";
    out += sep;
    out += "Car Description:\n";
    out += "Model Type: " + modelType +"\n";
    out += "Model Number: " + to_string(modelNumber) + "\n";
    out += sep;
    out += showCarStats();
    out += sep;
    return out;
}

void Car::RegistrationNotify(string msg) {
    cout<<"NOTIFY: "+msg<<endl;
}


