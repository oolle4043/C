#include <stdio.h>

int main()
{
	double x, y, z;
	double result;

	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf_s("%lf", &x);		// BC
	
	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf_s("%lf", &y);		// AC

	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &z);		// AE

	result = (z * x) / y;

	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�.", result);		// DE = (AE * BC) / AC

	return 0;
}