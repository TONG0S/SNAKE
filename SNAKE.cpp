/*

*  主页面，main函数所在

*/


#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include <time.h>
#include "fileInfo.h"
using std::cout;
using std::endl;



#if 1
void start_game() {
	for (int i = 0; i < Lenght; i++) {
			nSnake_coord[i].x = 0;
			nSnake_coord[i].y = 0;
	}
	e = true;                       //重新开始的初始化
	level = 1;
	score = 0;
	char cOper = 0;                //方向
	Lenght = 3;                    //蛇的初始长度
	x = 20;
	y = 20;
	for (int i = 1; i < Lenght; i++)
	{
		nSnake_coord[i].x = x + i;
		nSnake_coord[i].y = y;

	}
	int nDir = UP;
	read_game();
	
	
	//Sleep(2000);
	system("CLS");
	gamestart();            //规则界面1
	system("pause");
	system("CLS");
	gamestart1();           //规则界面1
	system("pause");
	system("CLS");
	select_mode();         //地图选择界面
	Snakefont();

	rank();
	WriteChar(5, 36);
	system("pause");
	
	//PROPS();三种道具
	food_coordinate();
	props_accelerate();
	props_decelerate();
	
	while (e) {
		
		nSnake_height();
		judge();                //判断吃东西
		Snakescore();           //分数函数
		SnakeLevel();           //等级函数
		cOper = GetOper();
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
		cout << "  ";
		switch (nDir) {
		case UP:    y--;       break;
		case DOWN:  y++; break;
		case RIGHT: x++; break;
		case LEFT:  x--; break;
		}
		for (int i = Lenght - 1; i > 0; i--) {
			nSnake_coord[i] = nSnake_coord[i - 1];
		}
		SnakeSpeed();
		level = score / 50 + 1;
		
		pause_game();          //暂停按键
		exit_game();
	}
}
#endif



int main()
{
	/*clock_t t1 = clock();

	if (clock() - t1 > 1000) {
		t1 = clock();

	}
	
*/

	putSet();             //背景音乐
	dealAcc();            //登录注册
	system("CLS");
	hide();         //隐藏光标
	
	start_game();
	system("pause");
	return 0;
}

