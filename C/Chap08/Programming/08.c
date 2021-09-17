#include <stdio.h>
#include <math.h>

#define PI 3.141592

double sin_degree(double degree);

int main()
{
	double degree = 0;

	for (degree = 0.0; degree <= 180.0; degree += 10.0)
	{
		printf("sin(%lf)ÀÇ °ªÀº %lf\n", degree, sin_degree(degree));

	}
	return 0;
}

double sin_degree(double degree)
{
	double radian;

	radian = (PI * degree) / 180.0;
	return (sin(radian));
}