#include "task.h"

//task 2
/*Write a function which returns the sum of the digits of an integer value. You
must use recursion. Example sum (765) = 18, sum (16978) = 31, etc.*/

int sum_of_digits(int number) {
	int result = 0;

	if (number == 0) {

		return result;
	}
	else {
		result = (number % 10) + sum_of_digits(number / 10);
	}
	
}

//task 3
/*3. Write a function which recursively reverses a string.*/

void reverse_string(char* st, int i) {
	int length = strlen(st) - 1;
	char temp = ' ';
	if (i == length/2) {
		st[length + 1] = '\0';
		return;
	}
	else {
		temp = st[i];
		st[i] = st[length - i];
		st[length - i] = temp;
		reverse_string(st, i + 1);
	}
}

//task 1
/*Complete Project 5 in Chapter 10 on page 563. Write a function that accepts an
8 by 8 array of characters that represents a maze. Each position can contain
either an X or a blank. Starting at position (0, 1), list any path through the
maze to get to location (7, 7). Only horizontal and vertical moves are allowed.
If no path exists, write a message indicating there is no path.
Moves can be made only to locations that contain a blank. If an X is
encountered, that path is blocked and another must be chosen. Use recursion.*/

void traverse_maze(int maze[][8], int row, int col) {

	if (row == 0 && col == 0 && maze[0][0] == 1) {
		printf("No possible path\n");
	}
	else if (row == 0 && col == 0) {
		int i, j;
		printf("   0 1 2 3 4 5 6 7\n");
		printf("   - - - - - - - -\n");
		for (i = 0; i < 8; i++) {
			if (i > 0) {
				printf("\n");
			}
			printf("%d|", i);
			for (j = 0; j < 8; j++) {

				printf("%2d", maze[i][j]);
			}
		}
		printf("\n");
	}
	else if (row == 7 && col == 7 && maze[row][col] != 1) {
		printf("%d,%d END\n", row, col);
	}
	//go back to nay nodes that are greater than one here
	if (row + 1 <= 7) {
		if (maze[row + 1][col] == 0) {
			maze[row][col] += 1;
			printf("%d,%d\n", row, col);
			traverse_maze(maze, row + 1, col);
		}
		
	}
	if (row - 1 >= 0) {
		if (maze[row - 1][col] == 0) {
			maze[row][col] += 1;
			printf("%d,%d\n", row, col);
			traverse_maze(maze, row - 1, col);
		}

	}
	if (col + 1 <= 7) {
		if (maze[row][col + 1] == 0) {
			maze[row][col] += 1;
			printf("%d,%d\n", row, col);
			traverse_maze(maze, row, col + 1);

		}

	}
	if (col - 1 >= 0) {
		if (maze[row][col - 1] == 0) {
			maze[row][col] += 1;
			printf("%d,%d", row, col);
			traverse_maze(maze, row, col - 1);

		}
		else {
			printf("no path");
			return;
		}
		
	}
	
}