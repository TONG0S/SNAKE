/*

*页面功能的实现

*/
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "fileInfo.h"
#include "log_in.h"
using std::cout;
using std::endl;


//文字输出
void Snakefont() {
	WriteChar(2, 9);
	cout << "分数：";
	WriteChar(2, 14);
	cout << "LEVEL";
	WriteChar(60, 8);
	cout << "排行榜";
	WriteChar(30, 3);
	cout << "贪吃蛇";
}


//输出分数
void Snakescore() {

	WriteChar(2, 11);
	cout << score;
}


//输出等级
void SnakeLevel() {
	WriteChar(2, 16);
	cout << level;
}


//等级提升之后速度处理
void SnakeSpeed() {
	if (level == 1) {
		Sleep(speed);
	}
	if (level == 2) {
	
		Sleep(speed - 50);
		                 
	}	
	if (level ==3) {
		Sleep(speed - 100);
	}
	if (level == 4) {
		Sleep(speed - 150);
	}
	if (level >4) {
		Sleep(speed - 200);
	}	
}


//游戏结束
void gameover_fun() {
	int button = 0;
	write_game();
	gameover();
	WriteChar(10, 50);
	
	while (1) {
		printf("请输入：");
		scanf_s("%d", &button);
		switch (button)
		{
		case 1: {
			system("CLS"); start_game();
		}break;
		case 2:exit(1); system("E:\ruanjian\daima\vs\C_preject\procedure\SNAKE\Debug\SNAKE.exe -t -f");
		default:
			printf("\033[35m\033[1m输入错误，请重新输入！\033[36m\033[1m\n");
			break;
		}
	}

}


//排行
void rank() {
	
	
	for (int i = 0,j = 12; (i < g_gamenum)&&(j < 20); i++,j++) {
		printf("\033[33m\033[1m");
		WriteChar(63, j);
		cout << g_gameLog[i].score;
		printf("\033[33m\033[1m");
		WriteChar(57, j);
		cout << i + 1;
		printf("\033[36m\033[1m");
		WriteChar(59, j);
		cout << g_gameLog[i].chAccount;
	}
}
