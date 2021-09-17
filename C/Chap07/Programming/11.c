#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int m;
	int result = 0;

	printf("n의 값을 입력하시오: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		m = i * i;
		result += m;
	}

	printf("계산값은 %d입니다.", result);

	return 0;
}