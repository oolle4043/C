#include <stdio.h>
#define SIZE 10

void array_copy(int* A, int* B, int size);

int main()
{
	int A[SIZE] = { 1,2,3 };
	int B[SIZE] = { 0 };

	array_copy(&A, &B, SIZE);

	printf("A[] = ");

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *(A + i));
	}
	printf("\n");
	
	printf("B[] = ");

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *(B + i));
	}

	return 0;
}

void array_copy(int* A, int* B, int size)
{
	int i;

	for (i = 0; i < size; i++) {
		B[i] = A[i];
	}
}