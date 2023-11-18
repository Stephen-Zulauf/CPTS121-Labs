#include "lab10.h"

void initWords(struct Words* words) {
	char articles[][10] = { "the", "a", "one", "some", "any" };
	char nouns[][10] = { "boy", "girl", "dog", "town", "car" };
	char verbs[][10] = { "drove", "jumped", "ran", "walked", "skipped"} ;
	char prepositions[][10] = { "to", "from", "over", "under", "on" };
	int i;
	for (i = 0; i < 5; i++) {
		strcpy(words->article[i], articles[i]);
		strcpy(words->noun[i], nouns[i]);
		strcpy(words->verb[i], verbs[i]);
		strcpy(words->prep[i], prepositions[i]);
	}
	
}

void printSentence(struct Words* words) {
	//article, noun, verb, preposition, article, and noun
	int random = rand() % 5;
	char sentence[100] = "\n";

	strcat(sentence, words->article[random]);
	strcat(sentence, " ");
	random = rand() % 5;
	strcat(sentence, words->noun[random]);
	strcat(sentence, " ");
	random = rand() % 5;
	strcat(sentence, words->verb[random]);
	strcat(sentence, " ");
	random = rand() % 5;
	strcat(sentence, words->prep[random]);
	strcat(sentence, " ");
	random = rand() % 5;
	strcat(sentence, words->article[random]);
	strcat(sentence, " ");
	random = rand() % 5;
	strcat(sentence, words->noun[random]);
	strcat(sentence, "!");

	printf("%s\n", sentence);

}

void taskOne() {
	srand(time(NULL));
	struct Words words;
	initWords(&words);
	int i;
	for (i = 0; i < 20; i++) {
		printSentence(&words);
	}

}

/*tictac toe*/
//init board
void initBoard(Board* board) {
	int i, j;

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			board->cells[i][j].symbol = '~';
			board->cells[i][j].occupied = 0;
		}
	}
}

//check cell
int checkCell(Board* board, int cellNum) {
	int x = cellNum % 3;
	int y = cellNum / 3;
	
	if (board->cells[x][y].symbol != '~') {
		return 1;
	}
	else {
		return 0;
	}
}

//overwrite cell value
void writeCell(Board* board, int player, int cellNum) {
	int x = cellNum % 3;
	int y = cellNum / 3;

	switch (player) {
	case 0:
		board->cells[x][y].symbol = 'X';
		board->cells[x][y].occupied = 1;
		break;
	case 1:
		board->cells[x][y].symbol = 'O';
		board->cells[x][y].occupied = 1;
		break;
	}
	
}

//check if winner
int checkWin(Board* board) {
	int i, j;

	if (board->cells[0][0].symbol == board->cells[0][1].symbol && board->cells[0][1].symbol == board->cells[0][2].symbol) {
		return 1;
	}
	else if (board->cells[1][0].symbol == board->cells[1][1].symbol && board->cells[1][1].symbol == board->cells[1][2].symbol) {
		return 1;
	}
	else if (board->cells[2][0].symbol == board->cells[2][1].symbol && board->cells[2][1].symbol == board->cells[2][2].symbol) {
		return 1;
	}
	else if (board->cells[0][0].symbol == board->cells[1][0].symbol && board->cells[1][0].symbol == board->cells[2][0].symbol) {
		return 1;
	}
	else if (board->cells[0][1].symbol == board->cells[1][1].symbol && board->cells[1][1].symbol == board->cells[2][1].symbol) {
		return 1;
	}
	else if (board->cells[0][2].symbol == board->cells[1][2].symbol && board->cells[1][2].symbol == board->cells[2][2].symbol) {
		return 1;
	}
	else if (board->cells[0][0].symbol == board->cells[1][1].symbol && board->cells[1][1].symbol == board->cells[2][2].symbol) {
		return 1;
	}
	else if (board->cells[0][2].symbol == board->cells[1][1].symbol && board->cells[1][1].symbol == board->cells[2][0].symbol) {
		return 1;
	}
	else {
		return 0;
	}

}

//print board
void printBoard(Board* board) {
	int i, j;

	for (i = 0; i < ROWS; i++) {
		printf("\n");
		for (j = 0; j < COLS; j++) {
			printf("|%2c|",board->cells[i][j].symbol);
		}
	}
}

void task2() {

	Board board;
	initBoard(&board);

	int player = rand() % 1;

	int win = 0;

	int cord;

	while (win == 0) {

		system("cls");
		printBoard(&board);
		printf("\n");
		printf("player %d enter 0-8\n", player + 1);

		scanf("%d", &cord);

		if (checkCell(&board, cord) == 0) {
			writeCell(&board, player, cord);

			win = checkWin(&board);
			
		}
		if (win == 0) {
			if (player == 0) {
				player = 1;
			}
			else {
				player = 0;
			}
		}
		


	}

	
}
