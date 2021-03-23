//
// Created by ibrah on 1/7/2021.
//

#include "printOutForFunctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initialRandom() {
    srand(time(NULL));
}


int question (int digitNumber) {
    int randomDigit;
    initialRandom();
    randomDigit = rand()%digitNumber+1;
    printf("What is the digit %d : ",randomDigit);
    return randomDigit;
}

rps randomRps(){
    rps move;
    int randomMove=rand()%3;
    move=randomMove;

    if (move == ROCK) {
        return ROCK;
    } else {
        if (move == PAPER) {
            return PAPER;
        } else {
            return SCISSOR;
        }
    }
}

rps move (int number) {
    if (number == 0){
        return ROCK;
    } else {
        if (number == 1) {
            return PAPER;
        } else{
            return SCISSOR;
        }
    }
}

int scoreComputer(win gameResult,int computerScore)
{
    if (gameResult == WINCOMPUTER) {
        computerScore = computerScore+1;
        printf("\ncomputer: %d    ",computerScore);
        return computerScore;
    } else {
        printf("\ncomputer: %d    ",computerScore);
        return computerScore;
    }
}

int scoreUser(win gameResult,int userScore)
{
    if (gameResult == WINUSER) {
        userScore = userScore+1;
        printf("user: %d    \n",userScore);
        return userScore;
    } else {
        printf("user: %d    \n",userScore);
        return userScore;
    }
}

win gameRound(rps computerMove,rps userMove) {
    rps winConditions[] ={SCISSOR,ROCK,PAPER};

    if (computerMove == userMove) {
        return DRAW;
    } else {
        if (winConditions[computerMove] == userMove) {
            return WINCOMPUTER;
        } else {
            return WINUSER;
        }
    }
}



void announceWinRPS(win gameResult) {
    if (gameResult == DRAW) {
        printf("Draw !\n");
    } else if (gameResult == WINCOMPUTER) {
        printf("Computer win!\n");
    } else if (gameResult == WINUSER) {
        printf("User win!\n");
    } else {
        printf("Undefined gameResult value : %d \n", gameResult);
    }
}

void printUserMove(rps userMove){
    if(userMove == ROCK) {
        printf("User move : ROCK  ");
    } else {
        if (userMove == PAPER) {
            printf("User move : PAPER  ");
        } else {
            printf("User move : SCISSOR ");
        }
    }
}

void printComputerMove(rps computerMove) {
    if (computerMove == ROCK) {
        printf("Computer move : ROCK \n");
    } else {
        if (computerMove == PAPER) {
            printf("Computer move : PAPER  \n");
        } else {
            printf("Computer move : SCISSOR \n");
        }
    }
}

void winnerTotalRps(int roundNumber,int computerScore,int userScore){
    if (computerScore==2) {
        printf("Computer win the match total roshambo is %d\n\n",roundNumber);
    } else if (userScore == 2) {
        printf("User win the match total roshambo is %d\n\n",roundNumber);
    }
}

void winnerTotalDiceRoll(int roundNumber,int computerScore,int userScore) {
    if(computerScore == 2) {
        printf("Computer win the match total dice roll is %d\n\n",roundNumber);
    } else if (userScore == 2) {
        printf("User win the match total dice roll is %d\n\n",roundNumber);
    }
}

void announceWinDiceROLL (roll winRound,int diceRollComputer,int diceRollUser) {

    if (diceRollComputer > diceRollUser){
        if (winRound == FIRST) {
            printf("User rolled %d computer rolled %d computer won first game\n",diceRollUser,diceRollComputer);
        } else if (winRound == SECOND) {
            printf("User rolled %d computer rolled %d computer won second game\n", diceRollUser, diceRollComputer);
        } else if (winRound == THIRD) {
            printf("User rolled %d computer rolled %d computer won third game\n",diceRollUser,diceRollComputer);
        }
    }
    if (diceRollComputer < diceRollUser){
        if (winRound == FIRST) {
            printf("User rolled %d computer rolled %d user won first game\n",diceRollUser,diceRollComputer);
        } else if (winRound == SECOND) {
            printf("User rolled %d computer rolled %d user won second game\n", diceRollUser, diceRollComputer);
        } else if (winRound == THIRD) {
            printf("User rolled %d computer rolled %d user won third game\n",diceRollUser,diceRollComputer);
        }
    }
    if (diceRollComputer==diceRollUser) {
        printf("User rolled %d computer rolled %d draw nothing happened\n",diceRollUser,diceRollComputer);
    }
}


void printGameTable(int arr[3][3]) {
    for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++) {
            if (arr[i][j]==2) {
                if(j<2) {
                    printf("|   ");
                } else {
                    printf("|   |\n");
                }
            } else {
                if (arr[i][j]==0){
                    if (j<2) {
                        printf("| O ");
                    } else {
                        printf("| O |\n");
                    }
                } else if (arr[i][j]==1) {
                    if (j<2) {
                        printf("| X ");
                    } else {
                        printf("| X |\n");
                    }
                }
            }
        }
    }
}


bool gameControl(int arr[3][3]) {
    int arr1[9];
    int number = 0,number2=0;
    for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++) {
            arr1[number] = arr[i][j];
            number++;
        }
    }

    /*
     | x | x | x |
    */
    for(int a=0; a<7; a=a+3) {

        if (arr1[a]==arr1[a+1] && arr1[a+1]==arr1[a+2] && arr1[a]==arr1[a+2] &&(arr1[a]!=2)) {

            return true;
        }
    }
    /*
     | y |
     | y |
     | y |
     */
    for(int b=0; b<3; b=b+1){
        if (arr1[b] == arr1[b+3] && arr1[b+3]==arr1[b+6]&&arr1[b]==arr1[b+6] && arr1[b]!=2) {
            return true;
        }
    }
    /*
     | z |                        | z |
          | z |              | z |
               | z |    | z |
     */
    for (int c=0; c<3; c=c+2) {
        if(c==0) {
            if(arr1[c]==arr1[c+4]&&arr1[c+4]==arr1[c+8]&&arr1[c]==arr1[c+8]&&arr1[c]!=2) {
                return true;
            }
        } else {
            if (arr1[c]==arr1[c+2]&&arr1[c]==arr1[c+4]&&arr1[c+2]==arr1[c+4]&&arr1[c]!=2) {
                return true;
            }
        }
    }

    // draw situation X-O-X
    for (int i = 0; i<9; i++) {
        if (arr1[i] == 2) {
            break;
        } else {
            number2++;
        }
        if(number2 == 8) {
            printf("\nThe game is draw new game table will generate\n");
            for(int d = 0; d<3; d++) {
                for(int e = 0; e<3; e++) {
                    arr[d][e] = 2;
                }
            }
            printf("\n\n");
            printGameTable(arr);
            printf("\n\n");
            return false;
        }
    }

    return false;
}


void simpleTable() {

    int number=3;

    for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++) {
            if (j != 2) {
                printf("| (%d,%d) ",i,j);
            } else {
                printf("| (%d,%d) |\n",i,j);
            }
            number++;
        }
    }
}