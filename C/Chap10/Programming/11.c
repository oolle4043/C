#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[] = { 1,1,2,2,3,3,4,4,5,5 };

	int num, place;

	printf("상품 번호를 입력하시오:");
	scanf("%d", &num);

	for (int i = 0; i < 10; i++)
	{
		if (i + 1 == num)
			place = arr[i];
	}
	printf("상품 번호 %d의 위치는 %d입니다.\n", num, place);

	return 0;
}