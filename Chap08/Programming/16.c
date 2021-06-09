#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main()
{
	double e = 0;
	int n;

	printf("어디까지 계산할까요: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		e += (1.0 / factorial(i));
	}
	
	e = e + 1;

	printf("오일러의 수는 %lf입니다.", e);
}

int factorial(int n)
{
	if (n == 1)
	{
		return n;
	}
	else
	{
		return (n * factorial(n - 1));
	}
}