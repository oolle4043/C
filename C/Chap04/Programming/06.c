#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x = 3.32e-3;
	double y = 9.76e-8;
	double sum = x + y;

	printf("%lf", sum);

	return 0;
}
// 3.32 * 10^-3 + 9.76 * 10^-8
// ����ǥ������� �ʱ�ȭ �ؼ� ����ϴ� ���