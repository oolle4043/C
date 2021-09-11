#include <string.h>
#include <stdio.h>
#define SIZE 100

void space_delete(char str[]);

int main()
{
	char str[SIZE];

	printf("공백 문자가 있는 문자열을 입력하시오: ");
	gets(str);	// 문자열을 입력 받는 함수

	space_delete(str);

	return 0;
}

void space_delete(char str[])
{
	char del[] = " ";
	char* p = strtok(str, del);

	while (p != NULL) {
		printf("%s", p);
		p = strtok(NULL, del);
	}
}
