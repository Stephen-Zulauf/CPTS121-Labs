#include "lab9.h"

/*- Copies all characters
in the array pointed to by source into the array pointed to by destination. The
null character is also copied. The function returns destination.*/
char* my_strcpy(char* destination, const char* source) {

	char temp;
	int index = 0;

	temp = source[index];


	while (temp != '\0') {
		temp = source[index];
		destination[index] = temp;
		index += 1;
	}

	if (temp == '\0') {
		destination[index] = '\0';
	}

	return destination;
}

/*This function appends
a copy of the string pointed to by source (including the null character) to the
end of the string pointed to by destination. The append overwrites the null
character at the end of destination. The string pointed to by destination is
returned.*/
char* my_strcat(char* destination, const char* source) {

	char temp;
	int index = 0;
	int indexTwo = 0;

	temp = destination[index];


	while (destination[index] != '\0') {
		index += 1;
	}
	while (source[indexTwo] != '\0') {
		destination[index] = source[indexTwo];
		index += 1;
		indexTwo += 1;
	}

	destination[index] = '\0';

	return destination;
}

/*This function compares the
string pointed to by s1 to the string pointed to by s2. If the string pointed to by
s1 comes before the string pointed to by s2 in dictionary ordering, then -1 is
returned. If the string pointed to by s1 is the same as the string pointed to by
s2, then 0 is returned (the compare function is case sensitive). Otherwise 1 is
returned.*/
int my_strcmp(const char* s1, const char* s2) {
	int indexOne = 0;
	int indexTwo = 0;

	while (s1[indexOne] != '\0' && s2[indexTwo] != '\0') {


		if (s1[indexOne] > s2[indexTwo]) {
			return 1;
		}
		else if(s1[indexOne] < s2[indexTwo]){
			return -1;
		}

		//increase index
		if (s1[indexOne] != '\0') {
			indexOne += 1;
		}
		if (s2[indexTwo] != '\0') {
			indexTwo += 1;
		}

	}

	return 0;

}

/*- This function returns the length of the string
pointed to by s. The computation of length does NOT include the null
character*/
int my_strlen(const char* s) {

	int index = 0;

	while (s[index] != '\0') {
		index++;
	}

	return index;
}

/*string_reverse () that accepts a string as an argument and reverses the string
without creating an extra array to perform the reversing, i.e. "CptS 121 is
cool!" becomes "!looc si 121 StpC". This is a form of in-place reversal. The
function should return a pointer to the reversed string.*/

char* string_reverse(char* s) {
	int length = my_strlen(s) - 1;
	int i;
	int j = (length-1);

	char temp;

	for (i = 0; i < length; i++) {
		if (i == j) {
			return s;
		}
		else {
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			j -= 1;

		}
		
	}

	return s;
}

/*Write a program that tests the following functions. Yes, you must implement
the below functions without using any <string.h> library functions. You may
use array and/or pointer notation to define the functions.*/

int testPartTwo() {

	char testStringOne[] = "Hello";
	char testStringTwo[50] = "TEST";

	printf("%s\n", my_strcpy(testStringTwo, testStringOne));

	printf("%s\n", my_strcat(testStringTwo, testStringOne));

	char test3[] = "aah";
	char test4[] = "testing this reverse";

	printf("%d\n", my_strcmp(test3, test4));

	printf("%d\n", my_strlen(test3));

	printf("%s\n", string_reverse(test4));



}