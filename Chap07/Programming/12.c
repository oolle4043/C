#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, c, i, a = 0, b = 1;

	printf("���° �ױ��� ���ұ��? ");
	scanf("%d", &n);

	printf("0 1");
	
	for (i = 0; i < n-1; i++);
	{
		c = a + b;
		printf(" %d", c);
		a = b;
		b = c;
	}
	printf("%d", n);

	return 0;
}