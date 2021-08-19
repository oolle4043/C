#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	int n;
	int result;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	if (even(n)) {
		printf("even()�� ���: ¦��\n");
	}
	else {
		printf("even()�� ���: Ȧ��\n");
	}

	printf("absolute()�� ���: %d\n", absolute(n));

	result = sign(n);
	switch (result) {
	case 1:
		printf("sign()�� ���: ���\n");
		break;
	case 0:
		printf("sign()�� ���: 0\n");
		break;
	case -1:
		printf("sign()�� ���: ���\n");
		break;
	}

	return 0;
}

int even(int n)
{
	if (n % 2 == 0) {
		return 1;
	}
	else
		return 0;
}

int absolute(int n)
{
	return (n > 0) ? n : -n;
}

int sign(int n)
{
	if (n > 0) {
		return 1;
	}
	else if (n == 0) {
		return 0;
	}
	else
		return -1;
}