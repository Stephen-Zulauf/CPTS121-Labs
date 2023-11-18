
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "labThreeExams.h"

/* prompts the user for the scores received on two exams, two labs,
and two projects.*/
double getExamScores() {

	double examOne;
	double examTwo;

	printf("Please enter the two exam scores (eg. score1,score2)");
	scanf("%lf,%lf", &examOne, &examTwo);

	return examOne + examTwo;
}

double getLabScores() {

	double labOne;
	double labTwo;

	printf("Please enter the two lab scores (eg. score1,score2)");
	scanf("%lf,%lf", &labOne, &labTwo);

	return labOne + labTwo;
}

double getProjectScores() {

	double projOne;
	double projTwo;

	printf("Please enter the two Project scores (eg. score1,score2)");
	scanf("%lf,%lf", &projOne, &projTwo);

	return projOne + projTwo;
}

/* compute separate averages for the exams,
labs, and projects. */
double computeAverage(double addedScore) {

	double average = addedScore / 2;

	return average;
}

/*weight the averages*/
double weightAverages(double examAverage, double labAverage, double projectAverage) {

	double examWeight = examAverage * .60;
	double labWeight = labAverage * .1;
	double projWeight = projectAverage * .30;

	return examWeight + labWeight + projWeight;

}

/*display results*/
void displayResults(double weightedAverage){
	printf("Your current grade is: %lf", weightedAverage);
}