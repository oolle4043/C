#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int str_chr(char* s, int c);

int main()
{
	char s[SIZE] = { '\0' };
	char c;

	printf("문자열을 입력하세요: ");
	gets(s);
	printf("갯수를 셀 문자를 입력하시오: ");
	scanf("%c", &c);

	printf("%c의 갯수: %d", c, str_chr(s, c));

	return 0;
}

int str_chr(char* s, int c)
{
	int count = 0;
	
	for (int i = 0; s[i] != NULL; i++) {
		if (s[i] == c)
			count++;
	}
	return count;
}