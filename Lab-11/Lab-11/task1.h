#ifndef TASK_1_H
#define TASK_1_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_RECORDS 200
#define INPUTFILE "payroll.txt"
#define OUTFILE "paid.txt"

typedef struct employee
{
	char name[100]; // employee's name - last, first
	char title; // title 'B' or 'M'
	double hours_worked; // total number of hours worked
	double payrate; // pay rate per hour
	double payment; // total payment for the pay period – you will compute!
} Employee;

typedef struct totals
{
	int number_of_records;
	double sum_of_payment;
	double average_payment;
	double maximum_payment;
	double minimum_payment;

} Totals;

int readPayroll(Employee* employees);

void calculatePay(Employee* employees, Totals * total);

void calculate_totals(Employee* employees, Totals* total);

void writeFile(Totals* total);

void task1();



#endif // !TASK_1_H

