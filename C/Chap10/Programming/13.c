#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 32

int main()
{
	int binary[SIZE] = { 0 };
	int n;

	printf("nÀÇ °ª : ");
	scanf("%d", &n);
	printf("%d -> ", n);

	for (int i = 0; i < SIZE && n>0; i++)
	{
		binary[i] = n % 2;
		n = n / 2;
	}

	int i;
	for (i = SIZE - 1; i >= 0; i--)
	{
		if (binary[i] == 1)
		{
			break;
		}
	}
	for (; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}
	printf("\n");
	return 0;
}