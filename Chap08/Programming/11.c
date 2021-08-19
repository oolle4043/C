#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand();

int main()
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++)
	{
		printf("%lf ", f_rand());
	}

	return 0;
}

double f_rand()
{
	return rand() / (double)RAND_MAX;
}