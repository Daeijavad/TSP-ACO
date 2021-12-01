#include <iostream>
#include <cstdlib>

#include <cmath>
#include <limits>
#include <climits>

#include "ACO.h"

#define ITERATIONS		(int) 30

#define NUMBEROFANTS	(int) 100
#define NUMBEROFCITIES	(int) 29

#define ALPHA			(double) 0.5
#define BETA			(double) 10
#define Q				(double) 80
#define RO				(double) 0.2
// Maximum pheromone random number.
#define TAUMAX			(int) 2

#define INITIALCITY		(int) 0

int main() {

	ACO *ANTS = new ACO(NUMBEROFANTS, NUMBEROFCITIES,
		ALPHA, BETA, Q, RO, TAUMAX,
		INITIALCITY);

	ANTS->init();


	for (int i = 0; i < NUMBEROFCITIES; i++)
		for (int j = i; j < NUMBEROFCITIES; j++)
			ANTS->connectCITIES(i, j);

	ANTS->setCITYPOSITION(0, 1150, 1760);
	ANTS->setCITYPOSITION(1, 630, 1660);
	ANTS->setCITYPOSITION(2, 40, 2090);
	ANTS->setCITYPOSITION(3, 750, 1100);
	ANTS->setCITYPOSITION(4, 750, 2030);
	ANTS->setCITYPOSITION(5, 1030, 2070);
	ANTS->setCITYPOSITION(6, 1650, 650);
	ANTS->setCITYPOSITION(7, 1490, 1630);
	ANTS->setCITYPOSITION(8, 790, 2260);
	ANTS->setCITYPOSITION(9, 710, 1310);
	ANTS->setCITYPOSITION(10, 840, 550);
	ANTS->setCITYPOSITION(11, 1170, 2300);
	ANTS->setCITYPOSITION(12, 970, 1340);
	ANTS->setCITYPOSITION(13, 510, 700);
	ANTS->setCITYPOSITION(14, 750, 900);
	ANTS->setCITYPOSITION(15, 1280, 1200);
	ANTS->setCITYPOSITION(16, 230, 590);
	ANTS->setCITYPOSITION(17, 460, 860);
	ANTS->setCITYPOSITION(18, 1040, 950);
	ANTS->setCITYPOSITION(19, 590, 1390);
	ANTS->setCITYPOSITION(20, 830, 1770);
	ANTS->setCITYPOSITION(21, 490, 500);
	ANTS->setCITYPOSITION(22, 1840, 1240);
	ANTS->setCITYPOSITION(23, 1260, 1500);
	ANTS->setCITYPOSITION(24, 1280, 790);
	ANTS->setCITYPOSITION(25, 490, 2130);
	ANTS->setCITYPOSITION(26, 1460, 1420);
	ANTS->setCITYPOSITION(27, 1260, 1910);
	ANTS->setCITYPOSITION(28, 360, 1980);

	ANTS->printGRAPH();

	ANTS->printPHEROMONES();

	ANTS->optimize(ITERATIONS);

	ANTS->printRESULTS();
	system("pause");
	return 0;
}
