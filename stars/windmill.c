#include <stdio.h>

int main()
{
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		for (int k = 0; k < 10 - i; k++) {
			printf(" ");
		}
		for (int z = 10; z > i; z--) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= 10; i++) {
		for (int j = 10; j > i; j--) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf(" ");
		for (int j = 1; j < i; j++) {
			printf(" ");
		}
		for (int j = 10; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}