#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double recursive(int x);

int main()
{
	printf("%lf\n", recursive(10));

	return 0;
}

double recursive(int x)
{
	if (x == 1)
		return 1.0;
	else
		return 1.0 / x + recursive(x - 1);
}