/*
Stephen Zulauf
Lab 4
Assignment 4

Write a Calorie Calculator program to determine what a person's caloric intake
should be for a 24-hour span. The program must make a decision about caloric
intake, to maintain current body weight, based on gender, age, weight, and
height, and activity level.

The Program must first compute the Basal Metabolic Rate (BMR). The BMR
formula is the following:
Women: BMR = 655 + (4.35 * weight in pounds) + (4.7 * height in inches) - (4.7
* age in years)
Men: BMR = 66 + (6.23 * weight in pounds) + (12.7 * height in inches) - (6.8 *
age in years)

To determine total daily calorie needs, your program must apply the following
guidelines:
1. Sedentary (little to no exercise): Calories = BMR * 1.2
2. Low activity: Calories = BMR * 1.375
3. Moderate activity: Calories = BMR * 1.55
4. High activity: Calories = BMR * 1.725
5. Extra activity: Calories = BMR * 1.9

Also, read age, gender, weight, and height
values from a file.

*/

#include "CalorieFunc.h"

int main() {
	double age;
	int gender;
	double weight;
	double feet;
	double inches;
	double heightInInches;
	int activityLevel;
	double BMR;
	double calorieNeeds;


	/* Scanf Implementation
	printf("please enter your age. \n");
	scanf("%lf", &age);

	printf("please enter an option for gender:\n");
	printf("[1] Female \n");
	printf("[2] Other \n");
	printf("[3] Male \n");
	scanf("%d", &gender);

	printf("please enter your current weight in pounds:\n");
	scanf("%lf", &weight);

	printf("please enter your height (e.g. 6ft4)\n");
	scanf("%lfft%lf", &feet, &inches);

	heightInInches = ConvertHeight(feet, inches);

	printf("How would you describe your activity level?\n");
	printf("[1] Sedentary (little to no exercise)\n");
	printf("[2] Low activity\n");
	printf("[3] Moderate activity\n");
	printf("[4] High activity\n");
	printf("[5] Extra activity\n");
	scanf("%d", &activityLevel);

	*/

	/*File read implementation*/
	FILE* inFile = fopen("bmr.txt", "r");

	fscanf(inFile, "Age: %lf\n", &age);
	fscanf(inFile, "Gender: %d\n", &gender);
	fscanf(inFile, "Weight: %lf\n", &weight);
	fscanf(inFile, "Height: %lfft%lf\n", &feet, &inches);
	fscanf(inFile, "Activity level: %d\n", &activityLevel);

	//begin calculations <(0vo)> conmputing

	heightInInches = ConvertHeight(feet, inches);

	//gender calc selection
	if (gender == 2) {
		printf("which BMR Scale would you like to use for calculation?\n");
		printf("[1] Women\n");
		printf("BMR = 655 + (4.35 * weight in pounds) + (4.7 * height in inches) - (4.7 * age in years)\n");
		printf("[2] Men\n");
		printf("BMR = 66 + (6.23 * weight in pounds) + (12.7 * height in inches) - (6.8 * age in years)\n");
		scanf("%d", &gender);
		printf("Thank you!\n");
	}

	//calc bmr
	BMR = CalculateBMR(gender, weight, heightInInches, age);

	//calc total caloric intake
	calorieNeeds = CalculateCalories(activityLevel, BMR);

	printf("Your coloric needs for a 24 hour period would be:\n");
	printf("%lf calories\n", calorieNeeds);



}