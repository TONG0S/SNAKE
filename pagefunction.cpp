/*

*页面功能的实现

*/
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "fileInfo.h"
#include <mmsystem.h>
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
	cout << g_Score;
}


//输出等级
void SnakeLevel() {
	WriteChar(2, 16);
	cout << g_Level;
}


//等级提升之后速度处理
void SnakeSpeed() {
	if (g_Level == 1) {
		Sleep(g_Speed);
	
	}
	if (g_Level == 2) {
	
		Sleep(g_Speed - 50);
	
	}	
	if (g_Level ==3) {
		Sleep(g_Speed - 100);
	}
	if (g_Level == 4) {
		Sleep(g_Speed - 150);
	}
	if (g_Level >4) {
		Sleep(g_Speed - 200);
	}	
}


//游戏结束
void Gameover_Fun() {
	int Tbutton = 0;
	Write_Game();
	
	int game_decide = 0;
	while (game_decide != 1) {
		system("CLS");
		GameOver();
		PlaySoundA("ALIVE.wav", NULL, SND_ASYNC | SND_LOOP);
		Tbutton = 0;
		WriteChar(10, 50);
		printf("请输入：");
		scanf_s("%d", &Tbutton);
		switch (Tbutton)
		{
		case 1: {
			system("CLS"); Start_Game(); game_decide = 1;
		}break;
		case 2: {
			exit(1);
			game_decide = 1;
		}
		default:
			Tbutton = 0;
			break;
	
		}
		Sleep(100);

	}

}


//排行
void Rank() {
	
	
	for (int i = 0,j = 12; (i < g_gamenum)&&(j < 20); i++,j++) {
		printf("\033[33m\033[1m");
		WriteChar(63, j);
		cout << g_gameLog[i].g_Score;
		printf("\033[33m\033[1m");
		WriteChar(57, j);
		cout << i + 1;
		printf("\033[36m\033[1m");
		WriteChar(59, j);
		cout << g_gameLog[i].chAccount;
	}
}
