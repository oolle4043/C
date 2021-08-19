#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
		}
	}

	return 0;
}