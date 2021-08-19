#include <stdio.h>
#include <stdlib.h>

int main()
{

	int nom[10] = { 0 };
	int min, max;
	
	for (int i = 0; i < 10; i++)
		nom[i] = rand() % 10000;

	min = nom[0];
	max = nom[0];

	for (int i = 1; i < 10; i++)
		if (nom[i] < min)
			min = nom[i];

	for (int i = 1; i < 10; i++)
		if (nom[i] > max)
			max = nom[i];

	printf("Max: %d, Min: %d", max, min);

	return 0;
}