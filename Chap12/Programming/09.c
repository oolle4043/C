#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int main()
{
	char s[SIZE] = "";

	printf("텍스트를 입력하세요: ");
	gets(s);

	if (islower(s[0]))
		s[0] = toupper(s[0]);

	s[strlen(s)] += '.';

	printf("수정된 텍스트: %s", s);

	return 0;
}