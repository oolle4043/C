#include <stdio.h>

int main()
{
	int x, y, result, result_2;

	printf("2개의 정수를 입력하시오: ");
	scanf_s("%d %d", &x, &y);

	result = x / y;
	result_2 = x % y;
	printf("몫: %d 나머지: %d\n", result, result_2);
	
	return 0;
}