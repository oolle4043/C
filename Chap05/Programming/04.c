#include <stdio.h>

int main()
{
	int cm, ft;
	double inch;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf_s("%d", &cm);

	ft = cm / 2.54 / 12;
	inch = (cm - ft * 2.54 * 12) / 2.54;
	
	
	printf("%dcm�� %d ��Ʈ %lf��ġ �Դϴ�.", cm, ft, inch);

	return 0;
}