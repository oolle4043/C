#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check_alpha(char x);

int main()
{
	char x;

	printf("문자를 입력하시오: ");
	scanf("%c", &x);

	check_alpha(x);

		return 0;
}

void check_alpha(char x)
{
	if (x >= 'a' && x <= 'z') {
		printf("%c는 알파벳 문자입니다.", x);
	}
	else if (x >= 'A' && x <= 'Z') {
		printf("%c는 알파벳 문자입니다.", x);
	}

}