#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
	int num;
	char name[20];
	double grade;
}S;

int main()
{
	int size;
	char bir[20];
	S temp;

	printf("몇명을 입력하시겠습니까?: ");
	scanf("%d", &size);

	printf("=================\n");

	S* list = malloc(sizeof(S) * size);

	for (int i = 0; i < size; i++) {
		printf("번호: ");
		scanf("%d", &list[i].num);
		printf("이름: ");
		scanf("%s", list[i].name);
		printf("성적: ");
		scanf("%lf", &list[i].grade);
		printf("=================\n");
	}

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (strcmp(list[i].name, list[j].name) > 0) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		printf("번호: %d,이름: %s,성적: %lf\n", list[i].num, list[i].name, list[i].grade);
	}

	free(list);

	return 0;
}