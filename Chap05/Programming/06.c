#include <stdio.h>

int main()
{
	int x, y;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &x);
	
	y = x % 10;
	x = x / 10;
	

	printf("���� �ڸ�:%d\n���� �ڸ�:%d\n", x, y);

	return 0;
}