#include <stdio.h>

int main()
{
	int cm, ft;
	double inch;

	printf("키를 입력하시오(cm): ");
	scanf_s("%d", &cm);

	ft = cm / 2.54 / 12;
	inch = (cm - ft * 2.54 * 12) / 2.54;
	
	
	printf("%dcm는 %d 피트 %lf인치 입니다.", cm, ft, inch);

	return 0;
}