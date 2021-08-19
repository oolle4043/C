#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define e 0.00001

double f_equal(double x);
double f_min(double x, double y);
double f_equal(double x, double y);

int main()
{
	double a, b;

	printf("실수를 입력하시오: ");
	scanf("%lf", &a);
	printf("실수를 입력하시오: ");
	scanf("%lf", &b);

	if (f_equal(a, b) == 1)
	{
		printf("두개의 실수는 근사적으로 서로 같음\n");
	}
	else if (f_equal(a, b) == 0)
	{
		printf("두개의 실수는 서로 다름\n");
	}

	return 0;
}

double f_abs(double x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return x;
	}
}

double f_min(double x, double y)
{
	if (f_abs(x) > f_abs(y))
	{
		return y;
	}
	else
	{
		return x;
	}
}

double f_equal(double x, double y)
{
	if (f_min(x, y) / f_min(f_abs(x), f_abs(y)) < e)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}