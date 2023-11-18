#include "P1.h"

/*read double from input file*/
double readDouble(FILE* inFile) {
	double number;

	fscanf(inFile, "%lf\n", &number);

	return number;
}

/*sums array of numbers together*/
double sumNumbers(double* numbers, int number) {
	double sum = 0;
	int i;

	for (i = 0; i < number; i++) {
		sum += numbers[i];
	}

	return sum;
}

/*determines the tax bracket < $15,000 = low income; $15,000 -
$200,000 = medium income; > $200,000 = high income*/
char calculateBracket(double sumOfSalaries) {
	char incomeLevel;

	if (sumOfSalaries < 15000) {
		incomeLevel = 'L';
	}
	else if (sumOfSalaries < 200000) {
		incomeLevel = 'M';
	}
	else {
		incomeLevel = 'H';
	}

	return incomeLevel;
}

/*displays ‘l’ for low income, ‘m’ for medium income, and ‘h’ for high
income*/
void displayIncomeLevel(char incomeLevel) {

	printf("Income level is %c", incomeLevel);
}



