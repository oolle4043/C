#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu();
int sum();
int subtraction();
int multiplication();
double division();
double remainder();

int main()
{
	int x, y, n;
	char a, temp;

	while (1)
	{
		menu();

		printf("원하는 메뉴를 선택하시오(1~5): ");
		scanf("%d", &n);
		printf("숫자 2개를 입력하시오: ");
		scanf("%d %d", &x, &y);

		if (n == 1) 
			printf("연산결과: %d\n", sum(x, y));

		else if (n == 2) 
			printf("연산결과: %d\n", subtraction(x, y));

		else if (n == 3) 
			printf("연산결과: %d\n", multiplication(x, y));

		else if (n == 4)
			printf("연산결과: %lf\n", division(x, y));

		else if (n == 5) 
			printf("연산결과: %lf\n", remainder(x, y));

		scanf("%c", &temp);
		printf("계속하려면 y를 멈추려면 n을 입력하세요: ");
		scanf("%c", &a);

		if (a == 'n') {
			break;
		}
	}
	


	return 0;
}

void menu()
{
	printf("====================\n");
	printf("	MENU	\n");
	printf("====================\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 나머지\n");
}

int sum(int x, int y)
{
	return x + y;
}

int subtraction(int x, int y)
{
	return x - y;
}

int multiplication(int x, int y)
{
	return x * y;
}

double division(int x, int y)
{
	return x / y;
}

double remainder(int x, int y)
{
	return x % y;
}