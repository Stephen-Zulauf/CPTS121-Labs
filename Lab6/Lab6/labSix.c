#include "labSix.h"

/*a. Reads in each of the integer values in a
file and determines if the sum of the integers is prime.
b. Determine if the sum of the individual digits, in the sum of the integers, is
prime.*/

void task1() {

	FILE* inFile;
	inFile = fopen("test.dat", "r");

	int sum = 0;
	int temp = 0;
	

	while(!feof(inFile)){
		fscanf(inFile, "%d\n", &temp );
		sum += temp;
	}

	int isPrime = sum;
	int total = sum;
	
	while (isPrime != 0 && total != 1) {

		total -= 1;
		isPrime = (sum % total);

	}
	if (isPrime == 0) {
		printf("the sum is %d\n", sum);
		printf("number is not prime\n");
	}
	else {
		printf("the sum is %d\n", sum);
		printf("number is prime\n");
	}
}

void task2() {
	FILE* inFile;
	inFile = fopen("test.dat", "r");

	int sum = 0;
	int temp = 0;


	while (!feof(inFile)) {
		fscanf(inFile, "%d\n", &temp);
		sum += temp;
	}

	double i;
	double j;

	double dSum = 1;
	int iSum = 0;
	int newSum = 0;

	int trunecated = sum;

	for (i = .1; trunecated != 0; i *= .1) {
		
		j = sum * i;
		printf("%lf-\n", j);

		trunecated = j;
		printf("%d\n", trunecated);

		dSum = j - trunecated;
		printf("%lf\n", dSum);

		newSum += (dSum / i);

	}

	printf("%d original sum\n", sum);
	printf("%d new sum\n", newSum);

}

void task3() {

	int n;
	int i;

	int factorial;

	while (1) {

		printf("Please enter a non-negative int value for N to determine it's factorial\n");

		scanf("%d", &n);

		if (n > 0) {

			factorial = findFactorial(n);

			printf("the factorial is: %d\n", factorial);

		}
		else {
			printf("please enter a valid number for n\n");
		}

	}
}

int findFactorial(int x) {

	if (x == 1) {
		return 1;
	}

	return x * findFactorial(x - 1);
}

void task4() {

	int n;
	int i;

	int fib;

	while (1) {

		printf("Please enter a non-negative int value for N to determine it's fibonaci sequence\n");

		scanf("%d", &n);

		if (n > 0) {

			fib = findFib(n);

			printf("the factorial is: %d\n", fib);

		}
		else {
			printf("please enter a valid number for n\n");
		}

	}
}

int findFib(int x) {

	if (x == 1) {
		return 1;
	}
	if (x == 0) return 0;


	printf("%d", x);

	return findFib(x - 1) + findFib(x-2);
}