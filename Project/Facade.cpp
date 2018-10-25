//
// Created by Duncan on 2018/10/25.
//
#include "Facade.h"

Facade::Facade() {
    raceManager = new ConcreteRaceManager();
    registratcionManager= new ConcreteRegistrationManager();
    CarFactory **Factories = new CarFactory *[3];
    Factories[0] = new GoKartFactory();
    Factories[1] = new RoadsterFactory();
    Factories[2] = new FormulaOneFactory();
}

PitStop *Facade::createTeam() {
    return nullptr;
}

Car *Facade::createCustomCar() {
    return nullptr;
}

RaceTrackComponent *Facade::createCustomeRacetrack() {
    cout<<"\n====================== Track Creation ======================\n";
    cout<<"(Your first piece will be the start line and last piece will be finish line)\n";
    RaceTrackComponent* raceTrack = new RaceTrack();
    int finish=-1;
    int count=0;
    int piece=-1;
    bool noMore=false;
    RaceTrackComponent* add;
    while(finish!=3) {
        while (true)
        {
            cout << "\n*********** Part Selection ***********\n";
            cout << "0:Straight\n1:Left Eighth\n2:Right Eighth\n3:Left Peel On\n4:Left Peel off\n5:Right Peel On\n6:Right Peel Off\n\n";
            cout << "Please select the piece you want to add (0-6) > ";
            cin >> piece;
            if (piece == 0) {
                add= new Straight();
                break;
            } else if (piece == 1) {
                add= new LeftEighth();
                break;
            } else if (piece == 2) {
                add= new RightEighth();
                break;
            } else if (piece == 3) {
                add= new LeftPeelOn();
                break;
            } else if (piece == 4) {
                add= new LeftPeelOff();
                break;
            } else if (piece == 5) {
                add= new RightPeelOn();
                break;
            } else if (piece == 6) {
                add= new RightPeelOff();
                break;
            }
        }
        while(true)
        {
            if(count==0)
            {
                add->decorateTrack(new StartDecorator());
                count++;
                break;
            } else
            {
                cout << "\n*********** Part Decoration ***********\n";
                cout << "0:Nothing\n1:PitStop\n2:SandPits\n3:Finish Line\n\n";
                cout << "Please select the decoration you want to add (0-3) > ";
                cin>>finish;
                if (finish == 0) {
                    break;
                } else if (finish == 1) {
                    add->decorateTrack(new PitStopDecorator());
                    break;
                } else if (finish == 2) {
                    add->decorateTrack(new SandPitsDecorator());
                    break;
                } else if (finish == 3) {
                    add->decorateTrack(new FinishDecorator());
                    break;
                }
            }
        }
        raceTrack->add(add);
    }
    cout<<"\n*********** Here is you RaceTrack ***********\n";
    raceTrack->show();
    return raceTrack;


}

void Facade::registerCar(Car *c, int i) {

}

void Facade::registerTrack(RaceTrackComponent *rt) {

}

void Facade::prepRace(int racetrack) {

}

void Facade::StartRace() {

}

Driver *Facade::createDriver() {
    int num;
    while(true)
    {
        cout<<"\n====================== Driver Selection ======================\n";
        cout<<"0:Passive Driver\n1:Average Driver\n2:Aggressive Driver\n\n";
        cout<<"Please select what driver you would like for your car (0-2) > ";
        cin>>num;
        if(num==0)
        {
            cout<<"You chose a Passive Driver!\n";
            return new PassiveDriver();
        }
        else if (num==1)
        {
            cout<<"You chose a Average Driver!\n";
            return new AverageDriver();
        }
        else if (num==2)
        {
            cout<<"You chose a Aggressive Driver!\n";
            return new AggressiveDriver();
        }
    }
}

Facade::~Facade() {

    for (int i = 0; i < 3; i++)
    {
        delete Factories[i];
    }
    delete []Factories;
}
