#include "interstellarGame.h"
#include "printOutForFunctions.h"

void main() {

    int TPlanet1=0,TPlanet2=0,TPlanet3=0,TPlanet4=0,TPlanet5=0,TPlanet6=0,TPlanet7=0,TPlanet8=0;
    int totalTimeHour=0,decision,selectedPlanet,fuel=AMOUNTOFFUEL;
    int location,goPlanet=0,totalDistance =0,distance;
    game situationGame=continueGame;

    dis planetDis[9] = {earth,p1,p2,p3,p4,p5,p6,p7,p8};

    decision = welcomeInfo();
    menuDecision(decision);
    selectedPlanet = habitablePlanet();

    while (fuel>0 && situationGame != finishGameBecauseFuel){
        int planetSecond[8] = {TPlanet1,TPlanet2,TPlanet3,TPlanet4,TPlanet5,TPlanet6,TPlanet7,TPlanet8};

        location = goPlanet;

        printFuel(fuel);

        goPlanet = planetList(planetSecond);

        distance = betweenDistance(planetDis[location],planetDis[goPlanet]);

        journeyInterStellar(goPlanet,location);

        if(fuel-distance>0) {

            inception(goPlanet);
            planetInfo(goPlanet);

            TPlanet1 = planet1(TPlanet1,goPlanet);
            TPlanet2 = planet2(TPlanet2,goPlanet);
            TPlanet3 = planet3(TPlanet3,goPlanet);
            TPlanet4 = planet4(TPlanet4,goPlanet);
            TPlanet5 = planet5(TPlanet5,goPlanet);
            TPlanet6 = planet6(TPlanet6,goPlanet);
            TPlanet7 = planet7(TPlanet7,goPlanet);
            TPlanet8 = planet8(TPlanet8,goPlanet);
        }

        int planetSeconds[8] = {TPlanet1,TPlanet2,TPlanet3,TPlanet4,TPlanet5,TPlanet6,TPlanet7,TPlanet8};

        totalTimeHour = totalTime(goPlanet,planetSeconds,totalTimeHour);

        totalDistance = calculateDistance(distance,totalDistance);

        fuel = calculateFuel(fuel,distance);

        situationGame = findHabitablePlanet (totalTimeHour,selectedPlanet,goPlanet,fuel);

        if(situationGame==finishGameBecauseFind) {

            journeyChoose(totalTimeHour,totalDistance,fuel);

            break;
        }
    }

}
