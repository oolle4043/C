#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main()
{
	char s[SIZE];
	char* s1[100];

	printf("문자열을 입력하시오: ");
	gets(s);

	s1[0] = strtok(s, " ");

	int i = 0;

	while (s1[i] != NULL) {
		s1[i + 1] = strtok(NULL, " ");
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
		printf("%s ", s1[j]);

	return 0;
}