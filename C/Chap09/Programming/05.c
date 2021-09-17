#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int x);

int main()
{
	int x;
	
	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	printf("1부터 %d까지의 합은 = %d", x, sum(x));

	return 0;
}

int sum(int x)
{
	if (x < 1)
		return 0;
	else
	return x + sum(x - 1);
}