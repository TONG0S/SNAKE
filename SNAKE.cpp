// SNAKE.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "time.h"
#pragma comment(lib,"winmm.lib")
using std::cout;
using std::endl;
#define  UP 0
#define  DOWN 1
#define  LEFT 2
#define  RIGHT 3
int Lenght = 3;
int x = 30;  
int y = 10;
bool e = true;
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
//判断是否按下，并以无回显的方式获取一个按键
char GetOper()
{
	if (_kbhit())
	{
		return _getch();
	}
}
//中文输入及其他设置
void putSet() {
	keybd_event(VK_SHIFT, 0, 0, 0);
	Sleep(100);
	keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0);
	PlaySoundA("E:\\ruanjian\\daima\\vs\\C_preject\\procedure\\SNAKE\\Mermaid_MiyanoMamoru.wav", NULL, SND_ASYNC | SND_NODEFAULT);

}
//随机一个果实的位置；
void food_coordinate() {
	srand((unsigned)time(NULL));
	int i = rand() % (2 + 56);
	int j = rand() % (2 +26);
	food.x = i, food.y = j;
	WriteChar(food.x, food.y);
	printf("o");
}
//蛇的长度与坐标，蛇头位置单独拿出。方便方向定位
void nSnoke_height() {
	nSnoke_coord[0].x = x;
	nSnoke_coord[0].y = y;
	WriteChar(nSnoke_coord[0].x, nSnoke_coord[0].y);
	cout << "@";
	for (int i = 1; i < Lenght; i++)
	{

		
		WriteChar(nSnoke_coord[i].x, nSnoke_coord[i].y);
		cout << "*";
	}
}
//背景30*60
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
//隐藏光标 windows.h
void hide()
{
	CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
	SetConsoleCursorInfo(hStd, &cursor_info);
}

#if 1
void  judge() {
	for (int i = 0,j=1; i < Lenght; i++) {
		if ((nSnoke_coord[i].x == 0) || (nSnoke_coord[i].y == 0) || (nSnoke_coord[i].x == 60) || (nSnoke_coord[i].y == 30)) {
			printf("game over\n");
			printf("Your Failed\n");
			e=false;
		}
		if ((nSnoke_coord[0].x == nSnoke_coord[j].x) && (nSnoke_coord[0].y == nSnoke_coord[j].y)) {
			e = false;
			j++;
			printf("game over\n");
			printf("Your Failed\n");
		}
	}
	;
}
#endif
int main()
{
	int n = 0;
	int nLive = 1;
	char cOper = 0;
	
	int nDir = UP;
	putSet();
	for (int i = 1; i < Lenght; i++)
	{
		nSnoke_coord[i].x = x+i;
		nSnoke_coord[i].y = y;
		//cout << "*";
	}
	system("CLS");
	printf("\n");
	backgroudFile();

	system("pause");
	hide();
//	while (e = true) {
		food_coordinate();
		
		Sleep(1000);
		food_coordinate();
		
		while (e = true) {
		
			
			nSnoke_height();
			judge();
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
			WriteChar(nSnoke_coord[Lenght - 1].x, nSnoke_coord[Lenght - 1].y);
			cout << " ";
			switch (nDir) {
			case UP:    y--;       break;
			case DOWN:  y++; break;
			case RIGHT: x++; break;
			case LEFT:  x--; break;
			}
			if ((nSnoke_coord[0].x == food.x) && (nSnoke_coord[0].y == food.y)) {
				Lenght += 1;
				food_coordinate();
				nSnoke_coord[Lenght - 1] = nSnoke_coord[Lenght - 2];
			}
			for (int i = Lenght - 1; i > 0; i--) {
				nSnoke_coord[i] = nSnoke_coord[i - 1];
			}
			
			
			//WriteChar(x, y);
			//cout << "*";
			
			
			Sleep(200);
			//nSnoke_coord[Lenght].x = x;
			//nSnoke_coord[Lenght].y = y;
		}
		
	
	return 0;
}

