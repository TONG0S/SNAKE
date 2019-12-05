
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "fileInfo.h"
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

#if 1
void judge() {                      //判断
	judge_wall();
	eat_food();
}
//撞墙结束游戏
int  judge_wall() {
	int n_x = nSnake_coord[0].x;
	int n_y = nSnake_coord[0].y;
	//switch (map_decide) {
	//case 1: {
		
	if ((nSpace[n_y][n_x] == 5) || (nSpace[n_y][n_x] == 4) || (nSpace[n_y][n_x] == 3)) {
		e = false;
		system("CLS");
		gameover_fun();             //跳转游戏结束页面
		return 1;
	}
	//	}}break;
	////case 2: {
	//		if ((nSpace_draw[n_y][n_x] == 5) || (nSpace_draw[n_y][n_x] == 4) || (nSpace_draw[n_y][n_x] == 3)) {
	//			e = false;
	//			system("CLS");
	//			gameover_fun();             //跳转游戏结束页面
	//			return 1;
	//		}
	//}}break;


	//判断头和身体重合
	for (int j = 1; j < Lenght; j++) {
		if ((nSnake_coord[0].x == nSnake_coord[j].x) && (nSnake_coord[0].y == nSnake_coord[j].y)) {
			e = false;

			system("CLS");
			gameover_fun();
			return 1;
		}
		
	}
	return 0;
}
//吃东西
void eat_food() {
	if ((nSnake_coord[0].x == food.x) && (nSnake_coord[0].y == food.y)) {
		Lenght += 1;
		score += 10;
		
		if (score % 50 == 0 && score > 0) {
			PlaySoundA("Candy Store.wav", NULL, SND_SYNC);
			if (score % 100 == 0) {

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

		food_coordinate();
		nSnake_coord[Lenght - 1] = nSnake_coord[Lenght - 2];
	}
	if((nSnake_coord[0].x == food_accelerate.x) && (nSnake_coord[0].y == food_accelerate.y)) {
		speed -= 20;
		if (speed < 0) {
			gameover_fun();
		}
		props_accelerate();
		
	 }
	if ((nSnake_coord[0].x == food_decelerate.x) && (nSnake_coord[0].y == food_decelerate.y)) {
		speed += 20;

		props_decelerate();

	}
}
#endif
#if 0

	for (int i = 0, j = 1; i < Lenght; i++) {
		if ((nSnake_coord[i].x == 9) || (nSnake_coord[i].y == 4) || (nSnake_coord[i].x == 69) || (nSnake_coord[i].y == 24)) {

			e = false;
			system("CLS");
			gameover();
			return 1;

		}
	}
	for (int  j = 1; j< Lenght; j++) {
		if ((nSnake_coord[0].x == nSnake_coord[j].x) && (nSnake_coord[0].y == nSnake_coord[j].y)) {
			e = false;
			
			system("CLS");
			gameover();
			return 1;
		}
	}
	return 0;
}
#endif

#if 1

#endif 