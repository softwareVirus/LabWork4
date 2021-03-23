//
// Created by ibrah on 1/8/2021.
//

#include "printOutForFunctions.h"
#include <windows.h>

void slow(){
    Sleep(50);
}

void slowForStarting(){
    Sleep(1000);
}

void slowForFinishTheProgram() {
    Sleep(6000);
}

void clear() {
    system("CLS");
}

void planetNumber(int planetN) {
    printf(" %d",planetN);
}

void slowForReturnConsole() {
    Sleep(5000);
}

void returnConsole () {
    printf("You will return the JOURNEY CONSOLE");
    slowForReturnConsole();
}

void invalidValue() {
    printf("You entered invalid value! \n\n");
}

//*******************************************************************

int welcomeInfo() {
    int decision;
    system("color 70");
    printf("\n\n\t\t\t\t\t WELCOME TRAVELER \n");
    printf("  You are about to go on a long journey, chosen by MUMUCA to save the future of humanity.\n");
    printf("  For this journey you have fuel that you can travel up to 3500 light years.\n");
    printf("  To travel, simply enter the number of the planet you want to go to.\n");
    printf("  To check if the planet is habitable, you must first win the games set by the computer.\n");
    printf("\n\n\n         MENU");
    printf("\n 1-START THE JOURNEY\n 2-LEAVE THE DUTY\n");
    printf(" What do you want to do? : ");
    scanf("%d",&decision);
    printf("\n\n\n\n\n");

    return decision;
}

//***********************************************************
void startGame() {
    clear();
    for(int i= 5; i>=0; i--) {
        system("color 47");

        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   %d",i);
        slowForStarting();
        clear();
    }
}

void menuDecision(int decision) {
    if (decision == 1) {
        printf("The game will start in 5 seconds");
        Sleep(3000);
        startGame();
    }
}
//******************************************************

void printFuel(int fuel) {
    clear();
    printf("\nYour fuel : %d\n",fuel);
}

//*******************************************************
int planetList(int planetNum[8]) {
    int number=1,ranking=1,selected;

    printf("\t\t\t\tJOURNEY CONSOLE \n");

    for (int i = 0; i<8; i++) {
        printf("%d - PLANET %d",ranking,number);
        if(planetNum[i]==0) {
            printf("\n");
        } else {
                printf("|You visited this planet| \n");
        }
        number++;
        ranking++;
    }
    while (true) {
        printf("Enter number of the planet you will visit : ");
        scanf("%d",&selected);

        if(selected>=1 && selected <=8) {
            break;
        } else {
            printf("You entered invalid value\n\n");
        }
    }
    return selected;
}

//**************************************************************
void printFinishFuel() {
    char sentence[25] = "You have been out of fuel";
    printf("\n\n\n\n\n\n\n\n\n\t\t\t                  ");
    for(int i = 0; i<25; i++) {
        printf("%c",sentence[i]);
        slow();
    }
}

//*********************************************
void planetColor(int planetN) {
    if(planetN == 1) {
        system("color 67");
    } else if (planetN == 2) {
        system("color 17");
    } else if (planetN == 3) {
        system("color 47");
    } else if (planetN == 4) {
        system("color 07");
    } else if (planetN == 5) {
        system("color C7");
    } else if (planetN == 6) {
        system("color 87");
    } else if (planetN == 7) {
        system("color 97");
    } else if (planetN == 8) {
        system("color A0");
    }
}

void inception(int planetN){
    if(planetN>0) {
        int answer;
        char sentence1[18] = "Welcome to Planet";
        clear();
        planetColor(planetN);

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t");
        for(int i=0; i<18; i++) {
            printf("%c",sentence1[i]);
            slow();
        }
        planetNumber(planetN);
        slow();
        printf("\n\n\t\t\t\t           Enter 2 for begin the game : ");
        scanf("%d",&answer);
        if(answer==2) {
            clear();
        } else {
            printf("\n\n\t\t\t\t           You entered invalid value!");
            do {
                printf("\n\n\t\t\t\t           Enter 2 for begin the game : ");
                scanf("%d",&answer);
            } while (answer != 2);
            clear();
        }
    }
}
//**************************************************************************************


void planetInfo(int planetNumber) {
    if (planetNumber>0) {
        printf("\t\t\t\t WELCOME TO PLANET %d\n\n",planetNumber);
        if(planetNumber == 1) {
            printf("Guess a number game: you select a number between 1 and 10 until he find the selected number from computer at random. \n");
            printf("Also computer helps you by saying whether selected number is higher or lower. \nEach guess will be counted as one hour in that planet.\n\n");
        } else if(planetNumber == 2) {
            printf("Evil Guess a number game: you select a number but this time, it is between 1 and 20 and computer is evil.\n");
            printf("At a chance of fifty percent computer helps you wrongly. Each guess will be counted as one hour in that planet.\n\n");
        } else if(planetNumber == 3) {
            printf("Cumulative Addition: Computer selects a number between 7 and 23 at random.\nUser will only add 2, 3 or 5 numbers to reach");
            printf("that number.\nIf you pass the selected number computer will select another number and game will continue.\nIf you reach the selected number, ");
            printf("inputs will be counted as one hour in that plane\n\n");
        } else if(planetNumber == 4) {
            printf("Super Duper Master Dice Roll Championship: you will play dice roll with computer.\nYou and computer will roll the dice for 1 time");
            printf("and the highest value wins the game.\nComputer will challenge you with Best of 3 dice roll match. \n");
            printf("\nThe winner of the game will be the winner of 2 out of 3 matches.\n");
            printf("Each roll of dice will be counted as one hour in that planet.\n\n");
        } else if(planetNumber == 5) {
            printf("Rock&Paper&Scissor (Roshambo): You will play Roshambo with computer.You are play 3 game(Draws does not count).\n");
            printf("If you win 2 game, you will be winner.\nIf computer win 2 game , the game will restart and continue until you win 2 game.\n");
            printf("Each move of you will be counted as one hour in that planet(Draws also counts).\n\n");
        } else if(planetNumber == 6) {
            printf("Binary-Decimal / Decimal Binary . Between 0 and 255 a number will be decided randomly by computer.\nThen asks to you 3 times ");
            printf("a random digit of binary value of the that number.\nIf you enter wrong number for a digit program will select another random ");
            printf("number and ask random times random digit.\nEvery time you enter input will be counted as one hour in that planet. \n\n");
        } else if(planetNumber == 7) {
            printf("Fast Multiplier : Computer generates 2 number between 10 and 30 and asks to you; multiplication of those 2 numbers.");
            printf("\nA timer starts when the question is asked and it will stop when the user answers the question.");
            printf("\nIf the answer is false program asks another multiplication question. \n");
            printf("If the answer is true , program will take the duration as seconds and\nconverts every second passed to hour in that planet.\n\n");
        }
    }
}

int minDistance (int pD[SIZESS],int controlNumber) {
    int pD_Copy[SIZESS];
    for(int i=0; i<SIZESS-1; i++) {
        if(pD[i]>pD[i+1]) {
            pD_Copy[i] = pD[i+1];
            pD[i+1] = pD[i];
            pD[i] = pD_Copy[i];
        }
    }
    return controlNumber+1;
}

void printPlanet (int pD[SIZESS],int pN) {
    if(pD[pN]==earth) {
        printf("earth    ");
    }else if(pD[pN] == p1) {
        printf("planet 1   ");
    }else if(pD[pN]==p2) {
        printf("planet 2   ");
    }else if(pD[pN]==p3) {
        printf("planet 3   ");
    }else if(pD[pN]==p4) {
        printf("planet 4   ");
    }else if(pD[pN]==p5) {
        printf("planet 5   ");
    }else if(pD[pN]==p6) {
        printf("planet 6   ");
    }else if(pD[pN]==p7) {
        printf("planet 7   ");
    }else if(pD[pN]==p8) {
        printf("planet 8   ");
    }
}

void newRanking(int pD[SIZESS]) {
    int controlNumber = 0;
    while (controlNumber != SIZESS) {
        controlNumber = minDistance(pD,controlNumber);
    }
}


void journeyInterStellar(int goPlanet,int location) {
    clear();
    char starAndPlanet[] = {'*','O'};
    int pD[SIZESS] = {earth,p1,p2,p3,p4,p5,p6,p7,p8};
    int pD_Copy[SIZESS];
    for(int i = 0; i<SIZESS;i++) {
        pD_Copy[i]=pD[i];
    }

    newRanking(pD);

    for (int i = 0; i<SIZESS; i++) {
        if(pD_Copy[goPlanet] == pD[i]) {
            goPlanet = i;
            for(int j = 0; j<SIZESS; j++) {
                if(pD_Copy[location] == pD[j]) {
                    location = j;
                    break;
                }
            }
            break;
        }
    }

    printf("\n\n\n\n\n\n\t\t\t\t\t\t      JOURNEY MAP\n\n\n\n\n\n\t  ");
    if(goPlanet>location){
        for(int j=0; j<SIZESS; j++) {
            printPlanet(pD,j);
        }
    } else {
        for(int j=SIZESS-1; j>=0; j--) {
            printPlanet(pD,j);
        }
    }


    printf("\n\n             ");

    for(int k=11; k<100; k++) {
        if(k%11!=0) {
            printf("%c",starAndPlanet[0]);
        } else {
            printf("%c",starAndPlanet[1]);
        }
    }
    printf("\n");
    printf("\n\n             ");
    if(goPlanet > location) {
        for(int i=1;i<100;i++) {
            if(i == goPlanet*11+1) {
                printf(">");
                slow();
                break;
            } else if (i>=location*11+2 && i<= goPlanet*11+1){
                printf("-");
                slow();
            } else {
                printf(" ");
            }
        }
    } else {
        for(int i=0;i<90;i++) {
            if(i == 88-(goPlanet*11)) {
                printf(">");
                slow();
                break;
            } else if (i>=89-(location*11) && i<= 87-(goPlanet*11)){
                printf("-");
                slow();
            } else {
                printf(" ");
            }
        }
    }
    slowForReturnConsole();
}

//*********************************************************************