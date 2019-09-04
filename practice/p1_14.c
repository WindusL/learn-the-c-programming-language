#include <stdio.h>

#define LETTER_COUNT 26
#define INIT_DIGIT_NUM 0

main() {
	char letter[LETTER_COUNT] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
		's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	int ndigit[LETTER_COUNT];
	int c;

	/*初始化计数数组*/
	for (int i = 0; i < LETTER_COUNT; i++) {
		ndigit[i] = INIT_DIGIT_NUM;
	}

	while ((c = getchar()) != EOF) {
		for (int i = 0; i < LETTER_COUNT; i++) {
			if (c == letter[i])
				++ndigit[i];
		}
	}

	printf("^\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");

	for (int i = 0; i < LETTER_COUNT; i++) {
		int nd = ndigit[i];
		if (nd > 0) {
			printf("|");
			for (int j = 0; j < nd; j++) {
				printf("*");
			}
			printf("\t%d%c\n", ndigit[i], letter[i]);
		}
	}
	printf("|----------------------------------------------->\n");
}
