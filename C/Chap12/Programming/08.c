#include <stdio.h>
#include <string.h>
#define SIZE 100

int main()
{
	char s[SIZE] = "";
	char space[] = " ";

	printf("문자열을 입력하시오: ");
	gets(s);

	char* token = strtok(s, space);
	int count = 0;

	while (token != NULL){
		count++;
		token = strtok(NULL, space);
	}

	printf("단어의 수는 %d입니다.", count);

	return 0;
}
