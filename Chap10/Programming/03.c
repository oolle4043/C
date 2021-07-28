#include <stdio.h>
#define SIZE 10


int array_equal(int a[], int b[], int size);

int main()
{
	int a[SIZE] = { 1,2,3 };
	int b[SIZE] = { 0 };

	if (array_equal(a,b,SIZE) == 1) {
		printf("2개의 배열은 같음");
	}
	else
		printf("2개의 배열은 다름");

	return 0;
}

array_equal(int a[], int b[], int size)
{
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	
	for (int i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");

	int count = 0;

	for (int i = 0; i < 10; i++) {
		if (a[i] == b[i])
			count += 1;
	}

	if (count == size)
		return 1;
	else
		return 0;

}