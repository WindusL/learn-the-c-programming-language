#include <stdio.h>

#define MAX_ITEM 5

main() {
	int c, n, nLen;
	int wordLen[MAX_ITEM];

	n = nLen = 0;
	while ((c = getchar()) != EOF) {
		if (n >= MAX_ITEM)
			break;
		else if (c == ' ' || c == '\t') {
			wordLen[n] = nLen;
			nLen = 0;
			++n;
		} else
			++nLen;
	}

	printf("\n");
	printf("横向直方图：");
	printf("\n");

	/*横向直方图*/
	printf("^\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");
	for (int i = 0; i < MAX_ITEM; i++) {
		printf("|");
		for (int j = 0; j < wordLen[i]; j++) {
			printf("*");
		}
		printf("\n|\n");
	}
	printf("|----------------------------------------------->");

	printf("\n");
	printf("纵向直方图：");
	printf("\n");

	/*纵向直方图*/
	int greaterWordLen = 0;
	for (int i = 0; i < MAX_ITEM; i++) {
		if (wordLen[i] > greaterWordLen)
			greaterWordLen = wordLen[i];
	}

	printf("^\n");
	printf("|\n");
	printf("|\n");
	printf("|\n");

	for (int i = greaterWordLen; i > 0; i--) {
		printf("|\t");
		for (int j = 0; j < MAX_ITEM; j++) {
			if (wordLen[j] >= i) {
				printf("*\t");
			} else {
				printf(" \t");
			}
		}
		printf("\n");
	}
	printf("|----------------------------------------------->\n");
}
