#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double w;
	double h;
	double d;
	double v;

	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &w, &h, &d);

	v = w * h * d;

	printf("������ ���Ǵ� %lf�Դϴ�.\n", v);

	return 0;
}