
/*
* Stephen Zulauf
* Lab 4
* cpts 121
* 
Write a program that outputs the equation of the perpendicular bisector of the line
segment between two points.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void){

	double pointOneX,
		pointOneY,
		pointTwoX,
		pointTwoY;

	printf("|Perpendicular Bisector Calculator|\n");

	/*Prompt the user for the coordinates of the two points*/
	printf("Please enter two points (x1,y1-x2,y2)\n");
	scanf("%lf,%lf-%lf,%lf", &pointOneX, &pointOneY, &pointTwoX, &pointTwoY);


	/*Compute the slope of the line between those two points*/
	printf("The slope between the two points is: %lf \n", ((pointTwoY - pointOneY) / (pointTwoX - pointOneX)));

	/*Compute the coordinates of the midpoint of the line segment between the
	two points by averaging the two x coordinates and the two y coordinates */
	printf("The midpoint is %lf,%lf\n", ((pointTwoY + pointOneY) / 2), ((pointTwoX + pointOneX) / 2));

	/*Compute the slope of the perpendicular bisector by taking the negative
	reciprocal of the slope of the line segment*/
	double biSlope = -((pointTwoX - pointOneX) / (pointTwoY - pointOneY));

	printf("The slope of the perpendicular bisector is %lf\n", biSlope);

	/*Compute the y intercept of the perpendicular bisector*/
	double biYIntercept = ((pointTwoY + pointOneY) / 2) - -((pointTwoX - pointOneX) / (pointTwoY - pointOneY)) + ((pointTwoX + pointOneX) / 2);

	printf("the y intercept of the perpendicular bisector is: %lf\n",biYIntercept) ;

	/*Output the labels of the original two points, and output in y = mx + b format
	the equation of the perpendicular bisector*/
	printf("the original points entered: %lf,%lf-%lf,%lf\n", pointOneX, pointOneY, pointTwoX, pointTwoY);
	printf("the equation for the perpindicular bisector of these point is: y = %lfx + %lf", biSlope, biYIntercept);



}