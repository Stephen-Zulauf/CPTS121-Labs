

#include "CalorieFunc.h"

double ConvertHeight(double feet, double inches) {

	double heightInInches;

	heightInInches = (12 * feet) + inches;

	return heightInInches;
}

double CalculateBMR(int gender, double weight, double height, double age){
	double bmr;

	switch (gender) {
	
	//Women
	//Men
	case 1:
		bmr = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
		break;
	case 2:
		bmr = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);
		break;

	default:
		bmr = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);
		break;
	}

	return bmr;

}

double CalculateCalories(int activityLevel, double bmr) {
	double calories;

	switch (activityLevel) {
	case 1:
		calories = bmr * 1.2;
	case 2:
		calories = bmr * 1.375;
	case 3:
		calories = bmr * 1.55;
	case 4:
		calories = bmr * 1.725;
	case 5:
		calories = bmr * 1.9;
	default:
		calories = bmr * 1.2;
	}

	return calories;
}