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

ElectricCar::ElectricCar(const Car &car_, bool flag_) : Car(car_, flag_){
//    string end = "*************************\n";
//
//    string out="";
//    out += "Model type: " + car_.getModelType() + "\n";
//    out += "Model number: " + to_string(car_.getModelNumber()) + "\n";
//    out += end;
//    setDescription(out);

}

string ElectricCar::getDescription() {
    string out = "Top speed: "+to_string(getSpeed())+"\n";
    out+= "Acceleration: "+to_string(getAcceleration())+"\n";
    out+="Handling: "+to_string(getHandling())+"\n";
    out+=  Car::getDescription();
    //Add veriables thats unique to electric car

    return out;
}

<<<<<<< HEAD
=======

>>>>>>> b09fdc93e83773021c8043c26f53c8ee59dcffda
