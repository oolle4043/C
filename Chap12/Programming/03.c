#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int str_chr(char* s, int c);

int main()
{
	char s[SIZE] = { '\0' };
	char c;

	printf("���ڿ��� �Է��ϼ���: ");
	gets(s);
	printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &c);

	printf("%c�� ����: %d", c, str_chr(s, c));

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