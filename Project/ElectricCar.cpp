//
// Created by Duncan + Tjaart on 2018/10/03.
//

#include "ElectricCar.h"

ElectricCar::ElectricCar(string modelType_) : Car("Electric " + modelType_){

}

ElectricCar::ElectricCar(const Car &car_, bool flag_) : Car(car_, flag_){

}

string ElectricCar::getDescription() {
    return Car::getDescription();
}