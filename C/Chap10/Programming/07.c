#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 3
#define COLS 10

int main()
{
	int x;
	int result = 0;
	int a[ROWS][COLS] = { 0 };

	for (int i = 0; i < 10; i++) {
		a[0][i] = i + 1;
		a[1][i] = (i + 1) * (i + 1);
		a[2][i] = (i + 1) * (i + 1) * (i + 1);
	}
	
	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	
	for (int i = 0; i < COLS; i++) {
		if (a[2][i] == x) {
			printf("%d의 세제곱근은 : %d", x, a[0][i]);
			result = 1;
		}
	}
	if (result == 0)
		printf("해당 배열에 세제곱근이 없습니다.");

	return 0;
}