#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int weight, height, standard;

	printf("ü�߰� Ű�� �Է��ϼ���:");
	scanf("%d %d", &weight, &height);

	standard = (height - 100) * 0.9;

	if (weight < standard)
	{
		printf("��ü�� �Դϴ�.");
	}
	else if (weight == standard)
	{
		printf("ǥ�� �Դϴ�.");
	}
	else if (weight > standard)
	{
		printf("��ü���Դϴ�.");
	}

	return 0;
}