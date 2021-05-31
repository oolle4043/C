#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;

	printf("정수를 입력하시오:");
	scanf("%d", &x);
	printf("정수를 입력하시오:");
	scanf("%d", &y);

	if (x % y == 0)
		printf("약수 입니다.");
	else
		printf("약수가 아닙니다.");

	return 0;
}