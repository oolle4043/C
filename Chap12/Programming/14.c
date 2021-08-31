#include <stdio.h>
#include <string.h>
#define SIZE 80

int main()
{
	char s[SIZE];
	char search[SIZE];
	char change[SIZE];
	char* token;

	printf("문자열을 입력하시오: ");
	gets(s);
	printf("찾을 문자열: ");
	gets(search);
	printf("바꿀 문자열: ");
	gets(change);

	token = strtok(s, " ");
	
	printf("수정된 문자열: ");

	for (int i = 0; token != NULL; i++) {
		if (!strcmp(search, token))
			printf("%s ", change);
		else
			printf("%s ", token);

		token = strtok(NULL, " ");
	}

	

	return 0;
}
