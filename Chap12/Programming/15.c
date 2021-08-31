#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10

int main()
{
	char calculate[SIZE];
	int x, y, result;

	printf("연산을입력하시오: ");
	scanf("%s %d %d",&calculate, &x, &y);

	if (!strcmp(calculate, "add"))
		printf("연산결과: %d", x + y);
	else if (!strcmp(calculate, "sub"))
		printf("연산결과: %d", x - y);
	else if (!strcmp(calculate, "mul"))
		printf("연산결과: %d", x * y);
	else if (!strcmp(calculate, "div"))
		printf("연산결과: %lf", (double)x / y);

	return 0;
}