#include <stdio.h>
#define PI 3.141592

int main()
{
	double radius;	//������
	double area;	// ǥ����
	double volume;	// ����


	printf("���� �������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &radius);

	area = 4 * PI * radius * radius;
	volume = (4.0 / 3.0) * PI * radius * radius * radius;


	printf("ǥ������ %f�Դϴ�.\n", area);
	printf("ü���� %f�Դϴ�.\n", volume);

	return 0;
}