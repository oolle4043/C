#include <stdio.h>
#define SIZE 10

void array_copy(int a[], int b[], int size);

int main()
{
	int a[SIZE] = { 1,2,3 };
	int b[SIZE] = { 0 };

	array_copy(a, b, SIZE);

	return 0;
}

void array_copy(int a[], int b[], int size)
{
	for (int i = 0; i < 10; i++) {
		b[i] = a[i];
	}

		for (int i = 0; i < 10; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");

		for (int i = 0; i < 10; i++) {
			printf("%d ", b[i]);
		}
		printf("\n");
}