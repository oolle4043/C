#include <stdio.h>

int main()
{
	double x, y;
	double result;

	printf("실수를 입력하시오: ");
	scanf_s("%lf %lf", &x, &y);

	result = x + y;
	printf("%f ", result);
	
	result = x - y;
	printf("%f ", result);
	
	result = x * y;
	printf("%f ", result);
	
	result = x / y;
	printf("%f ", result);

	return 0;
}