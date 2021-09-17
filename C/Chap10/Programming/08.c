#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define SIZE 10

int main()
{
	double x[10];
	double sum = 0;
	double m, v, dev;

	for (int i = 0; i < SIZE; i++)
	{
		printf("데이터를 입력하시오:");
		scanf("%lf", &x[i]);

		sum += x[i];
	}
	m = sum / SIZE;

	sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += pow((x[i] - m), 2);
	}

	v = sum / SIZE;
	dev = sqrt(v);

	printf("평균값은 %lf\n", m);
	printf("표준편차값은 %lf\n", dev);
}