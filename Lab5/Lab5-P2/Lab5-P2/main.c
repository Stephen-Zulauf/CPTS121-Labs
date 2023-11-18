
#define INFILENAME "data.txt"
#define OUTFILENAME "output.txt"
#include "P2.h"
#include <stdio.h>

int main(void)
{
	FILE* infile = NULL;
	FILE* outfile = NULL;

	/* Fill in the code to open a file. Make sure you check that the file was open
	successfully. */
	infile = fopen(INFILENAME, "r");
	if (infile == NULL) {
		infile = fopen(INFILENAME, "r");
		if (infile == NULL) {
			printf("COULD NOT READ FILE %s", INFILENAME);
		}
	}

	outfile = fopen(OUTFILENAME, "w");
	if (outfile == NULL) {
		outfile = fopen(OUTFILENAME, "w");
		if (outfile == NULL) {
			printf("COULD NOT OPEN FILE %s", OUTFILENAME);
		}
	}

	double sum = 0;
	int numberOfReads = 0;
	double average;

	while (!feof(infile))
	{
		/* Read in the real values. */
		sum += readDouble(infile);

		/* Keep track of the number of values read and the sum of the values. */
		numberOfReads += 1;
	}
	/* Output average to a file named "output.txt". */
	average = calculateAverage(sum, numberOfReads);
	writeDouble(outfile, average);

	/* Close your files. */
	return 0;
}