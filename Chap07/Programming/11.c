#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int m;
	int result = 0;

	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		m = i * i;
		result += m;
	}

	printf("��갪�� %d�Դϴ�.", result);

	return 0;
}