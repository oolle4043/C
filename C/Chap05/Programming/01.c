#include <stdio.h>

int main()
{
	int x, y, result, result_2;

	printf("2���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);

	result = x / y;
	result_2 = x % y;
	printf("��: %d ������: %d\n", result, result_2);
	
	return 0;
}