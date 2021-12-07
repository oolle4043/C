#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main()
{
	int x = 100, y = 200;
	int sum = 0;
	int diff = 0;

	get_sum_diff(x, y, &sum, &diff);

	printf("원소들의 합 = %d\n원소들의 차 = %d\n", sum, diff);

	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}
