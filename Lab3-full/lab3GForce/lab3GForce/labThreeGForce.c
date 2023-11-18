
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

#include "labThreeGForce.h"

/*Begin user definitions*/

/* get angle (radians) of elevation from user */
double getAngle() {

	double angle;

	printf("please enter the flight angle in radians (floating point value)\n");
	scanf("%lf", &angle);
	
	return angle;

}

/* get distance (ft) to target from user */
double getdistance() {

	double distance;

	printf("Please enter the distance to target in feet (flotaing point value)\n");
	scanf("%lf", &distance);

	return distance;
}

/* get projectile velocity from user (ft/sec) */
double getVelocity() {

	double velocity;

	printf("Please enter a value for velocity ft/s (floating point value)\n");
	scanf("%lf", &velocity);

	return velocity;

}

/* calculate time (sec) of flight */
double calcTime(double angle, double distance, double velocity) {

	double time = (distance) / (velocity * cos(angle));

	return time;
}

/* calculate height of impact */
double calcHeight(double angle, double velocity, double time) {

	double G = 32.17;
	double height = velocity * sin(angle) * time - ((G * pow(time, 2)) / 2);

	return height;
}

/* display results */
void displayResults(double time, double height) {

	printf("The time this flight takes is: %lf seconds\n", time);
	printf("The height when reaching destination is: %lf feet\n", height);

}