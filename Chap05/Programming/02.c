#include <stdio.h>

int main()
{
	double x, y;
	double result;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
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