#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 1;
	int sum = 0;

	while (i < 100)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("1���� 100 ������ ��� 3�� ����� ���� %d�Դϴ�.", sum);

	return 0;
}