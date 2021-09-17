#include <stdio.h>
#define PI 3.141592

int main()
{
	double radius;	//반지름
	double area;	// 표면적
	double volume;	// 부피


	printf("구의 반지름을 입력하시오: ");
	scanf_s("%lf", &radius);

	area = 4 * PI * radius * radius;
	volume = (4.0 / 3.0) * PI * radius * radius * radius;


	printf("표면적은 %f입니다.\n", area);
	printf("체적은 %f입니다.\n", volume);

	return 0;
}