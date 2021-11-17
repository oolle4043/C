#include <stdio.h>
#define SIZE 10

void array_print(int* A, int size);

int main()
{
	int A[SIZE] = { 1,2,3,4 };

	array_print(A, SIZE);

	return 0;
}

void array_print(int* A, int size)
{
	printf("A[] = {");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(A + i));
	}
	printf("}");
}