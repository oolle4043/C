#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
	scanf("%d", &x);

	for (int i = 0; x > i; x--) {
		printf("%d ", x);
	}

	return 0;
}