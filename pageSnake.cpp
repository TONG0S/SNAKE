/*

*界面图形


*/


#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include <time.h>
#include "fileInfo.h"
using std::cout;
using std::endl;

//注册页面
void index() {
	printf(" \033[36m\033[1m                                                   ***************************************************\n");
	printf("                                                    *                                                 *\n");
	printf("                                                    *           欢迎来到贪吃蛇游戏                    *\n");
	printf("                                                    *            请先登录您的账户                     *\n");
	printf("                                                    *                                                 *\n");
	printf("                                                    *               1.  登录                          *\n");
	printf("                                                    *               2.  注册                          *\n");
	printf("                                                    *                                                 *\n");
	printf("                                                    ***************************************************\n");
	WriteChar(30, 15);
	printf("******************************");
	for (int i = 16; i < 22; i++) {
		WriteChar(30, i);
		printf("*");
		WriteChar(44, i);
		printf("*");
	}
	WriteChar(30, 22);
	printf("******************************");
	WriteChar(32, 18);
	printf("账户：");
	WriteChar(32, 20);
	printf("密码：");
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
	printf("                             \n");
	printf("                                                                     \n");
	printf("                           当分数大于100将进入下一等级                              \n");
	printf("                                                                     \n");
	printf("                                 1.撞到墙壁游戏结束                        \n");
	printf("                                                                     \n");
	printf("                                 2.请不要回头，                        \n");
	printf("                                 3.请不要回头，                        \n");
	printf("                                 4.请不要回头，                        \n");
	printf("                                                                     \n");
}
void gamestart1()
{
	printf("                              欢迎来到贪吃蛇游戏                     \n");
	printf("                                                                     \n");
	printf("                      *********************************************************\n");
	printf("                                                                               \n");
	printf("                                                                               \n");	printf("                                                                               \n");
	printf("                                           规则如下：                          \n");
	printf("                                                                               \n");
	printf("                                       空格键暂停                            \n");
	printf("                                                                               \n");
	printf("                             'w'向上   's'向下   'a'向左  'd'向右                   \n");
	printf("                                                                               \n");
	printf("                                  \033[36m\033[1m卐  长度增加        \n");
	printf("                                                                               \n");
	printf("                                  \033[35m\033[1m★  加速                    \n");
	printf("                                                                               \n");
	printf("                                  \033[32m\033[1m★  减速                      \n");
	printf("                                                                         \n");
	
	printf("                                                                     \n");
}
void levelpage()
{
	printf("\033[34m\033[1m\n");
	printf("                                 # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   \n");
	printf("                                                 即 将 开 始 贪 吃 蛇 游 戏                     \n");
	printf("                                                                                                \n");
	printf("                                                                                                \n");
	printf("                                                         请选择地图                             \n");
	printf("                                                                                                \n");
	printf("                                                          1. 容易                            \n");
	printf("                                                          2. 简单                            \n");
	printf("                                                          3. 娱乐                            \n");
	printf("                                                                                                \n");

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
	WriteChar(20, 5);
	std::cout << "是否开始游戏" << std::endl;
	WriteChar(15, 10);
	std::cout << "是" << std::endl;
	WriteChar(30, 10);
	std::cout << "否" << std::endl;
}

