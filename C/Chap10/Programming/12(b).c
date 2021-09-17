#include <stdio.h>
#define SIZE 3

int transpose(int a[][SIZE], int b[][SIZE]);

int main()
{
	int a[][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int b[][3] = { {0},{0},{0} };

	transpose(a, b);

}

int transpose(int a[][SIZE], int b[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			b[j][i] = a[i][j];

		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	return 0;
}