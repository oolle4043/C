#define _CRT_SECURE_NO_WARNINGS
#include <ctype.h>
#include <stdio.h>

int main()
{
	int c;

	printf("문자를 입력하시오: ");

	while ((c = getchar()) != '.')
	{
		if (islower(c)) {
			c = toupper(c);
			putchar(c);
			printf("\n문자를 입력하시오: ");
		}
		else if(isupper(c)){
			c = tolower(c);
			putchar(c);
			printf("\n문자를 입력하시오: ");
		}
		
	}

	return 0;
}