#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_dice_face();

int main()
{
	get_dice_face();

	return 0;
}

void get_dice_face()
{
	srand((unsigned)time(NULL));
	static int d1, d2, d3, d4, d5, d6;

	int c;

	for (int i = 0; i < 100; i++) {
		c = rand() % 6 + 1;
		switch (c) {
		case 1:
			d1++;
			break;
		case 2:
			d2++;
			break;
		case 3:
			d3++;
			break;
		case 4:
			d4++;
			break;
		case 5:
			d5++;
			break;
		case 6:
			d6++;
			break;
		}
	}
	printf("1 -> %d\n2 -> %d\n3 -> %d\n4 -> %d\n5 -> %d\n6 -> %d\n", d1, d2, d3, d4, d5, d6);
}
