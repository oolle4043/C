#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	char y;

	printf("아스키 코드값을 입력하시오: ");
	scanf("%d", &x);

	y = x;

	printf("문자:%c입니다.", y);

	return 0;
}