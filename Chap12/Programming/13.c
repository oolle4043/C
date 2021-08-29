#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main()
{
	char s[SIZE];
	int count = 0;

	printf("문자열을 입력하시오: ");
	gets(s);

	for (int i = 0; s[i] != NULL; i++) {
		if (s[i] == '.')
			count++;
	}

	printf("구두점의 개수는 %d 입니다.", count);

	return 0;
}