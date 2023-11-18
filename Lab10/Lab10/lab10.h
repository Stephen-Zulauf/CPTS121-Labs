#ifndef LAB_H
#define LAB_H

#define _CRT_SECURE_NO_WARNINGS 

#define ROWS 3
#define COLS 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Words {
	char article[5][10];
	char noun[5][10];
	char verb[5][10];
	char prep[5][10];
};

void initWords(struct Words* words);

void printSentence(struct Words* words);

void taskOne();

/*tictactoe*/
typedef struct coordinate
{
	int row;
	int column;
} Coordinate;

typedef struct cell
{
	int occupied; // 1 if an X or O is in this cell; 0 otherwise
	char symbol; // X for one player, O for the other player
	/*A struct defined above, which represents the position of
	the cell within the game board*/
	Coordinate location; 
} Cell;

typedef struct board {
	Cell cells[ROWS][COLS];
}Board;


void initBoard(Board* board);

int checkCell(Board* board, int cellNum);

void writeCell(Board* board, int player, int cellNum);

void printBoard(Board* board);

void task2();



#endif // !LAB_H
