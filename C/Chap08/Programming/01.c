#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double);

int main()
{
	double x;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.", x, square(x));
	
	return 0;
}

double square(double x)
{	
	return x * x;
}