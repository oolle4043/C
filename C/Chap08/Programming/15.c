#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime();

int main()
{
	for (int i = 2; i <= 100; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}

	return 0;
}

int is_prime(int n)
{
	for (int i = 2; i < n; i++) 
	{
		if (n % i == 0) 
		{
			return 0;
		}
	}
	return 1;
}