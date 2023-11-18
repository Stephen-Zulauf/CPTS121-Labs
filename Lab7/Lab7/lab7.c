#include "lab7.h"


void task1() {

	int inputID;
	double inputHours;

	double totalCharge;
	double avgCost;

	FILE* infile; 
	infile = fopen("input.txt", "r");

	FILE* outFile;
	outFile = fopen("outFile.txt", "w");

	int a;
	//get rid of date
	fscanf(infile, "%d", &a);
	fscanf(infile, "%d", &a);

	// read id then hours
	while (!feof(infile)) {

		//get input form file
		fscanf(infile, "%d", &inputID);
		fscanf(infile, "%lf", &inputHours);

		//calculate charges
		charges(inputHours, &totalCharge, &avgCost);

		//print to file
		fprintf(outFile, "ID:%d total:%.2lf avg:%.2lf\n", inputID, totalCharge, avgCost);

	}



}

void charges(double hours, double* totalCharge, double* averageCostPerHour) {

	//calc total charge
	if (hours <= 10) {
		*totalCharge = 7.99;
	}
	else {
		*totalCharge = (7.99) + (ceil((hours - 10))*1.99);
	}

	//calc average per hour cost
	*averageCostPerHour = *totalCharge / ceil(hours);

}

double round_money(double number) {

	double remainder = (int)number % 10;	
	

		

}

void task2() {

	FILE* outFile;
	outFile = fopen("estimatedRev.txt", "w");

	int year = 0;
	double rev = 0;

	while (rev <= 1000000) {

		revenue(year, &rev);

		fprintf(outFile, "year: %d revenue: %lf\n", year + 1984, rev);

		year += 1;
	}

}

/*R(t) = 203.265 X (1.071)^t*/
void revenue(double year, double* revenue) {

	*revenue = (203.265 * (pow(1.071, year)));

}

void predict(double revenue, double* year) {

	*year = (log(revenue) / log(203.265)) / log(1.071);

}



