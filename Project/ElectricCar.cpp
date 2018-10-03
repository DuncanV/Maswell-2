//
// Created by Duncan + Tjaart on 2018/10/03.
//

#include "ElectricCar.h"

ElectricCar::ElectricCar(string modelType_) : Car("Electric " + modelType_){
    string end = "*************************\n";

     string out="";
    out += "Model type: Electric " + modelType_ + "\n";
    out += "Model number: " + to_string(getModelNumber()) + "\n";
    out += end;
    setDescription(out);
    cout << "Creating ...\n" <<"Car Description:\n" <<getDescription() << endl;
}

ElectricCar::ElectricCar(const Car &car_) : Car(car_){

}

string ElectricCar::getDescription() {
    string out = Car::getDescription();
    //Add veriables thats unique to electric car
    return out;
}

Car* ElectricCar::clone() {
    cout << "Cloning ...\n" << getDescription() << endl;
    return new ElectricCar(*this);
}

string ElectricCar::showCarStats() {
    return getDescription();
}
