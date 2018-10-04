//
// Created by Duncan + Tjaart on 2018/10/03.
//

#include "StandardCar.h"

StandardCar::StandardCar(string modelType_) : Car("StandardCar " + modelType_) {
    string end = "*************************\n";

    string out="";
    out += "Model type: StandardCar " + modelType_ + "\n";
    out += "Model number: " + to_string(getModelNumber()) + "\n";
    out += end;
    setDescription(out);
    cout << "Creating ...\n" <<"Car Description:\n" <<getDescription() << endl;
}

StandardCar::StandardCar(const Car &car_, bool flag_) : Car(car_, flag_) {

}

string StandardCar::getDescription() {

    string out = "Top speed: "+to_string(getSpeed())+"\n";
    out+= "Acceleration: "+to_string(getAcceleration())+"\n";
    out+="Handling: "+to_string(getHandling())+"\n";
    out+=  Car::getDescription();
    //Add veriables thats unique to electric car

    return out;
}


