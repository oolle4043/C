#include <stdio.h>
#define PI 3.14

int main()
{
	int l;	// �Ÿ�
	double radian;	// ����
	double radius;	// ������

	printf("�Ÿ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &l);

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &radian);

	radius = (360 * l) / (2 * PI * radian);
	
	printf("������ �������� %lf", radius);

	return 0;
}