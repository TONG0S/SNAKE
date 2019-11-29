#include "conio.h"
#include "data.h"
#include "pch.h"
#include <iostream>
#include "log_in.h"
#include "windows.h"
//注册页面
void index() {
	printf("**************************************************\n");
	printf("           欢迎来到贪吃蛇游戏                     \n");
	printf("            请先登录您的账户                      \n");
	printf("                                                  \n");
	printf("               1.  登录                           \n");
	printf("               2.  注册                           \n");
}
//开始页面
void gamestart() {
	printf("           欢迎来到贪吃蛇游戏                     \n");
	printf("                                                  \n");
	printf("**************************************************\n");
	printf("                                                  \n");
	printf("              规则如下：                          \n");
	printf("     'w'向上   's'向下   'a'向左  'd'向右         \n");
	printf("          撞到墙壁游戏结束                        \n");
}
void levelpage() {
	printf("           即将开始贪吃蛇游戏                     \n");
	printf("              请选择关卡                          \n");
	printf("               1. 容易                            \n");
	printf("               2. 简单                            \n");
	printf("               3. 娱乐                            \n");
}
void gameover() {
	printf("****************************************************\n");
	printf("*                                                  *\n");
	printf("*                                                  *\n");
	printf("*                                                  *\n");
	printf("*               GAME  OVER                         *\n");
	printf("*                 ~ _ ~                            *\n");
	printf("*                                                  *\n");
	printf("*              是否重新开始                        *\n");
	printf("*           1. 是      2.否                        *\n");
	printf("*                                                  *\n");
	printf("****************************************************\n");
	printf("   请输入： ");
	//sccanf("%d")
}
//背景30*60
void backgroudFile() {

	char nSpace[20][70] = { 0 };
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 70; j++) {
			nSpace[0][j] = '-';
			nSpace[19][j] = '-';
			nSpace[i][0] = '|';
			nSpace[i][9] = '|';
			nSpace[i][69] = '|';
		}
	}
	nSpace[15][30] = '#';
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 70; j++)
		{
			std::cout << nSpace[i][j];
		}
		printf("\n");
	}
}
#if 0
void backgroudFile_lever2() {
	char nSpace[30][60] = { 0 };
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 60; j++) {
			nSpace[0][j] = 5;
			nSpace[29][j] = 5;
			nSpace[i][0] = 5;
			nSpace[i][59] = 5;
		}
	}
	for (int i = 7; i < 15; i++) {
		nSpace[i][10] = 5;
	}
	for (int k = 15; k < 24; k++) {
		nSpace[k][49] = 5;
	}
	for (int j = 10; j < 50; j++) {
		nSpace[7][j] = 5;
		nSpace[15][j] = 5;
		nSpace[23][j] = 5;
	}

	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 60; j++)
		{
			std::cout << nSpace[i][j];
			/*if (nSpace[i][j] == 5) {
				std::cout << "#";
			}*/
			//

		//std::cout << " ";

		}
		printf("\n");
	}
}
#endif