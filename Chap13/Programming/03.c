#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct email {
	char title[100];
	char sender[100];
	char receiver[100];
	char content[100];
	int year;
	int month;
	int day;
	int pri;
};

int main()
{
	struct email e;
	
	strcpy(e.title, "안부 메일");
	strcpy(e.sender, "chulsoo@hankuk.ac.kr");
	strcpy(e.receiver, "hsh@hankuk.ac.kr");
	strcpy(e.content, "안녕하십니까? 별일 없으신지요?");
	e.year = 2010;
	e.month = 9;
	e.day = 1;
	e.pri = 1;

	printf("제목: %s\n수신자: %s\n발신자: %s\n내용: %s\n날짜: %d/%d/%d\n우선순위: %d", e.title, e.sender, e.receiver, e.content, e.year, e.month, e.day, e.pri);

	return 0;
}