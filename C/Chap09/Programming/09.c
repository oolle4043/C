#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int x);

int main()
{
	int x;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	printf("자리수의 합 : %d", sum(x));

	return 0;
}

int sum(int x)
{
	static result;

	if (x == 0)
		return 0;
	else
		return (x % 10) + sum(x / 10);
}