#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_multiple(int n, int m);

int main()
{
	int n, m;

	printf("ù��° ������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("�ι�° ������ �Է��Ͻÿ�: ");
	scanf("%d", &m);

	if (is_multiple(n, m) == 1) {
		printf("%d�� %d�� ����Դϴ�.", n, m);
	}
	else
		printf("%d�� %d�� ����� �ƴմϴ�.", n, m);

	return 0;
}

int is_multiple(int n, int m)
{
	if (n % m == 0) {
		return 1;
	}
	else
		return 0;
}