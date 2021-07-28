#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
	int num[SIZE] = { 0 };
	int count[10] = { 0 };
	int max = 0;

	// count[num[i]]++;

	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++) {
		num[i] = rand() % 10;
		count[num[i]]++;
	}
	for (int i = 0; i < 10; i++) {
		if (max < count[i])
			max = i;
	}


	printf("%d", max);
	return 0;
}