#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int user, com;

	printf("선택하시오: (1. 가위 2.바위 3.보)");
	scanf("%d", &user);

	srand((unsigned)time(NULL));
	
	com = rand() % 3 + 1;

	if (user == 1)
	{
		if (com == 1)
		{
			printf("비겼습니다.");
		}
		else if (com == 2)
		{
			printf("졌습니다.");
		}
		else if (com == 3)
		{
			printf("이겼습니다.");
		}
	}

	if (user == 2)
	{
		if (com == 1)
		{
			printf("이겼습니다.");
		}
		else if (com == 2)
		{
			printf("비겼습니다.");
		}
		else if (com == 3)
		{
			printf("졌습니다.");
		}
	}

	if (user == 3)
	{
		if (com == 1)
		{
			printf("졌습니다.");
		}
		else if (com == 2)
		{
			printf("이겼습니다.");
		}
		else if (com == 3)
			printf("비겼습니다.");
	}

	return 0;
}