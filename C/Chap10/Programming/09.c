#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 3

int main()
{
	int a[ROWS][COLS] = { 0 };
	int i, j;
	int min = 0, max = 0;

	srand((unsigned)time(NULL));

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			a[i][j] = rand() % 100;
		}
	}

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			if (a[i][j] < a[i][j + 1]) {
				min = a[i][j];
			}
			if (a[i][j] > a[i][j + 1]) {
				max = a[i][j];
			}
		}
		printf("���� #%d�� �ִ����� = %d\n���� #%d�� �������� = %d\n", i, max, i, min);
	}

	return 0;
}