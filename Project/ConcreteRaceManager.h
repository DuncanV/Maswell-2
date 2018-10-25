/**
 *  @file ConcreteRaceManager.h
 *  @class ConcreteRaceManager
 *  @authors Duncan + Tjaart
 *  @version 1.0.0
 *  @brief concrete Observer in observer pattern
 */
#ifndef PROJECT_CONCRETERACEMANAGER_H
#define PROJECT_CONCRETERACEMANAGER_H

#include "RaceManager.h"
#include "Car.h"
#include "BigBrother.h"
#include "ConcreteBigBrother.h"
#include <vector>
#include <unistd.h>

using namespace std;
class ConcreteRaceManager: public RaceManager
{
public:
    /**
     * Moves all cars to starting point of track and sets the times to 0
     */
    virtual void readyRace()
    {
        for (int i=0; i<cars.size(); i++)
        {
            cars[i]->setLap(0);
            cars[i]->setTrackPart(0);
            cars[i]->setTrackTime(0);
            cars[i]->ready();
            RaceTrack->moveCar(cars[i],0);
        }
        cout<<"Cars Are Ready to race!\n";
        lapCount=0;

    }
    /**
     * starts to move the cars along the racetrack
     */
    virtual void startRace()
    {//will have to have iterator object in here
        raceVisitor= new ConcreteBigBrother();
        cout<<"How many laps would you like this race to be ? > ";
        cin>>LapMax;
        racetrackSize=RaceTrack->getNumComponents();
        cout<<endl;

        for(int i =3;i>=1;i--)
        {
            cout<<to_string(i)<<endl;
            usleep(1000000);
        }

        for(int k=0;k<cars.size();k++)
        {
            cars[k]->racing();
        }
        RaceTrack->removeAllCars(cars,0);
        cout<<"START RACE!\n\n";
        usleep(1000000);
        for(lapCount=1;lapCount<=LapMax;lapCount++)
        {
            for(int i =0;i<racetrackSize;i++)
            {
                RaceTrack->addAllCars(cars,i);
                RaceTrack->makeAccept(raceVisitor,i);
                RaceTrack->removeAllCars(cars,i);
            }
            cout<<"LAP: "+to_string(lapCount)+" COMPLETED!\n";
            printLeaderBoard();
            usleep(1000000);

        }
        stopRace();

    }
    /**
     * announcs when the race is finished and prints the final leaderboard
     */
    virtual void stopRace()
    {
        cout<<"THE RACE IS FINISHED!\nHere is the Final Results!\n";
        printLeaderBoard();

    }
    /**
     * pauses the race
     * @param numComponent
     */
    virtual void pauseRace(int numComponent)
    {
        cout<<"Race is now Paused\n";
    }
    /**
     * resumes the race according to where it left
     * @param numComponent
     */
    virtual void resumeRace(int numComponent)
    {
        cout<<"Race will now continue\n";

        for(int i =numComponent;i<racetrackSize;i++)
        {
            RaceTrack->addAllCars(cars,i);
            RaceTrack->makeAccept(raceVisitor,i);
            RaceTrack->removeAllCars(cars,i);
        }
        cout<<"LAP: "+to_string(lapCount)+" COMPLETED!\n";
        printLeaderBoard();
        usleep(1000000);
        lapCount++;


        for(lapCount=lapCount;lapCount<=LapMax;lapCount++)
        {
            for(int i =0;i<racetrackSize;i++)
            {
                RaceTrack->addAllCars(cars,i);
                RaceTrack->makeAccept(raceVisitor,i);
                RaceTrack->removeAllCars(cars,i);
            }
            cout<<"LAP: "+to_string(lapCount)+" COMPLETED!\n";
            printLeaderBoard();
            usleep(1000000);

        }
        stopRace();
    }
    /**
     * prints the cars in order according to track times
     */
    virtual void printLeaderBoard()
    {
        string stars="******************************************\n";
        int carIDs [cars.size()];
        int carTimes[cars.size()];
        int time;
        int id;
        for (int i=0; i<cars.size(); i++)
        {
            time=cars[i]->getTrackTime();
            id = cars[i]->getCarID();
            carIDs[i]=id;
            carTimes[i]=time;
        }
        int n=cars.size();
        int i, j;
        for (i = 0; i < n-1; i++)
        {
            // Last i elements are already in place
            for (j = 0; j < n-i-1; j++)
                if (carTimes[j] > carTimes[j+1])
                {
                    int temp;
                    temp= carTimes[j+1];
                    carTimes[j+1]=carTimes[j];
                    carTimes[j]=temp;
                    temp= carIDs[j+1];
                    carIDs[j+1]=carIDs[j];
                    carIDs[j]=temp;
                }
        }

        string output="LEADER BOARD\n";
        output+=stars;

        for(int k=0;k<cars.size();k++)
        {
            for(int h=0;h<cars.size();h++)
            {
                if(carTimes[k]==cars[h]->getTrackTime()&&carIDs[k]==cars[h]->getCarID())
                {
                    output+=getCarInfo(cars[h]);
                }
            }
        }
        output+=stars;
        cout<<output;
    }

    //used in printLeaderBoard
    /**
     * gets the car info and returns a string
     * @param _car
     * @return
     */
    string getCarInfo(Car*_car)
    {
        string r= "Car - "+to_string(_car->getCarID())+" with time: "+to_string(_car->getTrackTime())+" Seconds\n";
        return r;
    }
    /**
     *add cars to the race manager
     * @param _cars
     */
    virtual void addCars(vector<Car*> _cars)
    {
        cars.clear();
        if(_cars.size()==0)
        {
            cout<<"No cars added to the track\n";
            return;
        }
        for (int i=0; i<_cars.size(); i++)
            cars.push_back(_cars[i]);
        cout<<"Cars added to the raceTrack!\n";
    }
    /**
     * adds the race
     * @param raceTrackComponent
     */
    virtual void addRacetrack(RaceTrackComponent*raceTrackComponent)
    {
        RaceTrack=raceTrackComponent;
    }
    /**
     *  sets the max amount of laps
     * @param i
     */
    void setLapMax(int i){LapMax=i;};
    /**
     *  returns the max laps
     * @return
     */
    int getLapMax(){ return LapMax;};
    /**
     *  sets the lap currently on
     * @param i
     */
    void setLapCount(int i){lapCount=i;};
    /**
     *  returns the lap
     * @return
     */
    int getLap(){ return lapCount;};
private:
    /**
     *  vector of cars for the race
     */
    vector<Car*> cars;
    /**
     *  the racetrack for the cars
     */
    RaceTrackComponent* RaceTrack;
    /**
     *  the current lap
     */
    int lapCount;
    /**
     *  the max number of laps
     */
    int LapMax=1;
    /**
     *  the size of the race track
     */
    int racetrackSize;
    /**
     * the visitor that visits each track component
     */
    BigBrother* raceVisitor;
};
#endif //PROJECT_CONCRETERACEMANAGER_H
