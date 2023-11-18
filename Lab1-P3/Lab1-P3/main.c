/// part three of lab 1 8.29

/*Write a program that prompts the user for inputs into Ohm’s Law and
determines the voltage. Print the voltage value. Ohm's Law: V = IR, where V is
the voltage, I is the current, and R is the resistance of the circuit (all values
are integers).

Write a program that prompts the user for inputs into Joule’s Law and
determines the power. Print the power value. Joule's Law: P = (V^2) / R, where
P is the power, V is the voltage, and R is the resistance of the circuit (all values
are integers). Do we have loss of precision? What kind of division is being
performed?

Write a program that prompts the user for inputs into the third order
polynomial equation provided and determines the y value. Print the y value.
The third order polynomial equation is: y = 3 * ax3 + (1/4) * bx2 + 10 * cx + (-5) *
d (x, y, a, b, c, and d are integer numbers). Be careful here! What is (1 / 4) as
an integer result? We do not want integer division in this case! How do we fix
it? Do we ultimately have loss of precision?

Write a program that prompts the user for inputs into the circumference of
circle equation provided and determines the circumference value. Print the
circumference value. Circumference of a circle: circumference = 2 * PI * radius
(circumference and radius are floating-point numbers; PI should be defined as
a constant floating-point number and should not be entered by the user)

*/

#define _CRT_SECURE_NO_WARNINGS // necessary to ignore scanf_s () warnings
#include <stdio.h>


/*int main(void) {

	int I, R;

	printf("|Ohms Law calculator|\n");
	printf("Enter an int value for Current and for Resistance\n");

	scanf("%d %d", &I, &R);

	printf("The Voltage is %d", I * R);
}
*/

/*int main(void) {

	int V, R;

	printf("|Joules Law calculator|\n");
	printf("Enter an int value for Voltage and for Resistance\n");

	scanf("%d %d", &V, &R);

	printf("The Power is %d", (V * V) / R);
}
*/

/*int main(void) {

	int x,y,a,b,c,d;

	printf("|Polynomial Calculator|\n");
	printf("| y = 3 * ax3 + (1/4) * bx2 + 10 * cx + (-5) * d\n");
	printf("Enter values for x, a, b, c, d\n");

	scanf("%d %d", &x, &a, &b, &c, &d);

	y = (3 * a * x * 3) + (.25 * (double)(b * x * 2)) + (10 * c * x) + (-5 * d);

	printf("The y value of the polynomial is %d", y);
}*/

int main(void) {

	double R;
	double pi = 3.14159;

	printf("|Circumference Calculator|\n");
	printf("| circumference = 2 * PI * radius |\n");
	printf("Enter a floating point value for radius\n");

	scanf("%lf", &R);

	printf("The Cirumference of the circle is: %lf\n", 2 * pi * R);
}