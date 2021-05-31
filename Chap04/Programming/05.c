#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

int main()
{
	int peyong;
	double x;

	printf("평을 입력하세요: ");
	scanf("%d", &peyong);

	x = SQMETER_PER_PYEONG * peyong;

	printf("%lf평방미터입니다.\n", x);

	return 0;
}