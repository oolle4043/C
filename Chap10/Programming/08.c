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
		printf("�����͸� �Է��Ͻÿ�:");
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

	printf("��հ��� %lf\n", m);
	printf("ǥ���������� %lf\n", dev);
}