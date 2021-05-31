#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

void disp_car(int car_number, int distance)
{
	int i;

	printf("CAR #%d", car_number);

	for (i = 0; i < distance; i++)
		printf("*");
	printf("\n");

}

int main()
{
	int i;
	int car1_dist = 0;
	int car2_dist = 0;

	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++) {
		car1_dist += rand() % 10;
		car2_dist += rand() % 10;

		disp_car(1, car1_dist);
		disp_car(2, car2_dist);

		printf("------------\n");
		_getch();
	}

	if (car1_dist > car2_dist) {
		printf("CAR #1 이 이겼습니다.");
	}

	else if (car1_dist < car2_dist) {
		printf("CAR #2 이 이겼습니다.");
	}
	else
		printf("비겼습니다.");

	return 0;
}