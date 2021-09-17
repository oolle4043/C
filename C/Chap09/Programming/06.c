#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int base, int power_raised);

int main()
{
	int base, power_raised;

	printf("밑수: ");
	scanf("%d", &base);
	printf("지수: ");
	scanf("%d", &power_raised);

	printf("%d^%d = %d", base, power_raised, power(base, power_raised));

	return 0;
}

int power(int base, int power_raised)
{
	if (power_raised > 0)
		return base * power(base, power_raised - 1);
	else
		return 1;
}