#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int weight, height, standard;

	printf("체중과 키를 입력하세요:");
	scanf("%d %d", &weight, &height);

	standard = (height - 100) * 0.9;

	if (weight < standard)
	{
		printf("저체중 입니다.");
	}
	else if (weight == standard)
	{
		printf("표준 입니다.");
	}
	else if (weight > standard)
	{
		printf("과체중입니다.");
	}

	return 0;
}