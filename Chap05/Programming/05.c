#include <stdio.h>

int main()
{
	int x, y;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);
	
	y = x % 10;
	x = x / 10;
	

	printf("십의 자리:%d\n일의 자리:%d\n", x, y);

	return 0;
}