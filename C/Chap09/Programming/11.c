#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int recursive(int n);

int main()
{
	int n, k;

	printf("n=");
	scanf("%d", &n);

	printf("k=");
	scanf("%d", &k);

	printf("%d\n", recursive(n, k));

	return 0;
}


int recursive(int n, int k)
{
	if (0 < k && k < n)
		return recursive(n - 1, k - 1) + recursive(n - 1, k);
	if (k == 0 || k == n)
		return 1;
}