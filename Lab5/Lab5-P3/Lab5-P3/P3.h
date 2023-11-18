#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

/*gets remainder of division*/
int getRemainder(int numberOne, int numberTwo);

/*calculates and returns the greatest common
divisor of two integer numbers*/
int greatest_common_divisor(int numberOne, int numberTwo);

/*print GCD to file*/
void printInt(FILE* outfile, int number);