#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_int(int* px, int* py);

int main()
{
	int x, y;
	int* px = &x, * py = &y;

	get_int(px, py);

	printf("정수의 합은 %d", x + y);
	
	return 0;
}

void get_int(int* px, int* py)
{
	printf("2개의 정수를 입력하시오(예: 10 20): ");
	scanf("%d %d", px, py);
}