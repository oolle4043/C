#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int main()
{
	char s[SIZE] = "";
	int n = 0;

	printf("문자열을 입력하시오: ");
	gets(s);

	for (int i = 0; s[i] != NULL; i++) {
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
	}
	for (int i = 0; i < strlen(s) / 2; i++) {
		if (s[i] == s[strlen(s) - i - 1])
			continue;
		else
			n++;
	}

	if (n == 0)
		printf("회문입니다.");
	else
		printf("회문이 아닙니다.");

	return 0;
}