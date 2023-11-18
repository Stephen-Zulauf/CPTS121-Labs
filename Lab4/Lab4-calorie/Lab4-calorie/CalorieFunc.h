#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

double ConvertHeight(double feet, double inches);

/*
The Program must first compute the Basal Metabolic Rate (BMR). The BMR
formula is the following:
Women: BMR = 655 + (4.35 * weight in pounds) + (4.7 * height in inches) - (4.7
* age in years)
Men: BMR = 66 + (6.23 * weight in pounds) + (12.7 * height in inches) - (6.8 *
age in years)
*/

double CalculateBMR(int gender, double weight, double height, double age);

/*
To determine total daily calorie needs, your program must apply the following
guidelines:
1. Sedentary (little to no exercise): Calories = BMR * 1.2
2. Low activity: Calories = BMR * 1.375
3. Moderate activity: Calories = BMR * 1.55
4. High activity: Calories = BMR * 1.725
5. Extra activity: Calories = BMR * 1.9
*/
double CalculateCalories(int activityLevel, double bmr);