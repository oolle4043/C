#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m;		// m = 질량
	int s;		// s = 속도
	double e;	// e = 에너지	

	printf("질량(Kg): ");
	scanf("%d", &m);

	printf("속도(m/s): ");
	scanf("%d", &s);

	e = 0.5 * m * s * s;

	printf("운동에너지(J): %lf", e);

	return 0;
}