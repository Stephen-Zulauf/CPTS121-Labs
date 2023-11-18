

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*begin user definitions*/

//get weight
double get_weight(void) {
	double weight;
	
	printf("Please enter your weight in pounds (floating value)\n");
	scanf("%lf", &weight);

	return weight;
}

//get user height
double get_height(void) {
	int feet, inches;

	printf("Please enter your Height ex(6ft,4)\n");
	scanf("%dft,%d", &feet, &inches);

	return convert_feet_to_inches(feet, inches);
}

//convert feet to inches
int convert_feet_to_inches(int feet, int inches) {
	int totalInches = (feet * 12) + inches;

	return totalInches;

}

//evaluates the BMI based on weight in pounds and height in inches, and
//returns the BMI – call convert_feet_to_inches()
double calculate_bmi(double weight_in_pounds, double height_in_inches) {

	double bmi = ((weight_in_pounds) / ((height_in_inches)*(height_in_inches)) * 703);

	return bmi;
}

// display the resultant BMI value to the
//tenths place
void display_bmi(double bmi) {

	printf("Your BMI is: %lf \n", bmi);

	if (bmi < 18) {
		printf("This BMI value indicates you are underweight.\n");
	}
	else if (bmi < 25) {
		printf("This BMI value indicates you are at a healthy weight.\n");
	}
	else if (bmi < 30) {
		printf("This BMI value indicates you are overweight.\n");
	}
	else {
		printf("This BMI value indicates you are obese.\n");
	}
	
}