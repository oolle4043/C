#include <stdio.h>
#define SIZE 10

void array_add(int* A, int* B, int* C, int size);

int main()
{
	int A[SIZE] = { 1,2,3 };
	int B[SIZE] = { 0 };
	int C[SIZE];

	printf("A[] = {");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", *(A + i));
	printf("}\n");

	printf("B[] = {");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", *(B + i));
	printf("}\n");

	array_add(A, B, C, SIZE);

	return 0;
}

void array_add(int* A, int* B, int* C, int size)
{
	for (int i = 0; i < size; i++)
		*(C + i) = *(A + i) + *(B + i);

	printf("C[] = {");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", *(C + i));
	printf("}\n");
}