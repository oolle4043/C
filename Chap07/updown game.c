#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));
	int answer = (rand() % 100) + 1;
	int guess;
	int tries = 0;

	do
	{
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);

		tries++;

		if (guess > answer)
			printf("Down\n");
		if (guess < answer)
			printf("UP\n");
	} while (guess != answer);

	printf("축하합니다.시도횟수 = %d \n", tries);

	return 0;
}