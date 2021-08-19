#include <stdio.h>
#define SIZE 4

void merge(int* A, int* B, int* C, int size);

int main()
{
	int A[SIZE] = { 2,5,7,8 };
	int B[SIZE] = { 1,3,4,6 };
	int C[SIZE * 2] = { 0 };

	printf("A[] = ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	printf("B[] = ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");

	merge(&A, &B, &C, SIZE);
	
	printf("C[] = ");
	for (int i = 0; i < SIZE * 2; i++) {
		printf("%d ", C[i]);
	}

	return 0;
}

void merge(int* A, int* B, int* C, int size)
{
	int a, b, c;
	a = b = c = 0;

	while (a < size && b < size)
	{
		if (A[a] < B[b]) {
			C[c] = A[a];
			a++;
			c++;
		}
		else
		{
			C[c] = B[b];
			b++;
			c++;
		}
	}
	while (c < size * 2) {
		if (a < b) {
			C[c] = A[a];
			a++;
			c++;
		}
		else
		{
			C[c] = B[b];
			b++;
			c++;
		}
	}
}