#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
	int x, y;
}P;

typedef struct circle {
	P center;	//원의 중심
	double radius;	//원의 반지름
}CIRCLE;

double area(CIRCLE c);
double perimeter(CIRCLE c);

int main()
{
	CIRCLE c;

	printf("원의 중심점: ");
	scanf("%d %d", &c.center.x, &c.center.y);

	printf("원의 반지름: ");
	scanf("%lf", &c.radius);

	printf("원의 면적 = %f, 원의 둘레 = %f\n", area(c), perimeter(c));

	return 0;
}

double area(CIRCLE c)
{
	return 3.14 * c.radius;
}

double perimeter(CIRCLE c)
{
	return 2 * 3.14 * c.radius;
}