#include "conio.h"
#include "data.h"
#include <iostream>
#include "fileInfo.h"

//注册页面
void index() {
	printf("                  ***************************************************\n");
	printf("                  *                                                 *\n");
	printf("                  *           欢迎来到贪吃蛇游戏                    *\n");
	printf("                  *            请先登录您的账户                     *\n");
	printf("                  *                                                 *\n");
	printf("                  *               1.  登录                          *\n");
	printf("                  *               2.  注册                          *\n");
	printf("                  *                                                 *\n");
	printf("                  ***************************************************\n");
	
}
//开始页面
void gamestart() 
{
	printf("                              欢迎来到贪吃蛇游戏                     \n");
	printf("                                                                     \n");
	printf("            *********************************************************\n");
	printf("                                                                     \n");
	printf("                                 规则如下：                          \n");
	printf("                                                                     \n");
	printf("                        'w'向上   's'向下   'a'向左  'd'向右         \n");
	printf("                             撞到墙壁游戏结束                        \n");
	printf("                                                                     \n");
}
void levelpage() 
{
	printf("      # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   \n");
	printf("                      即 将 开 始 贪 吃 蛇 游 戏                     \n");
	printf("                                                                     \n");
	printf("                                                                     \n");
	printf("                              请选择关卡                             \n");
	printf("                                                                     \n");
	printf("                               1. 容易                            \n");
	printf("                               2. 简单                            \n");
	printf("                               3. 娱乐                            \n");
	printf("                                                                     \n");
}
void gameover() {

	
	printf("              ****************************************************\n");
	printf("              *                                                  *\n");
	printf("              *                                                  *\n");
	printf("              *                                                  *\n");
	printf("              *               GAME  OVER                         *\n");
	printf("              *                 ~ _ ~                            *\n");
	printf("              *                                                  *\n");
	printf("              *              是否重新开始                        *\n");
	printf("              *           1. 是      2.否                        *\n");
	printf("              *                                                  *\n");
	printf("              ****************************************************\n");
	
	
}
void confilm() {
	WriteChar(40, 5);
	std::cout << "是否开始游戏" << std::endl;
	WriteChar(30, 10);
	std::cout << "是" << std::endl;
	WriteChar(60, 10);
	std::cout << "否" << std::endl;
}

