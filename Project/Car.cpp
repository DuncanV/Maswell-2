//
// Created by Duncan + Tjaart on 2018/10/03.
//

#include "Car.h"
#include "PimpMyRide.h"
#include "PitStop.h"

int Car::modelCounter = 0;
int Car::prodcuctionNum = 0;

Car::Car(int tyres) {
    carDecorate=0;

    numTyres = tyres;
    tyreCondition = new int[numTyres];
    for(int i =0;i<numTyres;i++)
    {
        tyreCondition[i]=100;
    }
    fuelLevel=100;
    damage=0;

    setState(new Ready());
    driver= new AverageDriver();
}

Car::Car(string modelType_, int tyres) {
    modelType = modelType_;
    modelNumber = modelCounter++;
    carDecorate=0;
    CarID=prodcuctionNum++;
    //Can implement this with cars with more than 4 tyres
    numTyres = tyres;
    tyreCondition = new int[numTyres];
    for(int i =0;i<numTyres;i++)
    {
        tyreCondition[i]=100;
    }
    fuelLevel=100;
    damage=0;

    setState(new Ready());
    driver= new AverageDriver();
}

Car::Car(const Car& car_, bool flag) {
    modelType = car_.modelType;
    modelNumber = car_.modelNumber;
    CarID=prodcuctionNum++;
    if (flag == false){
        carDecorate=0;
    } else{
        carDecorate=car_.carDecorate->FullClone();
        topSpeed=car_.topSpeed;
        handling=car_.handling;
        acceleration=car_.acceleration;
    }

    numTyres = car_.numTyres;
    tyreCondition = new int[numTyres];
    for(int i =0;i<numTyres;i++)
    {
        tyreCondition[i]=100;
    }
    fuelLevel=100;
    damage=0;

    setState(new Ready());
    driver= new AverageDriver();
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
    out += "Handling: "+to_string(getHandling())+"\n";
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

string Car::showCarCondition() {
    string sep = "*********************************\n";

    string out = "Tyre Condition: ";
    for (int i = 0; i < numTyres-1; ++i) {
        out += to_string(tyreCondition[i]) + ", ";
    }
    out += to_string(tyreCondition[numTyres-1]);
    out += "\n";
    out += "Fuel Level: "+to_string(fuelLevel)+"\n";
    out += "Damage: "+to_string(damage)+"\n";
    return out;
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
    out += showCarCondition();
    out += sep;
    return out;
}

void Car::setTrackTime(int i) {
    trackTime = i;
}

int Car::getTrackTime() {
    return trackTime;
}

int Car::getNumTyres() {
    return numTyres;
}

int* Car::getCarTyres() {
    return tyreCondition;
}

int Car::getCarTyre(int index) {
    return tyreCondition[index];
}

void Car::setCarTyre(int index, int tyre){
    tyreCondition[index] = tyre;
    notifyTeam();
}

void Car::setChanged(int index, int tyre) {
    tyreCondition[index] = tyre;
}

int Car::getCarFuel() {
    return fuelLevel;
}

void Car::setCarFuel(int fuel) {
    fuelLevel = fuel;
    notifyTeam();
}

void Car::setRefuel(int fuel) {
    fuelLevel = fuel;
}

int Car::getCarDamage() {
    return damage;
}

void Car::setCarDamage(int damage_) {
    damage = damage_;
    notifyTeam();
}

void Car::setRepair(int damage_) {
    damage = damage_;
}

void Car::RegistrationNotify(string msg) {
    cout<<"NOTIFY: "+msg<<endl;
}

void Car::setState(State* state) {
    current = state;
}

string Car::getState() {
    return current->toString();
}

void Car::ready() {
    current->ready(this);
}

void Car::racing() {
    current->racing(this);
}

void Car::stopped() {
    current->stopped(this);
}

void Car::notifyTeam() {
//    cout << "Car :: Notify team!\n";
    team->getCarStats();
}