#ifndef LABNINE_H
#define LABNINE_H

#include<stdio.h>

/*- Copies all characters
in the array pointed to by source into the array pointed to by destination. The
null character is also copied. The function returns destination.*/
char* my_strcpy(char* destination, const char* source);


/*This function appends
a copy of the string pointed to by source (including the null character) to the
end of the string pointed to by destination. The append overwrites the null
character at the end of destination. The string pointed to by destination is
returned.*/
char* my_strcat(char* destination, const char* source);

/*This function compares the
string pointed to by s1 to the string pointed to by s2. If the string pointed to by
s1 comes before the string pointed to by s2 in dictionary ordering, then -1 is
returned. If the string pointed to by s1 is the same as the string pointed to by
s2, then 0 is returned (the compare function is case sensitive). Otherwise 1 is
returned.*/
int my_strcmp(const char* s1, const char* s2);

/*This function returns the length of the string
pointed to by s. The computation of length does NOT include the null
character.*/
int my_strlen(const char* s);

/*- This function returns the length of the string
pointed to by s. The computation of length does NOT include the null
character*/
int my_strlen(const char* s);

/*string_reverse () that accepts a string as an argument and reverses the string
without creating an extra array to perform the reversing, i.e. "CptS 121 is
cool!" becomes "!looc si 121 StpC". This is a form of in-place reversal. The
function should return a pointer to the reversed string.*/

char* string_reverse(char* s);


/*Write a program that tests the following functions. Yes, you must implement
the below functions without using any <string.h> library functions. You may
use array and/or pointer notation to define the functions.*/

int testPartTwo();





#endif // !LABNINE_H

