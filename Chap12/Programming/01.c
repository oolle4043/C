#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
	char c;
	
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &c);

	printf("�ƽ�Ű �ڵ尪 = %d", toascii(c));	// toacii �ƽ�Ű �ڵ�� �ٲٴ� �Լ�
	
	return 0;
}