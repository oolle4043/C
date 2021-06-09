#include <stdio.h>
#include <windows.h>	//SetConsoleCursorPosition, CursorView �� ����ϱ� ���� �������
#include <conio.h>	//kbhit() �� ����ϱ� ���� �������
#pragma warning(disable:4996)

void printMapBoundary();
void CursorView();
void setCursorPos();
void printMapBoundary();


int main()
{
	int currentPosX = 20;	// �������� ����
	int currentPosY = 11;

	CursorView(); // Ŀ�� ��Ȱ��ȭ

	printMapBoundary();

	setCursorPos(20, 11);	//���� ��ġ
	printf("��");

	setCursorPos(38, 22);	//������ ����
	printf("��");

	setCursorPos(33, 27); //Ŀ�� ��ġ ����



	while (1) {

		if (kbhit()) {	// 1. Ű���� �Է��� �����Ǹ�
			int tem = getch();	// �����Ⱚ �޴� ��
			int pressedKey = getch();	// 2. �ƽ�Ű �ڵ� ���� ��������
			switch (pressedKey) {	// 3. �Է¹��� Ű�� �ش��ϴ� ������ �����Ѵ�.
			case 72:	// ��
				setCursorPos(currentPosX, currentPosY);
				printf("  ");
				currentPosY -= 1;
				setCursorPos(currentPosX, currentPosY);
				printf("��");
				break;

			case 80:	// �Ʒ�
				setCursorPos(currentPosX, currentPosY);
				printf("  ");
				currentPosY += 1;
				setCursorPos(currentPosX, currentPosY);
				printf("��");
				break;

			case 75:	// ����
				setCursorPos(currentPosX, currentPosY);
				printf("  ");
				currentPosX -= 2;
				setCursorPos(currentPosX, currentPosY);
				printf("��");
				break;

			case 77:	// ������
				setCursorPos(currentPosX, currentPosY);
				printf("  ");
				currentPosX += 2;
				setCursorPos(currentPosX, currentPosY);
				printf("��");
				break;

			default:
				break;
			}
		}
		if (currentPosX == 38 && currentPosY == 22) {	// Finish point

			system("cls");

			printMapBoundary();

			setCursorPos(17, 11);
			printf("Finish~!");

			setCursorPos(30, 25);

			return 0;
		}
	}


	return 0;
}

void CursorView()	// Ŀ�� �����
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1; //Ŀ�� ���� (1 ~ 100)
	cursorInfo.bVisible = FALSE; //Ŀ�� Visible TRUE(����) FALSE(����)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void setCursorPos(int x, int y)	//�ܼ� ��ǥ ��ġ ����
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void printMapBoundary()
{
	printf("����������������������\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("��					��\n");
	printf("����������������������\n");
}