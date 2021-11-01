#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count(int x);

int main()
{
	int x;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	printf("자리수의 개수 : %d", count(x));

	return 0;
}

int count(int x)
{
	static int c;

	c++;

	if (x / 10 > 0) 
		count(x / 10);
	else
		return c;
}
