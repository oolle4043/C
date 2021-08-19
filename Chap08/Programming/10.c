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
		printf("앞면 또는 뒷면(1 또는 0): ");
		scanf("%d", &user);

		scanf("%c", &temp);

		srand((unsigned)time(NULL));

		com = b_rand();

		if (user == com) {
			printf("맞았습니다.\n");
		}
		else
	
			printf("틀렸습니다.\n");

		printf("계속하시겠습니까?(y 또는 n): ");
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