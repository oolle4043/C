#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_int(int* px, int* py);

int main()
{
	int x, y;
	int* px = &x, * py = &y;

	get_int(px, py);

	printf("������ ���� %d", x + y);
	
	return 0;
}

void get_int(int* px, int* py)
{
	printf("2���� ������ �Է��Ͻÿ�(��: 10 20): ");
	scanf("%d %d", px, py);
}