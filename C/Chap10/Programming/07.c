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
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	
	for (int i = 0; i < COLS; i++) {
		if (a[2][i] == x) {
			printf("%d�� ���������� : %d", x, a[0][i]);
			result = 1;
		}
	}
	if (result == 0)
		printf("�ش� �迭�� ���������� �����ϴ�.");

	return 0;
}