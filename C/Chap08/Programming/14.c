#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double get_distance(double x1, double y1, double x2, double y2);

int main()
{
	double x1, x2, y1, y2;
	double d;

	printf("첫번째 점의 좌표를 입력하시오(x, y): ");
	scanf("%lf %lf", &x1, &y1);
	printf("두번째 점의 좌표를 입력하시오(x, y): ");
	scanf("%lf %lf", &x2, &y2);

	d = get_distance(x1, y1, x2, y2);

	printf("두점 사이의 거리는 %lf 입니다.", d);

	return 0;
}

double get_distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}