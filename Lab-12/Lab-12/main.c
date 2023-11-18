#include "task.h"

int main() {

	int test;

	test = sum_of_digits(555555);

	printf("%d\n", test);

	char cTest[] = "Hello";

	reverse_string(cTest,0);

	printf("%s\n", cTest);

	int testMaze[8][8] = {
		{0,0,1,1,1,1,1,1},
		{1,0,1,1,1,1,1,1},
		{1,0,0,0,0,1,1,1},
		{1,1,1,1,0,0,0,0},
		{1,1,1,1,0,1,1,0},
		{1,1,1,1,0,1,1,0},
		{1,1,1,1,0,0,1,0},
		{1,1,1,1,1,0,0,0},
	};

	
	traverse_maze(testMaze,0,0);

	return 0;
}
