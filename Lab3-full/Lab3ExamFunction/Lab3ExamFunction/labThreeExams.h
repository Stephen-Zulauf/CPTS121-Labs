#pragma once

#include <stdio.h>

/* prompts the user for the scores received on two exams, two labs,
and two projects.*/
double getExamScores();
double getLabScores();
double getProjectScores();

/* compute separate averages for the exams,
labs, and projects. */
double computeAverage(double);

/*weight the averages*/
double weightAverages(double examAverage, double labAverage, double projectAverage);

/*display results out of 100*/
void displayResults(double);