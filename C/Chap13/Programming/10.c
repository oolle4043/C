#include <stdio.h>

typedef struct employee {
	int num;
	char name[10];
	char number[20];
	int age;
}EMPLOYEE;

int main()
{
	EMPLOYEE employee_array[10] = { {1,"홍길동1", "010-0000-0001", 20},
									{2,"홍길동2", "010-0000-0002", 22},
									{3,"홍길동3", "010-0000-0003", 24},
									{4,"홍길동4", "010-0000-0004", 26},
									{5,"홍길동5", "010-0000-0005", 28},
									{6,"홍길동6", "010-0000-0006", 30},
									{7,"홍길동7", "010-0000-0007", 32},
									{8,"홍길동8", "010-0000-0008", 34},
									{9,"홍길동9", "010-0000-0009", 36},
									{10,"홍길동10", "010-0000-0010",38 } };
	
	for (int i = 0; i < 10; i++) {
		if (employee_array[i].age >= 20 && employee_array[i].age <= 30)
			printf("사번: %d, 이름: %s, 전화번호: %s, 나이: %d\n", employee_array[i].num, employee_array[i].name, employee_array[i].number, employee_array[i].age);
	}

	return 0;
}