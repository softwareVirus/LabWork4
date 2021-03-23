//
// Created by ibrah on 1/7/2021.
//

#ifndef INTERSTELLARGAME_H_PRINTOUTFORFUNCTIONS_H
#define INTERSTELLARGAME_H_PRINTOUTFORFUNCTIONS_H

#include "interstellarGame.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//PLANET4 -DICE ROLL FUNCTIONS

void winnerTotalDiceRoll(int roundNumber,int computerScore,int userScore);
void announceWinDiceROLL (roll winRound,int diceRollComputer,int diceRollUser);

//Planet5 -RPS GAME FUNCTIONS

rps randomRps();
rps move (int number);
void printUserMove(rps userMove);
void printComputerMove(rps computerMove);
win gameRound(rps computerMove,rps userMove);
void announceWinRPS(win gameResult);
int scoreComputer(win gameResult,int computerScore);
int scoreUser(win gameResult,int userScore);
void winnerTotalRps(int roundNumber,int computerScore,int userScore);


//PLANET6 -BINARY DECIMAL FUNCTIONS
int question (int digitNumber);

//PLANET8 XOX GAME FUNCTIONS
void printGameTable(int arr[3][3]);
bool gameControl(int arr[3][3]);
void simpleTable();

//INTERFACE OF INTERSTELLAR GAME

void inception(int planetN);
void returnConsole ();
void slowForFinishTheProgram();
void planetInfo(int planetNumber);
void clear();
void printFinishFuel();


// INVALID VALUE PRINT

void invalidValue();

//Random generate

void initialRandom();


#endif
