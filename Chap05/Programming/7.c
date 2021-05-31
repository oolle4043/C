#include <stdio.h>

int main()
{
	int x, y, z;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);

	printf("2를 곱하고 싶은 횟수: ");
	scanf_s("%d", &y);

	z = x << y;		// 정수에 비트연산자 << 한번을 하면 2를 곱한값, >> 를 한번하면 2로 나눈값을 얻을 수 있다.

	printf("%d<<%d의 값: %d", x, y, z);

	return 0;
}