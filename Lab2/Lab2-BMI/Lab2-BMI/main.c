/*
Stephen Zulauf
CPTS121
Lab 4

Write a program to calculate your body mass index (BMI). The BMI is a
measurement that uses your height and weight to determine if you are
underweight, a healthy weight, or overweight. Your program is required to
prompt the user for weight in pounds and height in feet. The height must then
be converted to inches (recall: 1 foot = 12 inches). Once the BMI has been
calculated display the resultant BMI value. Use the equation below to calculate
the BMI.
BMI = ( (weight in pounds) / (height in inches)^2 ) * 703
Note: a BMI of less than 18 indicates you are underweight, >= 18 and < 25
means you are at a healthy weight, >= 25 and < 30 means you are
overweight, and > 30 indicates obesity. You do NOT need to classify the BMI
value in the program. This would require "if" statements, which you have
not learned yet!
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	double inpHeightFeet;
	double inpHeightInches;
	double weight;

	printf("|BMI Calculator|\n");
	printf("Please enter your height in feet-inches (e.g. 6ft2):\n");
	scanf("%lfft%lf", &inpHeightFeet, &inpHeightInches);

	printf("Please enter your weight in lb:\n");
	scanf("%lf", &weight);

	double inches = ((inpHeightFeet * 12) + inpHeightInches);

	double bmi = ((weight) / (inches * inches) * 703);

	printf("Your BMI value is: %lf\n", bmi);
	if (bmi < 18) {
		printf("This BMI value indicates you are underweight\n");
	}
	else if (bmi < 25) {
		printf("Your BMI value indicates you're at a healthy weight\n");
	}
	else if (bmi < 30) {
		printf("Your BMI value indicates you are overweight\n");
	}
	else {
		printf("Your BMI value indicates you are obese\n");
	}


	return 0;
}