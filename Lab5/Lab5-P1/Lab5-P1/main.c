#define NUMBER_OF_SALARIES 4

#include "P1.h"

int main() {

	double salaries[NUMBER_OF_SALARIES];
	double sumOfSalaries;
	char bracket;
	int i;
	FILE* inFile = fopen("salaries.txt", "r");

	for (i = 0; i < NUMBER_OF_SALARIES; i++) {

		salaries[i] = readDouble(inFile);
	}

	sumOfSalaries = sumNumbers(salaries, NUMBER_OF_SALARIES);

	bracket = calculateBracket(sumOfSalaries);

	displayIncomeLevel(bracket);


	return 0;
}