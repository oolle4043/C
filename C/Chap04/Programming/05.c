#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

int main()
{
	int peyong;
	double x;

	printf("���� �Է��ϼ���: ");
	scanf("%d", &peyong);

	x = SQMETER_PER_PYEONG * peyong;

	printf("%lf�������Դϴ�.\n", x);

	return 0;
}