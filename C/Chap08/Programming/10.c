#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main()
{
	int user;
	int com;
	char select;
	char temp;

	while (1) {
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
		scanf("%d", &user);

		scanf("%c", &temp);

		srand((unsigned)time(NULL));

		com = b_rand();

		if (user == com) {
			printf("�¾ҽ��ϴ�.\n");
		}
		else
	
			printf("Ʋ�Ƚ��ϴ�.\n");

		printf("����Ͻðڽ��ϱ�?(y �Ǵ� n): ");
		scanf("%c", &select);

		if (select == 'n') {
			break;
		}
	}
	return 0;
}

int b_rand()
{
	return rand() % 2;
}