#include <stdio.h>

typedef struct employee {
	int num;
	char name[10];
	char number[20];
	int age;
}EMPLOYEE;

int main()
{
	EMPLOYEE employee_array[10] = { {1,"ȫ�浿1", "010-0000-0001", 20},
									{2,"ȫ�浿2", "010-0000-0002", 22},
									{3,"ȫ�浿3", "010-0000-0003", 24},
									{4,"ȫ�浿4", "010-0000-0004", 26},
									{5,"ȫ�浿5", "010-0000-0005", 28},
									{6,"ȫ�浿6", "010-0000-0006", 30},
									{7,"ȫ�浿7", "010-0000-0007", 32},
									{8,"ȫ�浿8", "010-0000-0008", 34},
									{9,"ȫ�浿9", "010-0000-0009", 36},
									{10,"ȫ�浿10", "010-0000-0010",38 } };
	
	for (int i = 0; i < 10; i++) {
		if (employee_array[i].age >= 20 && employee_array[i].age <= 30)
			printf("���: %d, �̸�: %s, ��ȭ��ȣ: %s, ����: %d\n", employee_array[i].num, employee_array[i].name, employee_array[i].number, employee_array[i].age);
	}

	return 0;
}