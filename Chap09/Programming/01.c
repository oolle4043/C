#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	static int sum_count;
	static int sub_count;
	static int mul_count;
	static int div_count;
	int x, y;
	char c;

	while (1)
	{
		printf("연산을 입력하시오: ");
		scanf("%d %c %d", &x, &c, &y);

		switch (c) {
		case '+':
			sum_count++;
			printf("덧셈은 총 %d번 실행되었습니다.\n", sum_count);
			printf("연산결과: %d\n", x + y);
			break;
		case '-':
			sub_count++;
			printf("뺄셈은 총 %d번 실행되었습니다.\n", sub_count);
			printf("연산결과: %d\n", x - y);
			break;
		case '*':
			mul_count;
			printf("곱셈은 총 %d번 실행되었습니다.\n", mul_count);
			printf("연산결과: %d\n", x * y);
			break;
		case '/':
			div_count;
			printf("나눗셈은 총 %d번 실행되었습니다.\n", div_count);
			printf("연산결과: %f\n", x / y);
			break;
		}
	}

	return 0;
}