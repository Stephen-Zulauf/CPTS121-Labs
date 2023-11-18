#pragma once

/*Begin user declerations*/

/* get angle (radians) of elevation from user */
double getAngle(); 

/* get distance (ft) to target from user */
double getdistance();

/* get projectile velocity from user (ft/sec) */
double getVelocity();

/* calculate time (sec) of flight */
double calcTime(double angle, double distance, double velocity);

/* calculate height of impact */
double calcHeight(double angle, double velocity, double time );

/* display results */
void displayResults(double time, double height);