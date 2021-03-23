//
// Created by ibrah on 1/6/2021.
//

#ifndef INTERSTELLAR_GAME_INTERSTELLARGAME_H
#define INTERSTELLAR_GAME_INTERSTELLARGAME_H

#include <stdio.h>

enum booleanValue{
    false,true
};

typedef enum booleanValue bool;

enum finishOrContinue {
    finishGameBecauseFuel,finishGameBecauseFind,continueGame
};

typedef enum finishOrContinue game;


enum rollGame{
    FIRST=1,SECOND,THIRD
};

typedef enum rollGame roll;

enum winConditions {
    DRAW,WINCOMPUTER,WINUSER
};

typedef enum winConditions win;

enum rpsSituation{
    ROCK,PAPER,SCISSOR
};

typedef enum rpsSituation rps;

enum timeInPlanet {
    PLANET1=60000,PLANET2=20000,PLANET3=1200000,PLANET4=35000,PLANET5=100000,PLANET6=2700000,PLANET7=13500,PLANET8=90000
};

typedef enum timeInPlanet planetTimes;

enum distance {
    earth=0,p1=30,p2=210,p3=270,p4=720,p5=610,p6=580,p7=790,p8=430
};

typedef enum distance dis;

enum gameMacro {
    SIZESS=9,CURRENTYEAR=2015,AMOUNTOFFUEL=3500
};

typedef enum gameMacro size;

int welcomeInfo();
void menuDecision(int decision);
int habitablePlanet();

void printFuel(int fuel);
int planetList(int planetNum[8]);
int betweenDistance(int firstPlanet1,int secondPlanet2);
void journeyInterStellar(int goPlanet,int location);


void inception(int planetN);
void planetInfo(int planetNumber);

int totalTime(int goPlanet,int planetSeconds[8],int totalTime);
int calculateDistance(int distance,int totalDistance);
int calculateFuel(int fuel, int distance);

game findHabitablePlanet (int totalTimeHour,int selectedPlanet,int planetNumber,int fuel);

game journeyChoose(int totalTimeHour,int totalDistance,int fuel);


int planet1 (int timeInPlanet1,int goPlanet);
int planet2 (int timeInPlanet2,int goPlanet);
int planet3 (int timeInPlanet3,int goPlanet);
int planet4 (int timeInPlanet4,int goPlanet);
int planet5 (int timeInPlanet5,int goPlanet);
int planet6 (int timeInPlanet6,int goPlanet);
int planet7 (int timeInPlanet7,int goPlanet);
int planet8 (int timeInPlanet8,int goPlanet);



#endif
