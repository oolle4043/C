#include <stdio.h>

int main()
{
	int x, y, z;
	int max;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &x, &y, &z);

	max = (x > y) ? x : y;
	max = (max > z) ? max : z;

	printf("�ִ밪 %d", max);


	return 0;
}