#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double n;
	int r;
	double result = 1.0;

	printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &n);
	printf("�ŵ�����Ƚ���� �Է��Ͻÿ�: ");
	scanf("%d", &r);

	for (int i = 1; i <= r; i++) {
		
		result *= n;
		
	}
	printf("������� %lf", result);

	return 0;
}