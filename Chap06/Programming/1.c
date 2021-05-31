#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char e;
	
	printf("문자를 입력하시오:");
	scanf("%c", &e);
	
	switch (e)
	{
		case 'a':
			break;
		case 'e':
			break;
		case 'i':
			break;
		case 'o':
			break;
		case 'u':
			break;
		default:
			printf("자음입니다.");
	}
	printf("모음 입니다.");

	return 0;
}