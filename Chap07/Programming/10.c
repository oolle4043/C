#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double n;
	int r;
	double result = 1.0;

	printf("실수의 값을 입력하시오: ");
	scanf("%lf", &n);
	printf("거듭제곱횟수를 입력하시오: ");
	scanf("%d", &r);

	for (int i = 1; i <= r; i++) {
		
		result *= n;
		
	}
	printf("결과값은 %lf", result);

	return 0;
}