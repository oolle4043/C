#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);

int main()
{
	int x, y;
	int* p_lcm;
	int* p_gcd;

	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	get_lcm_gcd(x, y, &p_lcm, &p_gcd);

	printf("최소공배수는 %d입니다.\n", p_lcm);
	printf("최대공약수는 %d입니다.\n", p_gcd);

	return 0;
}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	int r;
	int mul = x*y;

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	*p_gcd = x;
	*p_lcm = mul / *p_gcd;
}