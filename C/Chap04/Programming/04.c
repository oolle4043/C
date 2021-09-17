#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double w;
	double h;
	double d;
	double v;

	printf("상자의 가로 세로 높이를 한번에 입력: ");
	scanf("%lf %lf %lf", &w, &h, &d);

	v = w * h * d;

	printf("상자의 부피는 %lf입니다.\n", v);

	return 0;
}