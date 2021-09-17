#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random();

int main()
{
	int reset = get_random();

	printf("초기화 실행\n");

	if (reset == 1) {
		for (int i = 0; i < 3; i++)
		printf("%d\n", rand());
	}

	return 0;
}

int get_random()
{
	static int reset;
	srand((unsigned)time(NULL));
	reset++;
	if (reset > 0) {
		return 1;
	}
}