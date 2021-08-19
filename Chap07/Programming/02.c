#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 1;
	int sum = 0;

	while (i < 100)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("1부터 100 사이의 모든 3의 배수의 합은 %d입니다.", sum);

	return 0;
}