#include <stdio.h>
#include <stdlib.h>

void snailArray(void){

int test[5][5] = { 0 };
	int column = -1;
    int row = 0;
    int counter = 0;
	int nLength = 9;
    int count = 1;

	for (nLength = 9; nLength > 0; nLength -= 2) {
		for (int i = 0; i < nLength; ++i) {
			if (i < nLength / 2 + 1)
				column += count;
			else
				row += count;

			test[row][column] = ++counter;
		}
		count = -count;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", test[i][j]);
		}
		putchar('\n');
	}
}