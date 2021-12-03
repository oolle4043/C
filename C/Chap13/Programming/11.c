#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct list {
	char name[10];
	char home_num[20];
	char phone_num[20];
}LIST;

int main()
{
	LIST list_array[3];
	char search_name[10];

	for (int i = 0; i < 3; i++) {
		printf("이름을 입력하시오: ");
		scanf("%s", list_array[i].name);
		printf("집전화번호를 입력하시오: ");
		scanf("%s", list_array[i].home_num);
		printf("휴대폰번호를 입력하시오: ");
		scanf("%s", list_array[i].phone_num);
	}

	printf("검색할 이름을 입력하시오: ");
	scanf("%s", search_name);

	for (int i = 0; i < 3; i++) {
		if (strcmp(list_array[i].name, search_name) == 0)
			printf("집전화번호: %s\n휴대폰번호: %s", list_array[i].home_num, list_array[i].phone_num);
	}
	  
	return 0;
}