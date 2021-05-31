#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;

	printf("16진수 정수를 입력하시오: ");
	scanf("%x", &x);							// 16진수로 입력 받기위해 %x를 사용

	printf("8진수로는 %#o입니다.\n", x);		// 8진수: %#o
	printf("10진수로는 %d입니다.\n", x);		//10진수: %d < 정수
	printf("16진수로는 %#x입니다.\n", x);		//16진수: %#x 

	return 0;
}