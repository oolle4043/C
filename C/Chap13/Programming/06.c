#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {
	int x, y;
};

int equal(struct point* p1, struct point* p2);

int main()
{
	struct point point1, point2;
	struct point* p1, * p2;

	p1 = &point1;
	p2 = &point2;

	p1->x = 1;
	p1->y = 2;
	p2->x = 3;
	p2->y = 5;

	if (equal(&p1, &p2) == 0)
		printf("(%d, %d) != (%d, %d)", p1->x, p1->y, p2->x, p2->y);
	else
		printf("(%d, %d) == (%d, %d)", p1->x, p1->y, p2->x, p2->y);


	return 0;
}

int equal(struct point* p1, struct point* p2)
{
	if ((p1->x == p2->x) && (p1->y == p2->y))
		return 1;
	else
		return 0;
}