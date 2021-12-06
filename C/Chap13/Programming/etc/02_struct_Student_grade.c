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
	S temp;

	for (int i = 0; i < size; i++) {
		printf("번호를 입력하세요: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하세요: ");
		scanf("%s", list[i].name);
		printf("성적을 입력하세요: ");
		scanf("%lf", &list[i].grade);
		printf("============================\n");
	}

	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (list[i].grade < list[j].grade)
			{
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	printf("성적순 리스트\n");
	for (int i = 0; i < size; i++)
		printf("번호:%d 이름: %s 점수: %lf\n", list[i].number, list[i].name, list[i].grade);

	free(list);

	return 0;
}
