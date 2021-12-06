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
	double result = 0;

	for (int i = 0; i < size; i++) {
		printf("번호를 입력하세요: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하세요: ");
		scanf("%s", &list[i].name);
		printf("성적을 입력하세요: ");
		scanf("%lf", &list[i].grade);
		printf("============================\n");
	}

	for (int i = 0; i < size; i++)
		result += list[i].grade;

	printf("학생 총 %d명의 평균 점수는 %lf입니다", size, result / size);

	free(list);

	return 0;
}