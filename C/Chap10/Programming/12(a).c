#include <stdio.h>
#define SIZE 3

int scalar_mult(int a[][SIZE], int scalar);

int main()
{
	int a[][SIZE] = { {1,2,3},{4,5,6},{7,8,9} };

	scalar_mult(a, 2);
}

int scalar_mult(int a[][SIZE], int scalar)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			a[i][j] *= scalar;
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}