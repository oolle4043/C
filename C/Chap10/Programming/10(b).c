#include <stdio.h>
#define SIZE 3

double vector_dot_prod(double x[], double y[]);

int main()
{
	double x[SIZE] = { 1,2,3 };
	double y[SIZE] = { 1,2,3 };

	double dot_prod;

	dot_prod = vector_dot_prod(x, y);

	printf("벡터의 내적 = %lf\n", dot_prod);

	return 0;
}

double vector_dot_prod(double x[], double y[])
{
	double z = 0;
	for (int i = 0; i < SIZE; i++)
	{
		z += x[i] * y[i];
	}
	return z;
}