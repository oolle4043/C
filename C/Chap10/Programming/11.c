#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[] = { 1,1,2,2,3,3,4,4,5,5 };

	int num, place;

	printf("��ǰ ��ȣ�� �Է��Ͻÿ�:");
	scanf("%d", &num);

	for (int i = 0; i < 10; i++)
	{
		if (i + 1 == num)
			place = arr[i];
	}
	printf("��ǰ ��ȣ %d�� ��ġ�� %d�Դϴ�.\n", num, place);

	return 0;
}