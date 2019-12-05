
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "fileInfo.h"
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

#if 1
//判断
void Judge() {                     
	Judge_Wall();
	Eat_Food();
}
//撞墙结束游戏
int  Judge_Wall() {
	int n_x = nSnake_coord[0].x;
	int n_y = nSnake_coord[0].y;
	//switch (map_decide) {
	//case 1: {
		
	if ((nSpace[n_y][n_x] == 5) || (nSpace[n_y][n_x] == 4) || (nSpace[n_y][n_x] == 3)) {
		e = false;
		system("CLS");
		Gameover_Fun();             //跳转游戏结束页面
		return 1;
	}

	//判断头和身体重合
	for (int j = 1; j < g_Lenght; j++) {
		if ((nSnake_coord[0].x == nSnake_coord[j].x) && (nSnake_coord[0].y == nSnake_coord[j].y)) {
			e = false;

			system("CLS");
			Gameover_Fun();
			return 1;
		}
		
	}
	return 0;
}
//吃东西
void Eat_Food() {
	if ((nSnake_coord[0].x == g_Food.x) && (nSnake_coord[0].y == g_Food.y)) {
		g_Lenght += 1;
		g_Score += 10;
		
		if (g_Score % 50 == 0 && g_Score > 0) {
			PlaySoundA("Candy Store.wav", NULL, SND_SYNC);
			if (g_Score % 100 == 0) {

				PlaySoundA("Mermaid_MiyanoMamoru.wav", NULL, SND_ASYNC | SND_LOOP);
			}

			else {
				PlaySoundA("hanazawa.wav", NULL, SND_ASYNC | SND_LOOP);
			}
			WriteChar(10, 10);
			std::cout << "恭喜你升级了";
			Sleep(1000);
			WriteChar(10, 10);
			std::cout << "              ";
		
		}

		Food_Coordinate();
		nSnake_coord[g_Lenght - 1] = nSnake_coord[g_Lenght - 2];
	}
	if((nSnake_coord[0].x == g_Food_Accelerate.x) && (nSnake_coord[0].y == g_Food_Accelerate.y)) {
		g_Speed -= 20;
		if (g_Speed < 0) {
			Gameover_Fun();
		}
		Props_Accelerate();
		
	 }
	if ((nSnake_coord[0].x == g_Food_Decelerate.x) && (nSnake_coord[0].y == g_Food_Decelerate.y)) {
		g_Speed += 20;

		Props_Decelerate();

	}
}
#endif
#if 0

	

#endif 