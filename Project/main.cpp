#include <iostream>
#include <vector>
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
#include "RaceManager.h"
#include "ConcreteRaceManager.h"
#include "State.h"
#include "Driver.h"
#include "AggressiveDriver.h"
#include "AverageDriver.h"
#include "PassiveDriver.h"
#include "Facade.h"
int main() {
    srand(time(NULL));
    Facade* facade= new Facade();
    int choice=-1;

    cout<<"====================== Welcome To DT's Racing Simulation ======================\n";

    cout<<"INFO: This is a racing simulation where you are able to create teams, cars, drivers, tracks\nand race your car head to head against opponents cars!\nMay the best team win!\n\n";
    while(choice!=4)
    {
        cout<<"\n0:Create a team\n1:Create a racetrack\n2:Register a car\n3:Start a race\n4:EXIT\n\n";
        cout<<"Please select what you would like to do (0-4) >";
        cin>>choice;
        cout<<endl;
        if(choice==0)
        {
            facade->createTeam();
        }else if (choice==1)
        {
            facade->createCustomeRacetrack();
        }else if (choice==2)
        {
            facade->registerCar();
        }else if (choice==3)
        {
            facade->StartRace();
        }
    }
    cout<<"\n====================== Thank you for using DT's Racing Simulation ======================\n";

/*
 * UNCOMMENT FOR DEMONSTRATION OF STATES
 */
//    Car* car1 = Factories[2]->produceSports();
//    car1->setState(new Ready());
//    cout << car1->getState();
//    car1->ready();
//    car1->racing();
//    car1->stopped();
//    car1->ready();

 /*
 * UNCOMMENT FOR DEMONSTRATION OF THE TEAM PITCREW IMPLEMENTATION
 */
//    Mediator* team1Mediator = new ConcreteMediator();
//
//    Car* car1 = Factories[2]->produceSports();
//
//    PitStop* team1 = new Team("Mercedez");
//    team1->addCar(car1);
//    team1->attachManager(new Manager(team1Mediator, team1->getCar()));
//    team1->attach(new Refueller(team1Mediator, team1->getCar()));
//    team1->attach(new Mechanic(team1Mediator, team1->getCar()));
//    for (int i = 0; i < 4; ++i) {
//        team1->attach(new TyreChanger(team1Mediator, i, team1->getCar()));
//    }
//
//    for (int i = 0; i < team1->getNumMembers(); ++i){
//        team1Mediator->addMember(team1->getMember(i));
//    }
//    team1Mediator->addMember(team1->getManager());
//
//    car1->setManager(team1->getManager());
//    car1->setTeam(team1);
//    cout << team1->toString() << endl;
//
//   car1->setCarFuel(car1->getCarFuel() - 80);
//
//    Mediator* team2Mediator = new ConcreteMediator();
//
//    Car* car2 = Factories[2]->produceSports();
//
//    PitStop* team2 = new Team("Ferrari");
//    team2->addCar(car2);
//    team2->attachManager(new Manager(team2Mediator, team2->getCar()));
//    team2->attach(new Refueller(team2Mediator, team2->getCar()));
//    team2->attach(new Mechanic(team2Mediator, team2->getCar()));
//    for (int i = 0; i < 4; ++i) {
//        team2->attach(new TyreChanger(team2Mediator, i, team2->getCar()));
//    }
//
//    for (int i = 0; i < team2->getNumMembers(); ++i){
//        team2Mediator->addMember(team2->getMember(i));
//    }
//    team2Mediator->addMember(team2->getManager());
//
//    car2->setManager(team2->getManager());
//    car2->setTeam(team2);
//    cout << team2->toString() << endl;

//    car2->setCarFuel(car2->getCarFuel() - 80);

/*
 * UNCOMMENT FOR DEMONSTRATION OF ManagerRegitstration MEDIATOR
 */
//    int trackNum;
//    RaceTrackComponent* racetrack1 = new RaceTrack();
//    racetrack1->add(new Straight());
//    racetrack1->add(new LeftEighth());
//    racetrack1->add(new RightEighth());
//    RaceTrackComponent* racetrack2 = new RaceTrack();
//    racetrack2->add(new Straight());
//    racetrack2->add(new LeftEighth());
//    racetrack2->add(new RightEighth());
//    RegistratcionManager* manager= new ConcreteRegistrationManager();
//    car1->setDriver(new PassiveDriver());
//    car2->setDriver(new AggressiveDriver());
//    manager->addCar(car1,2);
//    manager->addCar(car1,1);
//    manager->addCar(car1,0);
//    manager->addTrack(racetrack1);
//    manager->addCar(car1,2);
//    manager->addCar(car2,0);
//    manager->addCar(car2,0);
//    manager->addCar(car2,1);
//    manager->addCar(car2,2);
//    manager->addTrack(racetrack2);
//    manager->addCar(car1,2);
//    manager->addCar(car2,2);
//    manager->addCar(car2,1);
//    manager->addCar(car2,2);
//    manager->addCar(car2,3);
//    manager->addCar(car1,2);
//
//    RaceManager* raceManager = new ConcreteRaceManager();
//    RaceTrackComponent* test=NULL;
//    while(test==NULL)
//    {
//        cout<<"Which track would you like to race? >";
//        cin>>trackNum;
//        test=manager->getTrack(trackNum);
//    }
//    raceManager->addRacetrack(test);
//    raceManager->addCars(manager->getCars(trackNum));
//    raceManager->readyRace();
//    raceManager->printLeaderBoard();
//    raceManager->startRace();


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
//    for (int i = 0; i < 3; i++)
//    {
//        delete Factories[i];
//    }
//    delete []Factories;
//    for (int i = 0; i < 5; i++)
//    {
//        delete cars[i];
//        delete clones[i];
//    }
//    delete []cars;
//    delete []clones;

    return 0;
}