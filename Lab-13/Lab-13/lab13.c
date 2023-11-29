#include "lab13.h"

void print_int_binary(int value, int bits) {
	
	int init = value;
	int stored[33] = { 0 };
	int i;

	if (bits <= 32) {
		for (i = 0; i < bits; i++) {

			if (init % 2 == 0) {
				stored[i] = 0;
			}
			else if (init % 2 == 1) {
				stored[i] = 1;
			}

			init = init / 2;
		}


		for (i = bits; i >= 0; i--) {
			printf("%d", stored[i]);
		}
	}
	else {
		printf("bits value must be <= 32");
	}
}

void left_shift(int value, int shift_by, int bits) {
	int result = value << shift_by;

	printf("Original Value: %d\n", value);
	printf("Binary:");
	print_int_binary(value, bits);
	printf("\n");
	printf("Shifted: %d\n", result);
	printf("Binary:");
	print_int_binary(result, bits);
	printf("\n");
}

void power2(int value, int pow) {
	int result = value << pow;

	printf("%d * 2^%d\n", value, pow);
	printf("result: %d\n", result);
	printf("\n");
}

void packCharacters() {
	unsigned int un_chars = 0;
	char temp;
	int i;
	for (i = 0; i < 4; i++) {
		printf("Enter Character %d", i+1);
		scanf(" %c", &temp);

		if (un_chars == 0) {
			un_chars = temp;
		}
		else {
			un_chars = un_chars << 8;
			un_chars = un_chars | temp;
		}
	}

	//print unsigned var
	print_int_binary(un_chars, 32);
}