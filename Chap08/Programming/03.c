#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double cal_area(double radius);

int main()
{
	double radius;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);
	

	printf("���� ������ %lf�Դϴ�.", cal_area(radius));

	return 0;
}

double cal_area(double radius)
{
	return radius * radius * 3.141592;
}