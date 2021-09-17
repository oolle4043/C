#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_tex(int income);

int main()
{
	int income;

	printf("소득을 입력하시오(만원): ");
	scanf("%d", &income);

	printf("소득세는 %d입니다.", get_tex(income));

	return 0;
}

int get_tex(income)
{
	int x;
	int y;

	if (income >= 1000) {
		x = (income - 1000) * 0.1;
		y = 1000 * 0.08;

		return x + y;
	}
	else if (income < 1000) {
		return income * 0.08;
	}
}