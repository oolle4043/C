#include <stdio.h>
#include <string.h>
#define SIZE 100

int main() {
	char s[SIZE];
	int size;

	puts("광고하고 싶은 텍스트를 입력하시오: ");
	gets(s);

	size = strlen(s);

	puts("======================");

	for (int i = 0; i < size; i++) {
		for (int j = i; j < (i + size); j++) {
			if (j < size)
				putchar(s[j]); else {
				putchar(s[j - size]);
			}
		}
		putchar('\n');
	}

	return 0;

}