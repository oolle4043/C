#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;

	while (1)
	{
		if (sum > 10000) {
			sum -= i;
			i--;
			break;
		}
		sum += (i+1);
		i++;	
	}
	printf("1���� %d������ ���� %d �Դϴ�.\n", i, sum);

	return 0;
}