#include <stdio.h>
#define PI 3.14

int main()
{
	int l;	// 거리
	double radian;	// 각도
	double radius;	// 반지름

	printf("거리를 입력하시오: ");
	scanf_s("%d", &l);

	printf("각도를 입력하시오: ");
	scanf_s("%lf", &radian);

	radius = (360 * l) / (2 * PI * radian);
	
	printf("지구의 반지름은 %lf", radius);

	return 0;
}