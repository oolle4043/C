#include <stdio.h>
#define SIZE 10

int search(int* A, int size, int search_value);

int main()
{
	int A[SIZE] = { 100,200,300,400,500,600,700,800,900,1000 };
	int search_value = 200;

	printf("월급이 %d만원인 사람의 인덱스 = %d", search_value, search(A, SIZE, search_value));

	return 0;
}

int search(int* A, int size, int search_value)
{
	for (int i = 0; i < size; i++) {
		if (search_value == *(A + i))
			return i;
	}
}