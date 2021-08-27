#define _CRT_SECURE_NO_WARNINGS
#include <ctype.h>
#include <stdio.h>
#define SIZE 40

void str_upper(char* s);

int main()
{
	char s[SIZE] = "";

	printf("문자열을 입력하시오: ");
	gets(s);

	printf("변환된 문자열: ");
	str_upper(s);

	return 0;
}

void str_upper(char* s)
{
	for (int i = 0; s[i] != NULL; i++) {
		s[i] = toupper(s[i]);
		printf("%c", s[i]);
	}
}