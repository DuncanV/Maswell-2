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
#include "LeftPeelOn.h"
#include "LeftPeelOff.h"
#include "RightPeelOff.h"
#include "RightPeelOn.h"
#include "FinishDecorator.h"
#include "StartDecorator.h"
#include "PitStopDecorator.h"
#include "SandPitsDecorator.h"
#include "Team.h"
#include "PitStop.h"
#include "PitCrew.h"
#include "Refueller.h"
#include "TyreChanger.h"
#include "Mechanic.h"
#include "Manager.h"
#include "Mediator.h"
#include "ConcreteMediator.h"

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
 * UNCOMMENT FOR DEMONSTRATION OF THE TEAM PITCREW IMPLEMENTATION
 */
//    Mediator* team1Mediator = new ConcreteMediator();
//    PitStop* team1 = new Team("Mercedez");
//    team1->addCar(Factories[2]->produceSports());
//    team1->attachManager(new Manager(team1Mediator, team1->getCar(0)));
//    team1->attach(new Refueller(team1Mediator, team1->getCar(0)));
//    team1->attach(new Mechanic(team1Mediator, team1->getCar(0)));
//    for (int i = 0; i < 4; ++i) {
//        team1->attach(new TyreChanger(team1Mediator, i, team1->getCar(0)));
//    }
//
//    team1->addCar(Factories[2]->produceElectric());
//    team1->attachManager(new Manager(team1Mediator, team1->getCar(1)));
//    team1->attach(new Refueller(team1Mediator, team1->getCar(1)));
//    team1->attach(new Mechanic(team1Mediator, team1->getCar(1)));
//    for (int i = 0; i < 4; ++i) {
//        team1->attach(new TyreChanger(team1Mediator, i, team1->getCar(1)));
//    }
//
//    cout << team1->toString() << endl;


/*
 * UNCOMMENT FOR DEMONSTRATION OF ManagerRegitstration MEDIATOR
 */
    RaceTrackComponent* racetrack1 = new RaceTrack();
    RaceTrackComponent* racetrack2 = new RaceTrack();
    RegistratcionManager* manager= new ConcreteRegistrationManager();
    Car* car1= Factories[0]->produceSports();
    Car* car2= Factories[0]->produceElectric();
    manager->addCar(car1,2);
    manager->addCar(car1,1);
    manager->addCar(car1,0);
    manager->addTrack(racetrack1);
    manager->addCar(car1,2);
    manager->addCar(car2,0);
    manager->addCar(car2,0);
    manager->addCar(car2,1);
    manager->addCar(car2,2);
    manager->addTrack(racetrack2);
    manager->addCar(car1,2);
    manager->addCar(car2,2);
    manager->addCar(car2,1);
    manager->addCar(car2,2);
    manager->addCar(car2,3);
    manager->addCar(car1,2);

/*
 * UNCOMMENT FOR DEMONSTATION OF RACETRACK COMPOSITE & DECORATOR
*/
//    RaceTrackComponent* racetrack1 = new RaceTrack();
//
//    RaceTrackComponent*s1= new Straight();
//    s1->decorateTrack(new StartDecorator());
//    s1->decorateTrack(new PitStopDecorator());
//    racetrack1->add(s1);
//
//    RaceTrackComponent*l1= new LeftEighth();
//    l1->decorateTrack(new PitStopDecorator());
//    racetrack1->add(l1);
//
//    RaceTrackComponent*r1= new RightEighth();
//    r1->decorateTrack(new SandPitsDecorator());
//    racetrack1->add(r1);
//
//    racetrack1->add(new LeftEighth());
//    racetrack1->add(new Straight());
//
//    RaceTrackComponent*f1= new RightEighth();
//    f1->decorateTrack(new FinishDecorator());
//    racetrack1->add(f1);
//
//    racetrack1->show();
//    cout<<endl;
//    RaceTrackComponent* racetrack = new RaceTrack();
//
//    RaceTrackComponent*s= new Straight();
//    s->decorateTrack(new StartDecorator());
//    s->decorateTrack(new PitStopDecorator());
//    racetrack->add(s);
//
//    RaceTrackComponent*l= new LeftEighth();
//    l->decorateTrack(new PitStopDecorator());
//    racetrack->add(l);
//
//    RaceTrackComponent*r= new RightEighth();
//    r->decorateTrack(new SandPitsDecorator());
//    racetrack->add(r);
//
//    racetrack->add(new LeftEighth());
//    racetrack->add(new Straight());
//
//    RaceTrackComponent*f= new RightEighth();
//    f->decorateTrack(new FinishDecorator());
//    racetrack->add(f);
//
//    racetrack->show();


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
//        testDecorator->add(new Spoiler(testDecorator));
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