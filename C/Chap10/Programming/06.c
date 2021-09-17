#include <stdio.h>
#define ROWS 3
#define COLS 5

int main()
{
	int a[ROWS][COLS] = { {12,56,32,16,98},
						{99, 56,34,41,3},
						{65,3,87,78,21} };

	int sum1 = 0, sum2 = 0;

	for (int i = 0; i < ROWS; i++) {
		sum1 = a[i][0] + a[i][1] + a[i][2] + a[i][3] + a[i][4];
		printf("%d행의 합계: %d\n", i, sum1);
	}
	for (int i = 0; i < COLS; i++) {
		sum2 = a[0][i] + a[1][i] + a[2][i];
		printf("%d열의 합계: %d\n", i, sum2);
	}
	
	return 0;
}