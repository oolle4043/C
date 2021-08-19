#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main()
{
	double e = 0;
	int n;

	printf("������ ����ұ��: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		e += (1.0 / factorial(i));
	}
	
	e = e + 1;

	printf("���Ϸ��� ���� %lf�Դϴ�.", e);
}

int factorial(int n)
{
	if (n == 1)
	{
		return n;
	}
	else
	{
		return (n * factorial(n - 1));
	}
}