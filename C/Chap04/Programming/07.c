#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m;		// m = ����
	int s;		// s = �ӵ�
	double e;	// e = ������	

	printf("����(Kg): ");
	scanf("%d", &m);

	printf("�ӵ�(m/s): ");
	scanf("%d", &s);

	e = 0.5 * m * s * s;

	printf("�������(J): %lf", e);

	return 0;
}