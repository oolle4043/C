#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int main()
{
	char s[SIZE] = { '\0'};

	printf("문자열을 입력하시오: ");
	gets(s);

	for (int i = 65; i <= 90; i++)
	{
		printf("%c: %d\n", i, str_chr(s, i));
	}

	for (int i = 97; i <= 122; i++)
	{
		printf("%c: %d\n", i, str_chr(s, i));
	}

	return 0;
}

int str_chr(char* s, int c)
{
	int count = 0;
	for (int i = 0; s[i] != NULL; i++)
	{
		if (s[i] == c)
			count++;
	}
	return count;
}