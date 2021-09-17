#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int main()
{
	char s[SIZE];
	char* token;
	char str[SIZE][SIZE];

	printf("성과 이름을 대문자로 입력하시오: ");
	gets(s);

	for (int i = 0; s[i] != NULL; i++)
		s[i] = tolower(s[i]);

	token = strtok(s, " ");

	for (int i = 0; token != NULL; i++) {
		strcpy(str[i], token);
		token = strtok(NULL, " ");
	}

	printf("%s, %s", str[1], str[0]);

	return 0;
}
