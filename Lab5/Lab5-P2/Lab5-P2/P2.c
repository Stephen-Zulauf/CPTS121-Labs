#include "P2.h"

/*Read double value from file*/
double readDouble(FILE* infile) {
	double value;

	fscanf(infile, "%lf\n", &value);

	return value;
}

/*Calculate average*/
double calculateAverage(double sum, int numberOfReads) {
	double average;

	average = sum / numberOfReads;

	return average;
}

/*Output double value to file*/
void writeDouble(FILE* outfile, double average) {
	fprintf(outfile, "The average is: %lf\n", average);
}