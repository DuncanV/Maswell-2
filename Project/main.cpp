#include <iostream>
#include "Car.h"
#include "GoKartFactory.h"
#include "RoadsterFactory.h"
#include "ForumlaOneFactory.h"
#include "CarFactory.h"
#include "Nitro.h"
#include "SkullVinyl.h"
#include "FlameVinyl.h"
#include "SpikedTires.h"
#include "Spoiler.h"
int main() {
    srand(time(NULL));

    CarFactory **Factories = new CarFactory *[3];   //
    Factories[0] = new GoKartFactory();             //Initialize factories to all the factories
    Factories[1] = new RoadsterFactory();           //
    Factories[2] = new FormulaOneFactory();         //
/*
 * UNCOMMENT FOR DEMONSTRATION OF FACTORY
 */
//    Car **cars = new Car *[5];
//    int again = 1;
//    int factoryNum;
//    int typeNum;
//    int amount = 0;
//    while (again == 1 && amount != 5) {
//        factoryNum = rand() % 3;
//        typeNum = rand() % 3 + 1;
//        if (typeNum == 1) {
//            cars[amount++] = Factories[factoryNum]->produceElectric();
//        } else if (typeNum == 2) {
//            cars[amount++] = Factories[factoryNum]->produceSports();
//        } else {
//            cars[amount++] = Factories[factoryNum]->produceStandard();
//        }
//
//        cout << "Would you like to create another car?" << endl;
//        cin >> again;
//    }
//    for (int m = 0; m < 5; m++)
//    {
//        delete cars[m];
//    }
//    delete []cars;

        Car* testDecorator = new SkullVinyl();
        testDecorator->add(new SpikedTires());
        testDecorator->add(new Nitro());
        testDecorator->add(new Spoiler());
        testDecorator->add(Factories[0]->produceSports());
        cout<<testDecorator->showCarStats()<<endl;
    //deletion of allocated memory
    for (int i = 0; i < 3; i++)
    {
        delete Factories[i];
    }
    delete []Factories;


    return 0;
}