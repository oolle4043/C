#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	do
	{
		printf("막대의 높이(종료: -1): ");
		scanf("%d", &n);

		if (n == -1)
			break;

		for (int i = 0; i <= n; i++) {
			printf("*");
		}
		printf("\n");
	} while (1);

	return 0;
}