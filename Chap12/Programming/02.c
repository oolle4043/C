#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#define SIZE 100

void space_delete(char str[]);

int main()
{
	char str[SIZE];

	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
	gets(str);	// ���ڿ��� �Է� �޴� �Լ�

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