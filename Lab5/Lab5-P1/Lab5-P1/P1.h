#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*read double from input file*/
double readDouble(FILE* inFile);

/*sums array of numbers together*/
double sumNumbers(double* numbers, int number);

/*determines the tax bracket < $15,000 = low income; $15,000 -
$200,000 = medium income; > $200,000 = high income*/
char calculateBracket(double sumOfSalaries);

/*displays ‘l’ for low income, ‘m’ for medium income, and ‘h’ for high
income*/
void displayIncomeLevel(char incomeLevel);