#include <stdio.h>
#define SIZE 10

void array_copy(int* A, int* B, int size);

int main()
{
	int A[SIZE] = { 1,2,3 };
	int B[SIZE];

	printf("A[] = {");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", *(A + i));
	printf("}\n");

	array_copy(A, B, SIZE);

	return 0;
}

void array_copy(int* A, int* B, int size)
{
	for (int i = 0; i < size; i++) {
		*(B + i) = *(A + i);
	}

	printf("B[] = {");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", *(B + i));
	printf("}");
}