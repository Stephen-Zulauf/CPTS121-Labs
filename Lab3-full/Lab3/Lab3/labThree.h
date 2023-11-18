#pragma once

//get weight
double get_weight(void);

//get user height
double get_height(void);

//convert feet to inches
int convert_feet_to_inches(int feet, int inches);

//evaluates the BMI based on weight in pounds and height in inches, and
//returns the BMI – call convert_feet_to_inches()
double calculate_bmi(double weight_in_pounds, double height_in_inches);

// display the resultant BMI value to the
//tenths place
void display_bmi(double bmi);