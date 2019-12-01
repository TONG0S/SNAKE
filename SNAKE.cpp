// SNAKE.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include <time.h>
#include "fileInfo.h"
using std::cout;
using std::endl;
//全局调用的

#if 1

//class scoreSnake {
//public:
//	scoreSnake() {
//		
//	}
//

//int score;
//};
#endif

int main()
{
	
	
	//int nLive = 1;
	
	char cOper = 0;        //方向
	Lenght = 3;            //蛇的初始长度
	x = 30;
	y = 10;
	int nDir = UP;
	putSet();             //背景音乐
	dealAcc();            //登录注册
	system("CLS");
	for (int i = 1; i < Lenght; i++)
	{
		nSnake_coord[i].x = x + i;
		nSnake_coord[i].y = y;

	}
	
	dealAcc();
	system("CLS");
	
	select_mode();
	Snakefont();
	WriteChar(5, 36);
	system("pause");
	
	hide();         //隐藏光标

	food_coordinate();//果子
	//Sleep(1000);
	//food_coordinate();
	while (e == true) {
		//coordinate *nSnake_coord = (coordinate *)calloc(Lenght * sizeof(coordinate), 1);
		nSnake_height();
		judge();
		Snakescore();//分数函数
		SnakeLevel();
		
		cOper = GetOper();
		//
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
		WriteChar(nSnake_coord[Lenght - 1].x, nSnake_coord[Lenght - 1].y);
		cout << " ";
		switch (nDir) {
		case UP:    y--;       break;
		case DOWN:  y++; break;
		case RIGHT: x++; break;
		case LEFT:  x--; break;
		}
		if ((nSnake_coord[0].x == food.x) && (nSnake_coord[0].y == food.y)) {
			Lenght += 1;
			score += 10;
			food_coordinate();
			nSnake_coord[Lenght - 1] = nSnake_coord[Lenght - 2];
		}
		for (int i = Lenght - 1; i > 0; i--) {
			nSnake_coord[i] = nSnake_coord[i - 1];
		}
		//WriteChar(x, y);
		//cout << "*";
		SnakeSpeed();
		level = score / 100 + 1;

		//nSnake_coord[Lenght].x = x;
		//nSnake_coord[Lenght].y = y;
	}

	system("pause");
	return 0;
}

