#include <stdio.h>

int main()
{
	int x, y, z;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &x);

	printf("2�� ���ϰ� ���� Ƚ��: ");
	scanf_s("%d", &y);

	z = x << y;		// ������ ��Ʈ������ << �ѹ��� �ϸ� 2�� ���Ѱ�, >> �� �ѹ��ϸ� 2�� �������� ���� �� �ִ�.

	printf("%d<<%d�� ��: %d", x, y, z);

	return 0;
}