#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#if 0
#define  UP 0
#define  DOWN 1
#define  LEFT 2
#define  RIGHT 3
struct coordinate
{
	int x = 0;
	int y = 0;
};
struct coordinate food;
struct coordinate nSnake_coord[1000];
void WriteChar(int x, int y, const char* szbuf)
{

	HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);//获取一个输出句柄
	COORD stcPos = { x,y };
	//设置控制台光标位置
	SetConsoleCursorPosition(hStd, stcPos);
	//输出字符串
	printf(szbuf);
}
char GetOper()
{
	if (_kbhit())
	{
		return _getch();
	}
}
void food_coordinate() {
	srand((unsigned)time(NULL));
	int i = rand() % (1 + 29);
	int j = rand() % (1 + 59);
	food.x = i, food.y = j;
	WriteChar(food.x, food.y, "a");
}
void backgroudFile() {
	char nSpace[30][60] = { 0 };
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 60; j++) {
			nSpace[0][j] = '-';
			nSpace[29][j] = '-';
			nSpace[i][0] = '|';
			nSpace[i][59] = '|';
		}
	}
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 60; j++)
		{
			std::cout << nSpace[i][j];
		}
		printf("\n");
	}
}
#endif