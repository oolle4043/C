#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main()
{
	char s[SIZE];
	int count = 0;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets(s);

	for (int i = 0; s[i] != NULL; i++) {
		if (s[i] == '.')
			count++;
	}

	printf("�������� ������ %d �Դϴ�.", count);

	return 0;
}