#include "conio.h"
#include "data.h"
#include "pch.h"
#include <iostream>
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