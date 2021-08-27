#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 5

int get_respones(char* prompt);

int main()
{
	char prompt[SIZE] = "";

	printf("게임을 하시겠습니까?: ");
	gets(prompt);

	if (get_respones(prompt) == 1)
		printf("긍정적인 대답");
	else if (get_respones(prompt) == 0)
		printf("부정적인 대답");

	return 0;
}

int get_respones(char* prompt)
{
	int n;
	char yes[] = "yes";
	char ok[] = "ok";
	char no[] = "no";

	for (int i = 0; prompt[i] != NULL; i++)
		prompt[i] = tolower(prompt[i]);

	if (strcmp(prompt, yes) == 0)
		return 1;
	else if (strcmp(prompt, ok) == 0)
		return 1;
	else
		return 0;

}