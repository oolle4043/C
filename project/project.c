#include <stdio.h>
#include <windows.h>	//SetConsoleCursorPosition, CursorView 를 사용하기 위한 헤더파일
#include <conio.h>	//kbhit() 를 사용하기 위한 헤더파일
#pragma warning(disable:4996)

void printMapBoundary();
void CursorView();
void setCursorPos();
void printMapBoundary();


int main()
{
	int currentPosX = 20;	// 시작지점 설정
	int currentPosY = 11;

	CursorView(); // 커서 비활성화

	printMapBoundary();

	setCursorPos(20, 11);	//시작 위치
	printf("■");

	setCursorPos(38, 22);	//도착지 설정
	printf("★");

	setCursorPos(33, 27); //커서 위치 수정



	while (1) {

		if (kbhit()) {	// 1. 키보드 입력이 감지되면
			int tem = getch();	// 쓰레기값 받는 곳
			int pressedKey = getch();	// 2. 아스키 코드 값을 가져오고
			switch (pressedKey) {	// 3. 입력받은 키에 해당하는 동작을 수행한다.
			case 72:	// 위
				setCursorPos(currentPosX, currentPosY);
				printf("  ");
				currentPosY -= 1;
				setCursorPos(currentPosX, currentPosY);
				printf("■");
				break;

			case 80:	// 아래
				setCursorPos(currentPosX, currentPosY);
				printf("  ");
				currentPosY += 1;
				setCursorPos(currentPosX, currentPosY);
				printf("■");
				break;

			case 75:	// 왼쪽
				setCursorPos(currentPosX, currentPosY);
				printf("  ");
				currentPosX -= 2;
				setCursorPos(currentPosX, currentPosY);
				printf("■");
				break;

			case 77:	// 오른쪽
				setCursorPos(currentPosX, currentPosY);
				printf("  ");
				currentPosX += 2;
				setCursorPos(currentPosX, currentPosY);
				printf("■");
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

void CursorView()	// 커서 숨기기
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1; //커서 굵기 (1 ~ 100)
	cursorInfo.bVisible = FALSE; //커서 Visible TRUE(보임) FALSE(숨김)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void setCursorPos(int x, int y)	//콘솔 좌표 위치 지정
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void printMapBoundary()
{
	printf("■■■■■■■■■■■■■■■■■■■■■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■					■\n");
	printf("■■■■■■■■■■■■■■■■■■■■■\n");
}