// SNAKE.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "time.h"

using std::cout;
using std::endl;
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
struct coordinate nSnoke_coord[1000];
HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE); 
void WriteChar(int x, int y )
{

	//获取一个输出句柄
	COORD stcPos = { x,y };
	//设置控制台光标位置
	SetConsoleCursorPosition(hStd, stcPos);
	//输出字符串
	
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
	int i = rand() % (2 + 56);
	int j = rand() % (2 +26);
	food.x = i, food.y = j;
	WriteChar(food.x, food.y);
	printf("☆");
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
void hide()
{
	CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
	SetConsoleCursorInfo(hStd, &cursor_info);
}

#if 0
int judge() {
	for (int i = 0; i < 60; i++) {
		if ((nSnoke_coord[i].x == 0) || (nSnoke_coord[i].y == 0) || (nSnoke_coord[i].x == 60) || (nSnoke_coord[i].y == 30)) {
			printf("game over\n");
			printf("Your Failed\n");
			return 0;
		}
	}
	return 1;
}
#endif
int main()
{
	int n = 0;
	int nLive = 1;
	char cOper = 0;
	int nDir = UP;
	int x = 30;
	int y = 10;
	system("CLS");
	hide();
	backgroudFile();
	food_coordinate();
	for (int i = 0; i < 3; i++)
	{
		
		nSnoke_coord[i].x = 30+i, nSnoke_coord[i].y = 10;
		WriteChar(nSnoke_coord[i].x, nSnoke_coord[i].y);
		cout << "*";
	}
	Sleep(1000);
	while (nLive) {
		
		cOper = GetOper();
		switch (cOper) {
		case 'W':
		case 'w': {
			nDir = UP;
		}break;
		case 'S':
		case 's': {
			nDir = DOWN;
		}break;
		case 'A':
		case 'a': {
			nDir = LEFT;
		}break;
		case 'D':
		case 'd': {
			nDir = RIGHT;
		}
		}
		WriteChar(x, y);
		switch (nDir) {
		case UP:    y--;       break;
		case DOWN:  y++; break;
		case RIGHT: x++; break;
		case LEFT:  x--; break;
		}
	
		Sleep(200);
	}
	
	
	return 0;
}

