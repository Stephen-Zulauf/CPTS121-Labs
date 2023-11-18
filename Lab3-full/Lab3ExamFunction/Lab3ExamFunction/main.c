/*

Stephen Zulauf
Lab 4
assignment #3 exam scores

Once again, for this problem create three files. Two .c files and one .h file. Write a
program that first prompts the user for the scores received on two exams, two labs,
and two projects. Note: you should only need to implement one function to get the
scores from the user. However, this function will be called six times (once for each
score needed). The program must then compute separate averages for the exams,
labs, and projects. Note: you should only need to implement one function to compute
the average. However, this function will be called three times (once for exams, once
for labs, and once for projects). Next, your program must weight the averages
according to the following:
a. Each exam is worth 30%
b. Each lab is worth 5%
c. Each project is worth 15%
Display the weighted average (out of 100%) to the screen.

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	double examScore;
	double labScore;
	double projectScore;
	double examAverage;
	double labAverage;
	double projectAverage;
	double weightedAverage;

	/* prompts the user for the scores received on two exams, two labs,
and two projects.*/

	examScore = getExamScores();

	labScore = getLabScores();

	projectScore = getProjectScores();

	/* compute separate averages for the exams,
labs, and projects. */
	examAverage = computeAverage(examScore);
	labAverage = computeAverage(labScore);
	projectAverage = computeAverage(projectScore);

	/*weight the averages*/
	weightedAverage = weightAverages(examAverage, labAverage, projectAverage);

	/*display results out of 100*/
	displayResults(weightedAverage);


	return 0;
}