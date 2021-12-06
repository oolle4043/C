#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
	int number;
	char name[10];
	double grade;
}S;

int main()
{
	int size;

	printf("몇명을 입력하시겠습니까? ");
	scanf("%d", &size);
	printf("\n");

	S* list = malloc(sizeof(S) * size);
	S list_max;
	S list_min;

	for (int i = 0; i < size; i++) {
		printf("번호를 입력하세요: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하세요: ");
		scanf("%s", &list[i].name);
		printf("성적을 입력하세요: ");
		scanf("%lf", &list[i].grade);
		printf("============================\n");
	}

	list_max = list[0];
	list_min = list[0];

	for (int i = 1; i < size; i++) {
		if (list_max.grade < list[i].grade)
			list_max = list[i];
		else
			list_min = list[i];
	}

	printf("최고점수 학생\n번호: %d\n이름: %s\n점수: %lf\n", list_max.number, list_max.name, list_max.grade);
	printf("===============\n");
	printf("최저점수 학생\n번호: %d\n이름: %s\n점수: %lf\n", list_min.number, list_min.name, list_min.grade);



	free(list);

	return 0;
}