/*Stephen Zualuf
Lab 4
assignment #3
Flight Calculator

Write a program that computes the duration of a projectile's flight and its height
above the ground when it reaches the target. As part of your solution, write and call a
function that displays instructions to the program user. You will need to use the
following information to solve this problem:

Problem Constant
G 32.17 gravitational constant
Problem Inputs
double theta angle (radians) of elevation
double distance /* distance (ft) to target 
double velocity /* projectile velocity (ft/sec)
Problem Outputs
double time /* time (sec) of flight
double height /* height of impact
Relevant Formulas
time = (distance) / (velocity * cos(theta)) /* make sure to include math.h to
use cos ( ) and sin ( )
height = velocity * sin(theta) * time - ((G * time ^ 2) / 2)
Define functions where appropriate.Recall, building a structure chart is a good way of
determining appropriate functions for a problem.Your TA should help guide you with
this
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

#include "labThreeGForce.h"

int main() {

	double angle;
	double distance;
	double velocity;
	double time;
	double height;

	/* get angle (radians) of elevation from user */
	angle = getAngle();

	/* get distance (ft) to target from user */
	distance = getdistance();

	/* get projectile velocity from user (ft/sec) */
	velocity = getVelocity();

	/* calculate time (sec) of flight */
	time = calcTime(angle, distance, velocity);

	/* calculate height of impact */
	height = calcHeight(angle, velocity, time);

	/* display results */
	displayResults(time, height);
}