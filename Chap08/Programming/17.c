#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define e 0.00001

double f_equal(double x);
double f_min(double x, double y);
double f_equal(double x, double y);

int main()
{
	double a, b;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &a);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &b);

	if (f_equal(a, b) == 1)
	{
		printf("�ΰ��� �Ǽ��� �ٻ������� ���� ����\n");
	}
	else if (f_equal(a, b) == 0)
	{
		printf("�ΰ��� �Ǽ��� ���� �ٸ�\n");
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