#include <stdio.h>

typedef struct food {
	char name[100];
	int calories;
}FOOD;

int main()
{
	FOOD food_array[3] = { {"밥",700},
							{"커피", 700},
							{"간식", 700} };

	printf("총 칼로리 = %d", food_array[0].calories + food_array[1].calories + food_array[2].calories);

	return 0;
}