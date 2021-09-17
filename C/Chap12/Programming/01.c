#include <stdio.h>
#include <ctype.h>

int main()
{
	char c;
	
	printf("문자를 입력하시오: ");
	scanf("%c", &c);

	printf("아스키 코드값 = %d", toascii(c));	// toacii 아스키 코드로 바꾸는 함수
	
	return 0;
}
