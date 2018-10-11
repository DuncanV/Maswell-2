//
// Created by  Duncan + Tjaart on 2018/10/10.
//

#include "ConcreteRegistrationManager.h"

ConcreteRegistrationManager::ConcreteRegistrationManager(int _numTracks) {
    numTracks=_numTracks;
    numCars= new int[_numTracks];
    size= new int[_numTracks];
    cars= new Car**[numTracks];
    for(int i =0;i<numTracks;i++)
    {
        size[i]=1;
        cars[i]= new Car*[1];
        numCars[i]=0;
    }
}

ConcreteRegistrationManager::~ConcreteRegistrationManager() {
    for(int i =0;i<numTracks;i++)
        if(cars[i])
        delete cars[i];
    delete [] cars;

    delete []numCars;
}

void ConcreteRegistrationManager::addCar(Car *_car, int track) {
    if(track<1||track>numTracks)
    {
        cout<<"INCORRECT TRACK SELECTED"<<endl;
        return;
    }
    for(int i=0;i<numCars[track-1];i++)
    {
        if(cars[track - 1][i] == _car)
        {
            cout<<"Car already registered for the race!"<<endl;
            return;
        }
    }
    /*
     * UNCOMMENT IF MEANT ONLY 1 car in total 
     */
//    for(int m=0;m<numTracks;m++)
//    {
//        for(int k=0;k<numCars[m];k++)
//        {
//            if(cars[m][k]==_car)
//            {
//                cout<<"Your car is already registered in a race!"<<endl;
//                return;
//            }
//        }
//    }
    if(numCars[track-1]>=size[track-1])
    resize(track-1);

    cars[track-1][numCars[track-1]]=_car;
    numCars[track-1]++;
    cout<<"Car has been successfully registered"<<endl;


}

void ConcreteRegistrationManager::resize(int trackNo) {
    int tempsize= size[trackNo]+1;
    Car** temp;
    temp =new Car*[tempsize];
    for(int i= 0;i<size[trackNo];i++)
    {
        temp[i]=cars[trackNo][i];
    }

    cars[trackNo]= temp;
    size[trackNo]=tempsize;
}

