#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_dice_face();

int main()
{
	srand((unsigned)time(NULL));

	get_dice_face();

	return 0;
}

void get_dice_face()
{
	static int d_1;
	static int d_2;
	static int d_3;
	static int d_4;
	static int d_5;
	static int d_6;
	int c;
	
	for (int i = 0; i < 100; i++) {
		c = rand() % 6 + 1;
		switch (c) {
		case 1:
			d_1++;
			break;
		case 2:
			d_2++;
			break;
		case 3:
			d_3++;
			break;
		case 4:
			d_4++;
			break;
		case 5:
			d_5++;
			break;
		case 6:
			d_6++;
			break;
		}
	}
	printf("1 -> %d\n2 -> %d\n3 -> %d\n4 -> %d\n5 -> %d\n6 -> %d\n", d_1, d_2, d_3, d_4, d_5, d_6);
}