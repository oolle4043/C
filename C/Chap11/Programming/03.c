#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void array_fill(int* A, int size);

int main()
{
	srand((unsigned)time(NULL));
	int A[SIZE];

	array_fill(A, SIZE);

	for (int i = 0; i < SIZE; i++)
		printf("%d ", *(A+i));


	return 0;
}

void array_fill(int* A, int size)
{
	for (int i = 0; i < size; i++)
		*(A+i) = rand() % 1000;
}