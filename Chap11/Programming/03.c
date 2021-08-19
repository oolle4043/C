#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void array_fill(int* A, int size);

int main()
{
	int A[SIZE] = { 0 };

	srand((unsigned)time(NULL));

	array_fill(&A, SIZE);

	return 0;
}

void array_fill(int* A, int size)
{
	int i;
	
	for (i = 0; i < size; i++) {
		A[i] = rand() % 10000;
		printf("%d ", A[i]);
	}
}