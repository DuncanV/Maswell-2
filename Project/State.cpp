//
// Created by Tjaart on 2018/10/20.
//

#include "State.h"

void Ready::racing(Car *car) {
    cout << "Car is changed from READY to RACING\n";
    car->setState(new Racing());
    delete this;
}
void Ready::stopped(Car *car) {
    cout << "Car is changed from READY to STOPPED\n";
    car->setState(new Stopped());
    delete this;
}

void Racing::ready(Car *car) {
    cout << "Car is changed from RACING to READY\n";
    car->setState(new Ready());
    delete this;
}

void Racing::stopped(Car *car) {
    cout << "Car is changed from RACING to STOPPED\n";
    car->setState(new Stopped());
    delete this;
}

void Stopped::ready(Car *car) {
    cout << "Car is changed from STOPPED to READY\n";
    car->setState(new Ready());
    delete this;
}

void Stopped::racing(Car *car) {
    cout << "Car is changed from STOPPED to RACING\n";
    car->setState(new Racing());
    delete this;
}