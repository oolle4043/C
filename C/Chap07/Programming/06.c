#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;
	int result = 0;
	char op;

	printf("****************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quit\n");
	printf("****************\n");

	do
	{
		printf("연산을 선택하시오:");
		scanf("\n%c", &op);

		if (op == 'Q')
			break;

		printf("두수를 공백으로 분리하여 입력하시오: ");
		scanf("%d %d", &x, &y);

		if (op == 'A')
		{
			result = x + y;
		}
		 if (op == 'S')
		{
			result = x - y;
		}
		if (op == 'M')
		{
			result = x * y;
		}
		if (op == 'D')
		{
			result = x / y;
		}
		

		printf("%d\n", result);

	} while (1);

	return 0;
}