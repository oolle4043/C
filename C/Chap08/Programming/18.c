#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu();
int sum();
int subtraction();
int multiplication();
double division();
double remainder();

int main()
{
	int x, y, n;
	char a, temp;

	while (1)
	{
		menu();

		printf("���ϴ� �޴��� �����Ͻÿ�(1~5): ");
		scanf("%d", &n);
		printf("���� 2���� �Է��Ͻÿ�: ");
		scanf("%d %d", &x, &y);

		if (n == 1) 
			printf("������: %d\n", sum(x, y));

		else if (n == 2) 
			printf("������: %d\n", subtraction(x, y));

		else if (n == 3) 
			printf("������: %d\n", multiplication(x, y));

		else if (n == 4)
			printf("������: %lf\n", division(x, y));

		else if (n == 5) 
			printf("������: %lf\n", remainder(x, y));

		scanf("%c", &temp);
		printf("����Ϸ��� y�� ���߷��� n�� �Է��ϼ���: ");
		scanf("%c", &a);

		if (a == 'n') {
			break;
		}
	}
	


	return 0;
}

void menu()
{
	printf("====================\n");
	printf("	MENU	\n");
	printf("====================\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ������\n");
}

int sum(int x, int y)
{
	return x + y;
}

int subtraction(int x, int y)
{
	return x - y;
}

int multiplication(int x, int y)
{
	return x * y;
}

double division(int x, int y)
{
	return x / y;
}

double remainder(int x, int y)
{
	return x % y;
}