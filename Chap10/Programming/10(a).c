#include <stdio.h>
#define SIZE 3

double vector_add(double x[], double y[], double z[]);

int main()
{
	double x[SIZE] = { 1,2,3 };
	double y[SIZE] = { 1,2,3 };
	double z[SIZE] = { 0 };

	vector_add(x, y, z);

	printf("∫§≈Õ¿« «’ = ");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%lf ", z[i]);
	}

}

double vector_add(double x[], double y[], double z[])
{
	for (int i = 0; i < SIZE; i++)
	{
		z[i] = (x[i] + y[i]);
	}
	return z[SIZE];
}