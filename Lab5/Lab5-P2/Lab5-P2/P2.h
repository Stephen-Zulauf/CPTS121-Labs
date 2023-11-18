#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*Read double value from file*/
double readDouble(FILE* infile);

/*Calculate average*/
double calculateAverage(double sum, int numberOfReads);

/*Output double value to file*/
void writeDouble(FILE* outfile, double average);