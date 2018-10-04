//
// Created by Duncan + Tjaart on 2018/10/03.
//

#include "SportsCar.h"

SportsCar::SportsCar(string modelType_) : Car("SportsCar " + modelType_){
}

SportsCar::SportsCar(const Car &car_, bool flag_) : Car(car_, flag_){

}

string SportsCar::getDescription() {
    return Car::getDescription();
}

