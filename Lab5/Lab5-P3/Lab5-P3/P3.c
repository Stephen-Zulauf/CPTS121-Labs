#include "P3.h"

/*gets remainder of division*/
int getRemainder(int numberOne, int numberTwo) {
	int remainder;

	remainder = abs(numberOne) % abs(numberTwo);

	return remainder;
}

/*calculates and returns the greatest common
divisor of two integer numbers*/
int greatest_common_divisor(int numberOne, int numberTwo) {
	int one = abs(numberOne);
	int two = abs(numberTwo);
	int remainder = getRemainder(numberOne, numberTwo);

	while (remainder != 0) {
		one = two;
		two = remainder;
		remainder = getRemainder(one, two);
	}

	printf("%d", two);
	return two;

}

/*print GCD to file*/
void printInt(FILE* outfile, int number) {
	fprintf(outfile, "The GCD is: %d", number);
}