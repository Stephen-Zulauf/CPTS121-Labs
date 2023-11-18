/*
Stephen Zulauf
Lab 4
Assignment #3

Write a program to calculate your body mass index (BMI). The BMI is a
measurement that uses your height and weight to determine if you are
underweight, a healthy weight, or overweight. Your program is required to
prompt the user for weight in pounds and height in feet. The height must then
be converted to inches (recall: 1 foot = 12 inches). Once the BMI has been
calculated display the resultant BMI value. Use the equation below to calculate
the BMI.
BMI = ((weight in pounds) / (height in inches)^2 ) * 703
Note: a BMI of less than 18 indicates you are underweight, >= 18 and < 25
means you are at a healthy weight, >= 25 and < 30 means you are
overweight, and > 30 indicates obesity. You do NOT need to classify the BMI
value in the program. This would require "if" statements, which you have
not learned yet!*/


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

#include "labThree.h"

int main() {

	double weight;
	double height;
	double bmi;

	//get weight
	weight = get_weight();

	//get height
	height = get_height();

	//calc bmi
	bmi = calculate_bmi(weight, height);

	//display bmi
	display_bmi(bmi);
}
