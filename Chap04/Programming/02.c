#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;

	printf("16���� ������ �Է��Ͻÿ�: ");
	scanf("%x", &x);							// 16������ �Է� �ޱ����� %x�� ���

	printf("8�����δ� %#o�Դϴ�.\n", x);		// 8����: %#o
	printf("10�����δ� %d�Դϴ�.\n", x);		//10����: %d < ����
	printf("16�����δ� %#x�Դϴ�.\n", x);		//16����: %#x 

	return 0;
}