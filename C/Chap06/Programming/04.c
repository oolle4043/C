#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int user, com;

	printf("�����Ͻÿ�: (1. ���� 2.���� 3.��)");
	scanf("%d", &user);

	srand((unsigned)time(NULL));
	
	com = rand() % 3 + 1;

	if (user == 1)
	{
		if (com == 1)
		{
			printf("�����ϴ�.");
		}
		else if (com == 2)
		{
			printf("�����ϴ�.");
		}
		else if (com == 3)
		{
			printf("�̰���ϴ�.");
		}
	}

	if (user == 2)
	{
		if (com == 1)
		{
			printf("�̰���ϴ�.");
		}
		else if (com == 2)
		{
			printf("�����ϴ�.");
		}
		else if (com == 3)
		{
			printf("�����ϴ�.");
		}
	}

	if (user == 3)
	{
		if (com == 1)
		{
			printf("�����ϴ�.");
		}
		else if (com == 2)
		{
			printf("�̰���ϴ�.");
		}
		else if (com == 3)
			printf("�����ϴ�.");
	}

	return 0;
}