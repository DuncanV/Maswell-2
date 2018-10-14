//
// Created by  Duncan + Tjaart on 2018/10/10.
//

#include "ConcreteRegistrationManager.h"

ConcreteRegistrationManager::ConcreteRegistrationManager() {

}

ConcreteRegistrationManager::~ConcreteRegistrationManager() {

}

void ConcreteRegistrationManager::addCar(Car *_car, int track) {
    int i = tracks.size();
    if(track<cars.size())
    {
        vector<Car*>::iterator it;
        for(it=cars[track].begin();it!=cars[track].end();it++)
        {
            if(*(it)==_car)
            {
                cout<<"Your Car with ID = "+to_string(_car->getCarID())+" has already been registered for track: " +to_string(track)+"\n";
                return;
            }
        }
    }
    if(track>=cars.size())
    {
        resize(track);
        cars[track].push_back(_car);
        cout<<"Your Car with ID = "+to_string(_car->getCarID())+" has been registered for track: " +to_string(track)+", You will be notified when the track is complete\n";
    } else
    {
        cars[track].push_back(_car);
        if(tracks.size()<=track)
        {
            cout<<"Your Car with ID = "+to_string(_car->getCarID())+" has been registered for track: " +to_string(track)+", You will be notified when the track is complete\n";
        } else
            cout<<"Your Car with ID = "+to_string(_car->getCarID())+" has been registered for track: " +to_string(track)+" and this track is ready to race on!\n";

    }
}

void ConcreteRegistrationManager::resize(int trackNo) {
    unsigned long t = cars.size()-1;
    for(int i =cars.size()-1;i<trackNo;i++)
    {
        vector<Car*> s;
        cars.push_back(s);
    }
}

void ConcreteRegistrationManager::addTrack(RaceTrackComponent *_racetrack) {
    tracks.push_back(_racetrack);
    if(cars.size()<tracks.size())
    {
        vector<Car*> s;
        cars.push_back(s);
    } else
    {
        string msg;
        vector<Car*>::iterator it;
        for(it=cars[tracks.size()-1].begin();it!=cars[tracks.size()-1].end();it++)
        {
            msg="";
            msg+="Car with ID = "+to_string((*it)->getCarID())+", Track: "+to_string(tracks.size()-1)+" is now Open!\n";
            (*it)->RegistrationNotify(msg);
        }
    }
}

