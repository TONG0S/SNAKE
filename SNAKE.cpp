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
	putSet();             //背景音乐
	dealAcc();            //登录注册
	system("CLS");
	system("CLS");
	//int j = 1;;
	for (int i = 1; i < Lenght; i++)
	{
		nSnake_coord[i].x = x+i;
		nSnake_coord[i].y = y;

	}
	start_game();
	
	
	

	system("pause");
	return 0;
}

