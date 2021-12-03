#include <stdio.h>

typedef struct employee {
	int num;
	char name[10];
	char number[20];
	int age;
}EMPLOYEE;

int main()
{
	EMPLOYEE employee_array[10] = { {1,"È«±æµ¿1", "010-0000-0001", 20},
									{2,"È«±æµ¿2", "010-0000-0002", 22},
									{3,"È«±æµ¿3", "010-0000-0003", 24},
									{4,"È«±æµ¿4", "010-0000-0004", 26},
									{5,"È«±æµ¿5", "010-0000-0005", 28},
									{6,"È«±æµ¿6", "010-0000-0006", 30},
									{7,"È«±æµ¿7", "010-0000-0007", 32},
									{8,"È«±æµ¿8", "010-0000-0008", 34},
									{9,"È«±æµ¿9", "010-0000-0009", 36},
									{10,"È«±æµ¿10", "010-0000-0010",38 } };
	
	for (int i = 0; i < 10; i++) {
		if (employee_array[i].age >= 20 && employee_array[i].age <= 30)
			printf("»ç¹ø: %d, ÀÌ¸§: %s, ÀüÈ­¹øÈ£: %s, ³ªÀÌ: %d\n", employee_array[i].num, employee_array[i].name, employee_array[i].number, employee_array[i].age);
	}

	return 0;
}