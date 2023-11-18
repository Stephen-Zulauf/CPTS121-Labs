#include "P4.h"

int main(void)
{
	FILE* infile = NULL;
	
	/* Fill in the code to open a file. Make sure you check that the file was open
	successfully. */

	infile = fopen("numbers.txt", "r");

	double currentRead = fscanf(infile, "%lf", &currentRead);

	double currentHigh = currentRead;
	double currentLow = currentRead;


	while (!feof(infile))
	{
		/* Read in the real values. */
		fscanf(infile, "%lf", &currentRead);
		/* check high or low value */
		if (currentRead > currentHigh) {
			currentHigh = currentRead;
		}
		else if (currentRead < currentLow) {
			currentLow = currentRead;
		}

	}
	/* Output average to a file named "output.txt". */
	printf("The highest number is: %lf", currentHigh);
	printf("The lowest number is: %lf", currentLow);

	/* Close your files. */
	return 0;
}