#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month;

	printf("월 번호를 입력하시오:");
	scanf("%d", &month);

	switch (month)
	{
		case 1:
			printf("January");
			break;
		case 2:
			printf("February");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("may");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("July");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("October");
			break;
		case 11:
			printf("November");
			break;
		case 12:
			printf("December");
			break;
		default:
			printf("잘못된 번호입니다.");
			break;
	}
	
	return 0;
}