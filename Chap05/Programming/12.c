#include <stdio.h>

int main()
{
	char a, b, c, d;
	unsigned int result = 0;
	
	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &a);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &b);

	printf("����° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &c);

	printf("�׹�° ���ڸ� �Է��Ͻÿ�: ");
	scanf(" %c", &d);
	
	result = result | d;
	result = result << 8;
	result = result | c;
	result = result << 8;
	result = result | b;
	result = result << 8;
	result = result | a;

	printf("�����: %x", result);
	
	return 0;
}