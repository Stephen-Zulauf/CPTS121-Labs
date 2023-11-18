#include "task1.h"

int readPayroll(Employee * employees) {
	FILE* inFile = fopen(INPUTFILE, "r");

	int index = 0;

	while (!feof(inFile)) {

		fgets(employees[index].name, 99, inFile);
		fscanf(inFile, "%c", &employees[index].title);
		fscanf(inFile, "%lf", &employees[index].hours_worked);
		fscanf(inFile, "%lf", &employees[index].payrate);
		fscanf(inFile, "%lf", &employees[index].payment);
		fgetc(inFile);

		index++;

	}
	return index;
	fclose(inFile);

}

/*double sum_of_payment;
	double average_payment;
	double maximum_payment;
	double minimum_payment;*/
void calculatePay(Employee* employees, Totals* total) {
	int i;
	/*Basic Employee (title B):
	- Payment = hours worked * rate per hour (excluding overtime)
	- Overtime = 1.5 * rate per hour (for each hour over 40 hours worked per week)
	- Total payment = payment + overtime
	Manager (title M):
	- Payment = hours worked * rate per hour (excluding overtime)
	- Overtime = 1.8 * rate per hour (for each hour over 40 hours worked per week)
	- Total payment = payment + overtime*/

	//calculate total payment
	double overtime = 0;
	double hours_aft_ot = 0;
	double paymentTot = 0;
	double overtimeTot = 0;

	for (i = 0; i < total->number_of_records; i++) {
		if (employees[i].title == 'B') {
			if (employees[i].hours_worked > 80) {
				overtime = employees[i].hours_worked - 80;
				hours_aft_ot = 80;
			}
			else {
				overtime = 0;
				hours_aft_ot = employees[i].hours_worked;
			}
			paymentTot = hours_aft_ot * employees[i].payrate;
			overtimeTot = overtime * (1.5 * employees[i].payrate);
			employees[i].payment = paymentTot + overtimeTot;
		}
		else {
			if (employees[i].hours_worked > 80) {
				overtime = employees[i].hours_worked - 80;
				hours_aft_ot = 80;
			}
			else {
				overtime = 0;
				hours_aft_ot = employees[i].hours_worked;
			}
			paymentTot = hours_aft_ot * employees[i].payrate;
			overtimeTot = overtime * (1.8 * employees[i].payrate);
			employees[i].payment = paymentTot + overtimeTot;
		}
	}

}

void calculate_totals(Employee* employees, Totals* total) {
	int i;
	double sum = 0;
	double average = 0;
	double max = 0;
	double min = employees[0].payment;

	for (i = 0; i < total->number_of_records; i++) {
		sum += employees[i].payment;
		average += 1;

		if (employees[i].payment > max) {
			max = employees[i].payment;
		}
		if (employees[i].payment < min) {
			min = employees[i].payment;
		}
	}
	average = sum / average;

	total->sum_of_payment = sum;
	total->average_payment = average;
	total->maximum_payment = max;
	total->minimum_payment = min;
}

void writeFile(Totals* total) {
	FILE* output;
	output = fopen(OUTFILE, "w");

	fprintf(output, "Total:$%.2lf\n", total->sum_of_payment);
	fprintf(output, "Average:$%.2lf\n", total->average_payment);
	fprintf(output, "Max:$%.2lf\n", total->maximum_payment);
	fprintf(output, "Min:$%.2lf\n", total->minimum_payment);

	fclose(output);

}

void task1() {
	Employee payroll[200];
	Totals total;
	int records;

	records = readPayroll(payroll);
	total.number_of_records = records;
	calculatePay(payroll, &total);
	calculate_totals(payroll, &total);
	writeFile(&total);

}