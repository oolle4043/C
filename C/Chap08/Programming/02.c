#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check_alpha(char x);

int main()
{
	char x;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &x);

	check_alpha(x);

		return 0;
}

void check_alpha(char x)
{
	if (x >= 'a' && x <= 'z') {
		printf("%c�� ���ĺ� �����Դϴ�.", x);
	}
	else if (x >= 'A' && x <= 'Z') {
		printf("%c�� ���ĺ� �����Դϴ�.", x);
	}

}