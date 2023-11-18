#ifndef TASK_H
#define TASK_H

#include <stdio.h>
#include <string.h>


//task 2
/*Write a function which returns the sum of the digits of an integer value. You
must use recursion. Example sum (765) = 18, sum (16978) = 31, etc.*/

int sum_of_digits(int number);

//task 3
/*3. Write a function which recursively reverses a string.*/

void reverse_string(char* st, int i);

//task 1
/*Complete Project 5 in Chapter 10 on page 563. Write a function that accepts an
8 by 8 array of characters that represents a maze. Each position can contain
either an X or a blank. Starting at position (0, 1), list any path through the
maze to get to location (7, 7). Only horizontal and vertical moves are allowed.
If no path exists, write a message indicating there is no path.
Moves can be made only to locations that contain a blank. If an X is
encountered, that path is blocked and another must be chosen. Use recursion.*/
enum direction {
	up,
	down,
	left,
	right

};
void traverse_maze(int maze[][8], int row, int col);

#endif // !TASK_H

