//
// Created by ibrah on 1/6/2021.
//

#include "printOutForFunctions.h"

int convertYear(int totalTimeHour){
    int day,month,year;

    day = totalTimeHour/ 24;
    month = day/30;
    year = month / 12;

    return year;
}

int habitablePlanet() {
    initialRandom();
    int habitablePlanetNumber = rand()%8+1;
    return habitablePlanetNumber;
}


int betweenDistance(int firstPlanet1,int secondPlanet2) {
    int distance = firstPlanet1 - secondPlanet2;
    if (distance < 0) {
        distance = -distance;
    }
    return distance;
}

int totalTime(int goPlanet,int planetSeconds[8],int totalTime) {

    int timesFactor[8] = {PLANET1,PLANET2,PLANET3,PLANET4,PLANET5,PLANET6,PLANET7,PLANET8};
    if (goPlanet>0) {
        int timesFact = timesFactor[goPlanet-1];
        int planetSec = planetSeconds[goPlanet-1];
        totalTime = (timesFact*planetSec) + totalTime ;
    }


    return totalTime;
}



int calculateDistance(int distance, int totalDistance) {
    if (distance < 0) {
        distance = -distance;
    }
    totalDistance = distance + totalDistance;
    return totalDistance;
}

int calculateFuel(int fuel,int distance) {
    fuel = fuel - distance;
    return fuel;
}

game findHabitablePlanet (int totalTimeHour,int selectedPlanet,int planetNumber,int fuel) {


    if (selectedPlanet == planetNumber ) {
        return finishGameBecauseFind;

    } else if (fuel<=0) {
        clear();
        int totalTimeYear = convertYear(totalTimeHour) + convertYear(AMOUNTOFFUEL*24);
        printFinishFuel();
        printf("\n\n                                       You spent %d year for this duty",totalTimeYear);
        printf("\n            Unfortunately, you are left alone in the endless space of space. Thank you for your courage...");
        slowForFinishTheProgram();
        return finishGameBecauseFuel;
    }

    return continueGame;

}

game journeyChoose(int totalTimeHour,int totalDistance,int fuel) {
    clear();
    int totalTimeYear = convertYear(totalTimeHour) + convertYear(totalDistance*24);
    int answer;
    printf("\n\n\n\n\n               You find the habitable planet. But in earth everyone is dead because its %d for earth.",totalTimeYear+CURRENTYEAR);
    slowForFinishTheProgram();
    if (fuel >= AMOUNTOFFUEL/2) {

        printf("\n          You have enough fuel. If you want to go back to the world you can enter 1 if you don't, enter 0! ");
        printf("\n\n   What is your decision ? : ");
        scanf("%d",&answer);
        if (answer == 1) {
             clear();
             printf("\n\n\n\n\n                                The route of the spaceship was directed to the earth.\n");
             printf("                         Traveler. For your courage, humanity will always be grateful to you.");
             slowForFinishTheProgram();
        } else {
            printf("\n\t\t                  Have nice cocktail with exotic outer space fruits.");
            slowForFinishTheProgram();
        }
    } else {
        clear();
        printf("\n                      But you can't go back to the world because, you don't have enough fuel. ");
        printf("\n                                Have nice cocktail with exotic outer space fruits.");
        slowForFinishTheProgram();
    }
}



int planet1 (int timeInPlanet1,int goPlanet) {
    if (goPlanet == 1) {
        int computerNumber,userNumber=0;

        initialRandom();
        computerNumber = rand()%10+1;
        while (computerNumber != userNumber) {
            printf("enter your guess : ");
            scanf("%d",&userNumber);
            if(userNumber >=1 && userNumber <=10) {
                if (userNumber<computerNumber) {
                    printf("Your number is lower than selected number\n");
                } else if (userNumber>computerNumber) {
                    printf("Your number is higher than selected number\n");
                }
            } else {
                invalidValue();
            }

            timeInPlanet1 = timeInPlanet1+1;
        }
        printf("Congratulations!\n\n");
        returnConsole();

        return timeInPlanet1;
    } else {
        return timeInPlanet1;
    }
}

int planet2(int timeInPlanet2,int goPlanet) {

    if (goPlanet == 2) {
        int guessChance,computerNumber,userNumber=0;


        initialRandom();
        computerNumber = rand()%20+1;


        while (computerNumber != userNumber) {
            guessChance = rand()%2;
            printf("enter your guess : ");
            scanf("%d",&userNumber);

            if (userNumber>=1 && userNumber <=20) {
                if (userNumber<computerNumber) {
                    if (guessChance==1) {
                        printf("Your number is lower than selected number\n");
                    } else if (guessChance==0) {
                        printf("Your number is higher than selected number\n");
                    }
                } else if (userNumber>computerNumber) {
                    if (guessChance==1) {
                        printf("Your number is higher than selected number\n");
                    } else if (guessChance==0) {
                        printf("Your number is lower than selected number\n");
                    }
                }
            } else {
                invalidValue();
            }

            timeInPlanet2 = timeInPlanet2+1;

        }

        printf("Congratulations!\n\n");
        returnConsole();

        return timeInPlanet2;
    } else {
        return timeInPlanet2;
    }
}

int planet3 (int timeInPlanet3,int goPlanet) {
    if (goPlanet == 3) {
        int computerNumber,sum = 0;
        int userInput[30];
        int i = 0;
        initialRandom();
        computerNumber = rand()%17+7;
        printf("The Selected Number : %d\n",computerNumber);
        while (sum != computerNumber) {

            scanf("%d",&userInput[i]);

            if(userInput[i] == 2 || userInput[i] == 3 || userInput[i] == 5) {
                sum = sum + userInput[i];
                i++;
                if(sum > computerNumber) {
                    computerNumber = rand()%17+7;
                    sum = 0;
                    i = 0;
                    printf("You passes the selected number. Computer will choose new number!\n");
                    printf("The Selected Number : %d\n",computerNumber);
                }
            } else {
                invalidValue();
            }

            timeInPlanet3 = timeInPlanet3+1;
        }

        printf("You reaches the selected number!\n");
        returnConsole();

        return timeInPlanet3;
    } else {
        return timeInPlanet3;
    }
}

int planet4 (int timeInPlanet4,int goPlanet) {
    if (goPlanet == 4) {
        int diceRollComputer,diceRollUser,computerScore = 0,userScore = 0,startRoll,winRound = 1;
        initialRandom();

        while (computerScore != 2 && userScore != 2) {
            printf("enter 0 for rolling dice : ");
            scanf("%d",&startRoll);
            if (startRoll == 0) {
                diceRollUser = rand()%6 + 1;
                diceRollComputer = rand()%6 + 1;
                if (diceRollComputer > diceRollUser) {
                    announceWinDiceROLL(winRound,diceRollComputer,diceRollUser);
                    winRound = winRound + 1;
                    computerScore = computerScore+1;
                } else if (diceRollComputer < diceRollUser) {
                    announceWinDiceROLL(winRound,diceRollComputer,diceRollUser);
                    winRound = winRound + 1;
                    userScore = userScore +1;
                } else if (diceRollComputer == diceRollUser) {
                    announceWinDiceROLL(0,diceRollComputer,diceRollUser);
                }
            } else {
                invalidValue();
            }
            if (computerScore==2) {
                printf("\nThe game will start again.\n");
                computerScore =0;
                userScore =0;
                winRound = 1;
            }
            timeInPlanet4 = timeInPlanet4 + 1;
        }

        winnerTotalDiceRoll(timeInPlanet4,computerScore,userScore);
        returnConsole();
        return timeInPlanet4;
    } else {
        return timeInPlanet4;
    }
}

int planet5(int timeInPlanet5,int goPlanet) {
    if (goPlanet == 5) {
        rps computerMove,userMove;
        int number,computerScore=0,userScore=0;
        initialRandom();
        while (userScore <3 && computerScore < 3){
            computerMove = randomRps();
            printf("0-ROCK\n1-PAPER\n2-SCISSOR\nenter your move :");
            scanf("%d",&number);

            if(number>=0 && number<=2) {
                userMove = move(number);
                printUserMove(userMove);
                printComputerMove(computerMove);
                win gameResult = gameRound(computerMove,userMove);
                announceWinRPS(gameResult);
                computerScore = scoreComputer(gameResult,computerScore);
                userScore = scoreUser(gameResult,userScore);
                timeInPlanet5 = timeInPlanet5 + 1;
                printf("time planet %d\n",timeInPlanet5);
            } else {
                invalidValue();
            }
            if (computerScore==2) {
                printf("\nThe game will start again.\n");
                computerScore =0;
                userScore =0;
            }

        }

        winnerTotalRps(timeInPlanet5,computerScore,userScore);
        returnConsole();

        return timeInPlanet5;
    } else {
        return timeInPlanet5;
    }
}

int planet6 (int timeInPlanet6,int goPlanet) {
    if (goPlanet == 6) {
        int number,computerNumber,x,trueAnswerNumber=0,answer,userAnswer;
        int arr[100];
        initialRandom();
        while (trueAnswerNumber != 3){
            trueAnswerNumber = 0;
            x=0;
            computerNumber = rand()%256;
            printf("Computer selected number as %d \n",computerNumber);
            number=computerNumber;
            if(number==0){
                x=1;
            } if(number>0) {
                while(number > 0){
                    number = number / 2;
                    x=x+1;
                }
            }

            for(int k=0; k<x;k++)
            {
                arr[k]=computerNumber%2;
                computerNumber=computerNumber/2;
            }


            for(int j = 0; j < 3; j++) {
                answer = question(x);
                scanf("%d",&userAnswer);
                if (userAnswer == 1 || userAnswer == 0) {
                    if (arr[answer-1] == userAnswer) {
                        printf("User enter %d Correct\n",userAnswer);
                        trueAnswerNumber=trueAnswerNumber+1;
                    } else {
                        printf("User enter %d False\n",userAnswer);
                        j=3;
                    }
                } else {
                    invalidValue();
                }

                timeInPlanet6 = timeInPlanet6+1;
                printf("time planet %d\n",timeInPlanet6);
            }
        }
        printf("User finished the quest with %d input\n",timeInPlanet6);
        returnConsole();
        return timeInPlanet6;
    } else {
        return timeInPlanet6;
    }
}

int planet7(int timeInPlanet7,int goPlanet) {
    if (goPlanet == 7) {
        double timeSpent = 0.0;
        int computerNumber1,computerNumber2,userAnswer=0;

        initialRandom();
        computerNumber1 = rand()%21+10;
        computerNumber2 = rand()%21+10;

        clock_t begin = clock();


        while (userAnswer != computerNumber1*computerNumber2) {
            printf("What is %d*%d?\n",computerNumber1,computerNumber2);
            scanf("%d",&userAnswer);
            if (userAnswer != computerNumber1*computerNumber2) {
                computerNumber1 = rand()%21+10;
                computerNumber2 = rand()%21+10;
                printf("Wrong answer! Computer will ask another question...\n");
            }
        }


        clock_t end = clock();

        timeSpent += (double)(end - begin) / CLOCKS_PER_SEC;
        timeInPlanet7 = timeSpent;

        printf("Correct you spent %d seconds for that question which is %d hours on this planet.\n", timeInPlanet7,timeInPlanet7);


        returnConsole();
        return timeInPlanet7;
    } else {
        return timeInPlanet7;
    }
}

int planet8(int timeInPlanet8,int goPlanet) {
    if (goPlanet == 8) {
        int squares[3][3];
        int number = 2;
        int computerMoveX,computerMoveY,computerMove,userMove,userMoveX,userMoveY;
        double timeSpent = 0.0;
        bool control = false;
        bool computerControl;

        for(int i = 0; i<3; i++) {
            for (int j = 0; j<3; j++) {
                squares[i][j]=number;
            }
        }
        clock_t begin = clock();
        printf("\t\t\tWelcome to X-O-X Game\n");
        printf("The game table is as you can see below. The name of square is like (x,y)\n");
        simpleTable();
        printf("If you want to make a move, simply type in the x and y values of the square where you want to place the X or O move.\n");
        printf("The will continue until you win the game. If you win the game program will take the duration as seconds and converts \nevery second passed to hour in that planet.\n");
        printf("And if you want to place the O, write 0. If you want to place the X, write 1\n\n");
        printf("enter your move : ");
        scanf("%d",&userMove);
        printf("\n");

        if(userMove == 0) {
            computerMove= 1;
        } else if (userMove == 1) {
            computerMove= 0;
        } else {
            invalidValue();
        }
        initialRandom();


        while (control==false) {
            computerControl = true;
            while (computerControl == true){
                computerMoveX = rand() % 3;
                computerMoveY = rand() % 3;
                if (squares[computerMoveX][computerMoveY] == 2 && squares[computerMoveX][computerMoveY] !=userMove) {
                    squares[computerMoveX][computerMoveY]=computerMove;
                    computerControl = false;
                }
            }

            printf("Computer Move \n");
            printf("**************\n\n");

            printGameTable(squares);

            control = gameControl(squares);



            if (control==true) {
                printf("Computer win the game\n");
                printf("\nNew game table will generate \n");
                for(int d = 0; d<3; d++) {
                    for(int e = 0; e<3; e++) {
                        squares[d][e] = 2;
                    }
                }
                printGameTable(squares);
                control = false;
            }


            printf("Choose the x of square : ");
            scanf("%d", &userMoveX);
            printf("Choose the y of square : ");
            scanf("%d", &userMoveY);
            printf("\n");
            if (squares[userMoveX][userMoveY] == 2){
                squares[userMoveX][userMoveY] = userMove;
            } else if(squares[userMoveX][userMoveY]==computerMove) {
                printf("this square is full!!\n");
            }

            control = gameControl(squares);

            if (control==true) {
                printGameTable(squares);
                printf("User win the game\n");
            }
        }
        clock_t end = clock();

        timeSpent += (double)(end - begin) / CLOCKS_PER_SEC;
        timeInPlanet8 = timeSpent;

        printf("Correct you spent %d seconds for that question which is %d hours on this planet.\n", timeInPlanet8,timeInPlanet8);


        returnConsole();
        return timeInPlanet8;
    } else {
        return timeInPlanet8;
    }
}



