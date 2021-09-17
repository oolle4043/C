#include <stdio.h>

int main()
{
	double x, y, z;
	double result;

	printf("지팡이의 높이를 입력하시오: ");
	scanf_s("%lf", &x);		// BC
	
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf_s("%lf", &y);		// AC

	printf("피라미드까지의 거리를 입력하시오: ");
	scanf_s("%lf", &z);		// AE

	result = (z * x) / y;

	printf("피라미드의 높이는 %lf입니다.", result);		// DE = (AE * BC) / AC

	return 0;
}