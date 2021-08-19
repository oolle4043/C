#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int print_value(int n);

int main()
{
	int n;

	while (1) {
		printf("값을 입력하시오(종료는 음수): ");
		scanf("%d", &n);

		print_value(n);

		if (n < 0) {
			break;
		}
	}
	return 0;
}

int print_value(int n)
{
	for (int i = 0; i < n; i++) {
		printf("*");
	}
	printf("\n");
}