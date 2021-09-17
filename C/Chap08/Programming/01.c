#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double square(double);

int main()
{
	double x;

	printf("정수를 입력하시오: ");
	scanf("%lf", &x);

	printf("주어진 정수 %lf의 제곱은 %lf입니다.", x, square(x));
	
	return 0;
}

double square(double x)
{	
	return x * x;
}