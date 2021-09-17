#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check(pw);

int main()
{
	int pw, count;

	while (1)
	{
		printf("비밀번호: ");
		scanf("%d", &pw);

		count = check(pw);

		if (count == 1) {
			printf("로그인 성공");
			break;
		}
		else if (count == 2) {
			printf("로그인 횟수 초과");
			break;
		}
	}

	return 0;
}

int check(pw)
{
	static int count = 0;

	count++;

	if (pw == 1234) {
		return 1;
	}
	
	if (count == 3)
	{
		return 2;
	}
	else
		return 0;
}