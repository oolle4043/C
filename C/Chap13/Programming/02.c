#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct account {
	int number;
	char name[20];
	int balance;
};

int main()
{
	struct account a;

	a.number = 1;
	strcpy(a.name, "홍길동");
	a.balance = 10000;

	printf("{%d, %s, %d}", a.number, a.name, a.balance);

	return 0;
}