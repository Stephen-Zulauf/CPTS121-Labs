#ifndef LAB7_H
#define LAB7_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
InternetLite is an ISP that charges customers a flat rate of $7.99 for up to 10 hours of
connection time. Additional hours or partial hours are charged at $1.99 each. Write a
function charges () that computes the total charge for a customer based on the
number of hours of connection time used in a month. The function should also
calculate the average cost per hour of the time used, so use two output parameters
(pointers) to send back these results indirectly. Write a second function round_money
() that takes a real number as an input argument and returns as the function the value
the number rounded to two decimal places. Write a main () that takes data from an
input file and produces an output file. The input data file format is as follows:
Line 1: current month and year as two integers
Other lines: customer number (a 5-digit number) and number of hours used
*/

void task1();

void charges(double, double* totalCharge, double* averageCostPerHour);

double round_money(double);

/*After studying gross annual revenues of Broadway shows over a 20-year period, you
model the revenue as a function of time:
R(t) = 203.265 X (1.071)^t, where R is in millions of dollars and t is the years
since 1984. Create the following functions to implement this model:
revenue - calculates R given the input parameter t. R is an output parameter.
predict - predicts the year in which revenues (in millions) will first equal or
exceed the value of the input parameter. For example, predict(200) would return
1984. The year should be returned through an output parameter.
Write a main () function that calls predict () to determine when revenues will likely
exceed $1 trillion. Then create an output file that contains a table of estimated
revenues for all the year from 1984 through the year when revenues should exceed $1
trillion.*/

void task2();

/*revenue - calculates R given the input parameter t. R is an output parameter*/
void revenue(double years, double* revenue);

/*predicts the year in which revenues (in millions) will first equal or
exceed the value of the input parameter*/
void predict(double revenue, double* year);


#endif // LAB7_H
