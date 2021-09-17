#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;

	printf("카운터의 초기값을 입력하시오: ");
	scanf("%d", &x);

	for (int i = 0; x > i; x--) {
		printf("%d ", x);
	}

	return 0;
}