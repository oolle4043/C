#include <stdio.h>

int main()
{
	char a, b, c, d;
	unsigned int result = 0;
	
	printf("첫번째 문자를 입력하시오: ");
	scanf(" %c", &a);

	printf("두번째 문자를 입력하시오: ");
	scanf(" %c", &b);

	printf("세번째 문자를 입력하시오: ");
	scanf(" %c", &c);

	printf("네번째 문자를 입력하시오: ");
	scanf(" %c", &d);
	
	result = result | d;
	result = result << 8;
	result = result | c;
	result = result << 8;
	result = result | b;
	result = result << 8;
	result = result | a;

	printf("결과값: %x", result);
	
	return 0;
}