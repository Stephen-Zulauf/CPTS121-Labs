
/*
Stephen Zulauf
Lab 4
Assignment 4

Write a program to determine a professional baseball player's bonus at the end
of a season. The bonus is calculated as follows:
1. All-Star Game appearance = $25,000
2. Regular season MVP = $75,000
3. World Series MVP = $100,000
4. Gold Glove award = $50,000
5. Silver Slugger award = $35,000
6. Home run champ = $25,000
7. Batting average champ = $25,000
Prompt the user with a question related to each of the above categories. If the
response is 'y' for yes, add the bonus to the total, otherwise if the response is
'n' move to the next question. Use functions where appropriate
*/

#include "calcBonus.h"

int main() {
	/*char answers[7];
	int bonus;

	printf("|Calculate Player's Bonus|\n");
	printf("Please enter 'y' if any apply to you, otherwise enter 'n'\n");

	printf("1. All-Star Game appearance = $25,000\n");
	scanf("%c", &answers[0]);

	printf("2. Regular season MVP = $75,000\n");
	scanf(" %c", &answers[1]);

	printf("3. World Series MVP = $100,000\n");
	scanf(" %c", &answers[2]);

	printf("4. Gold Glove award = $50,000\n");
	scanf(" %c", &answers[3]);

	printf("5. Silver Slugger award = $35,000\n");
	scanf(" %c", &answers[4]);

	printf("6. Home run champ = $25,000\n");
	scanf(" %c", &answers[5]);

	printf("7. Batting average champ = $25,000\n");
	scanf(" %c", &answers[6]);

	printf("Thank You!\n");

	bonus = calculateBonus(answers);

	printf("Your Total Bonus will be: %d", bonus);
	*/

	int choice = 0;

	while (choice != 8) {
		printf("please select an option that applies to you:\n");
		printf("[1] All-Star Game appearance = $25,000\n");
		printf("[2] Regular season MVP = $75,000\n");
		printf("[3] World Series MVP = $100,000\n");
		printf("[4] Gold Glove award = $50,000\n");
		printf("[5] Silver Slugger award = $35,000\n");
		printf("[6] Home run champ = $25,000\n");
		printf("[7] Batting average champ = $25,000\n");
	}

}