#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;

	printf("3개의 정수를 입력하시오:");
	scanf("%d %d %d", &x, &y, &z);

	if (x < y && y < z)
	{
		printf("제일 작은 정수는 %d입니다.", x);
	}
	else if (y < z && y < z)
	{
		printf("제일 작은 정수는 %d입니다.", y);
	}
	else
	{
		printf("제일 작은 정수는 %d입니다.", z);
	}

	return 0;
}