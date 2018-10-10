#include <iostream>
#include "Car.h"
#include "GoKartFactory.h"
#include "RoadsterFactory.h"
#include "ForumlaOneFactory.h"
#include "CarFactory.h"
#include "Nitro.h"
#include "SkullVinyl.h"
#include "FlameVinyl.h"
#include "Slick.h"
#include "Spoiler.h"
#include "RegistrationManager.h"
#include "ConcreteRegistrationManager.h"
#include "RaceTrackComponent.h"
#include "RaceTrack.h"
#include "Straight.h"
#include "LeftEighth.h"
#include "RightEighth.h"
int main() {
    srand(time(NULL));

    CarFactory **Factories = new CarFactory *[3];   //
    Factories[0] = new GoKartFactory();             //Initialize factories to all the factories
    Factories[1] = new RoadsterFactory();           //
    Factories[2] = new FormulaOneFactory();         //
//
//    Car **cars = new Car *[5];
//    Car **clones = new Car *[5];
//
//    int input;
//    int choice;
//    int cloneChoice;
//    int cloneOption;
//    int counter = 0;
//    int cloneCounter = 0;
//    bool noCars = true;
//
//    do{
//        cout << "Welcome to [Name here]!\n\n";
//
//        cout << "What would you like to do?\n";
//        cout << "1. Build GoKart\n"
//             << "2. Build Roadster\n"
//             << "3. Build FormulaOne\n"
//             << "4. Clone an existing car\n"
//             << "8. Exit\n>>";
//
//        cin >> input;
//        cout<<endl;
//
//        if (input == 1){
//            cout << "What model would you like?\n";
//            cout << "1. Electric\n"
//                 << "2. Sport\n"
//                 << "3. Standard\n>>";
//            cin >> choice;
//            cout<<endl;
//
//            if (choice == 1){
//                cars[counter] = Factories[0]->produceElectric();
//            } else if (choice == 2){
//                cars[counter] = Factories[0]->produceSports();
//            } else if (choice == 3){
//                cars[counter] = Factories[0]->produceStandard();
//            }
//
//        } else if (input == 2){
//            cout << "What model would you like?\n";
//            cout << "1. Electric\n"
//                 << "2. Sport\n"
//                 << "3. Standard\n>>";
//            cin >> choice;
//            cout<<endl;
//
//            if (choice == 1){
//                cars[counter] = Factories[1]->produceElectric();
//            } else if (choice == 2){
//                cars[counter] = Factories[1]->produceSports();
//            } else if (choice == 3){
//                cars[counter] = Factories[1]->produceStandard();
//            }
//
//        } else if (input == 3){
//            cout << "What model would you like?\n";
//            cout << "1. Electric\n"
//                 << "2. Sport\n"
//                 << "3. Standard\n>>";
//            cin >> choice;
//            cout<<endl;
//
//            if (choice == 1){
//                cars[counter] = Factories[2]->produceElectric();
//            } else if (choice == 2){
//                cars[counter] = Factories[2]->produceSports();
//            } else if (choice == 3){
//                cars[counter] = Factories[2]->produceStandard();
//            }
//
//        } else if (input == 4){
//            if (counter == 0){
//                cout << "There are no cars to clone!\n";
//                noCars = true;
//            } else{
//                cout << "Here are the cars available to clone:\n";
//                for (int i = 0; i < counter; ++i) {
//                    cout << ">>"<<to_string(i) << ":\n"
//                         << cars[i]->toString() << endl;
//                }
//
//                cout << "Please select the one you want to clone.\n>>";
//                cin >> cloneChoice;
//                cout<<endl;
//                cout << "Would you like to:\n"
//                     << "0. Clone base\n"
//                     << "1. Clone upgraded car\n>>";
//                cin >> cloneOption;
//                cout<<endl;
//
//                clones[cloneCounter] = cars[cloneChoice]->clone(cloneOption);
//                noCars = false;
//            }
//        }
//
//        if (input != 8 && input != 4){
//            bool again = true;
//            int option;
//            int upgrade;
//
//            do{
//                cout << "1. Add upgrades\n"
//                     << "2. Done\n>>";
//                cin >> option;
//                cout<<endl;
//
//                if (option == 1) {
//                    cout << "What would you like to add?\n"
//                         << "1. Flame Vinyls\n"
//                         << "2. Skull Vunyls\n"
//                         << "3. Nitros\n"
//                         << "4. Slick Tires\n"
//                         << "5. Spoiler\n>>";
//                    cin >> upgrade;
//                    cout<<endl;
//
//                    switch (upgrade){
//                        case 1 : cars[counter]->add(new FlameVinyl()); break;
//                        case 2 : cars[counter]->add(new SkullVinyl()); break;
//                        case 3 : cars[counter]->add(new Nitro(cars[counter])); break;
//                        case 4 : cars[counter]->add(new Slick(cars[counter])); break;
//                        case 5 : cars[counter]->add(new Spoiler(cars[counter])); break;
//                    }
//                } else if (option == 2){
//                    again = false;
//                }
//            }
//            while (again == true);
//
//            cout << "Your car is:\n";
//            cout << cars[counter]->toString() << endl;
//
//            counter++;
//        }
//        if (input != 8 && input == 4 && noCars == false){
//            bool again = true;
//            int option;
//            int upgrade;
//
//            do{
//                cout << "1. Add upgrades\n"
//                     << "2. Done\n>>";
//                cin >> option;
//                cout<<endl;
//
//                if (option == 1) {
//                    cout << "What would you like to add?\n"
//                         << "1. Flame Vinyls\n"
//                         << "2. Skull Vunyls\n"
//                         << "3. Nitros\n"
//                         << "4. Slick Tires\n"
//                         << "5. Spoiler\n>>";
//                    cin >> upgrade;
//                    cout<<endl;
//
//                    switch (upgrade){
//                        case 1 : clones[cloneCounter]->add(new FlameVinyl()); break;
//                        case 2 : clones[cloneCounter]->add(new SkullVinyl()); break;
//                        case 3 : clones[cloneCounter]->add(new Nitro(clones[cloneCounter])); break;
//                        case 4 : clones[cloneCounter]->add(new Slick(clones[cloneCounter])); break;
//                        case 5 : clones[cloneCounter]->add(new Spoiler(clones[cloneCounter])); break;
//                    }
//                } else if (option == 2){
//                    again = false;
//                }
//            }
//            while (again == true);
//
//            cout << "Your car is:\n";
//            cout << clones[cloneCounter]->toString() << endl;
//
//            cloneCounter++;
//        }
//    }
//    while(input != 8 && counter < 5);

/*
 * UNCOMMENT FOR DEMONSTRATION OF MEDIATOR
 */
//    RegistratcionManager* manager= new ConcreteRegistrationManager(5);
//    Car* car1= Factories[0]->produceSports();
//    Car* car2= Factories[0]->produceElectric();
//    manager->addCar(car1,2);
//    manager->addCar(car1,1);
//    manager->addCar(car1,2);
//    manager->addCar(car2,2);
//    manager->addCar(car2,1);
//    manager->addCar(car2,2);
//    manager->addCar(car2,3);

/*
 * UNCOMMENT FOR DEMONSTATION OF RACETRACK COMPOSITE
*/
    RaceTrackComponent* racetrack = new RaceTrack();
    racetrack->add(new Straight());
    racetrack->add(new LeftEighth());
    racetrack->add(new Straight());
    racetrack->add(new RightEighth());
    racetrack->print();

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

/*
* UNCOMMENT FOR DEMONSTRATION OF DECORATOR
*/
//    Car* testDecorator =Factories[0]->produceElectric();
//    testDecorator->add(new FlameVinyl());
//    testDecorator->add(new Slick(testDecorator));
//    testDecorator->add(new Nitro(testDecorator));
//    testDecorator->add(new Spoiler(testDecorator));
//
//    cout << "Car after adding upgrades!\n";
//    cout << testDecorator->toString() << endl;
//    Car* car1 = testDecorator->clone();
//    Car* car2 = testDecorator->clone(true);
//
//    cout<<testDecorator->toString()<<endl;
//    cout<<car1->toString()<<endl;
//    cout<<car2->toString()<<endl;

//        Car* testDecorator =Factories[0]->produceElectric();
//        testDecorator->add(new FlameVinyl());
//        testDecorator->add(new Slick(testDecorator));
//        testDecorator->add(new Nitro(testDecorator));
////        testDecorator->add(new Spoiler(testDecorator));
//
//        cout << "Car after adding upgrades!\n";
//        cout << testDecorator->toString() << endl;
//        Car* car1 = testDecorator->clone();
//        Car* car2 = testDecorator->clone(true);
//        delete testDecorator;
//        car1->add(new Spoiler(car1));
//        car2->add(new Spoiler(car2));
//
//        cout<<car1->toString()<<endl;
//        cout<<car2->toString()<<endl;


//        Car* testDecorator1 =Factories[2]->produceSports();
//    testDecorator1->add(new FlameVinyl());
//    testDecorator1->add(new Slick(testDecorator1));
//    testDecorator1->add(new Nitro(testDecorator1));
//    testDecorator1->add(new Spoiler(testDecorator1));
//
//    delete testDecorator;
//
//    cout<<car1->toString()<<endl;
//    cout<<car2->toString()<<endl;


    //deletion of allocated memory
    for (int i = 0; i < 3; i++)
    {
        delete Factories[i];
    }
    delete []Factories;
//    for (int i = 0; i < 5; i++)
//    {
//        delete cars[i];
//        delete clones[i];
//    }
//    delete []cars;
//    delete []clones;

    return 0;
}