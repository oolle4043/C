#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age, height;

	printf("Ű�� �Է��Ͻÿ�:");
	scanf("%d", &height);
	printf("���̸� �Է��Ͻÿ�:");
	scanf("%d", &age);

	if (height >= 140 && age >= 10)
		printf("Ÿ�� �����ϴ�.\n");

	else
		printf("�˼��մϴ�.\n");
	
	
	return 0;
}