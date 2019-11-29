// SNAKE.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "time.h"

using std::cout;
using std::endl;

int x = 30;
int y = 10;
int Lenght = 3;
int score = 0;
bool e = true;
struct coordinate
{
	int x = 0;
	int y = 0;
};
struct coordinate food;
struct coordinate nSnake_coord[1000];
//随机一个果实的位置；
void food_coordinate() {
	srand((unsigned)time(NULL));
	int i = rand() % (2 + 56);
	int j = rand() % (2 +26);
	food.x = i, food.y = j;
	WriteChar(food.x, food.y);
	printf("o");
}
//蛇的长度与坐标，蛇头位置单独拿出。方便方向定位
void nSnake_height() {
	nSnake_coord[0].x = x;
	nSnake_coord[0].y = y;
	WriteChar(nSnake_coord[0].x, nSnake_coord[0].y);
	//WORD color : blue;
	cout << "@";
	for (int i = 1; i < Lenght; i++)
	{

		
		WriteChar(nSnake_coord[i].x, nSnake_coord[i].y);
		cout << "*";
	}
}

#if 1
int  judge() {
	for (int i = 0,j=1; i < Lenght; i++) {
		if ((nSnake_coord[i].x == 0) || (nSnake_coord[i].y == 0) || (nSnake_coord[i].x == 60) || (nSnake_coord[i].y == 30)) {
			
			e=false; 
			system("CLS");
			gameover();
			return 1;

		}
		if ((nSnake_coord[0].x == nSnake_coord[j].x) && (nSnake_coord[0].y == nSnake_coord[j].y)) {
			e = false;
			j++;
			system("CLS");
			gameover();
			return 1;
		}
	}
	return 0;
}
#endif
int main()
{
	int n = 0;
	int nLive = 1;
	char cOper = 0;
	int nDir = UP;
	putSet();
	for (int i = 1; i < Lenght; i++)
	{
		nSnake_coord[i].x = x+i;
		nSnake_coord[i].y = y;
		//cout << "*";
	}
	system("CLS");
	cout << score;
	backgroudFile();
	system("pause");
	hide();
//	while (e = true) {
		food_coordinate();	
		Sleep(1000);
		//food_coordinate();
		while (e == true) {	
			nSnake_height();
			judge();
			cOper = GetOper();
			printf("%d", &score);
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
			cout << " ";
			switch (nDir) {
			case UP:    y--;       break;
			case DOWN:  y++; break;
			case RIGHT: x++; break;
			case LEFT:  x--; break;
			}
			if ((nSnake_coord[0].x == food.x) && (nSnake_coord[0].y == food.y)) {
				Lenght += 1;
				score += 10;
				food_coordinate();
				nSnake_coord[Lenght - 1] = nSnake_coord[Lenght - 2];
			}
			for (int i = Lenght - 1; i > 0; i--) {
				nSnake_coord[i] = nSnake_coord[i - 1];
			}
			//WriteChar(x, y);
			//cout << "*";
			Sleep(200);
			//nSnake_coord[Lenght].x = x;
			//nSnake_coord[Lenght].y = y;
		}
		
		system("pause");
	return 0;
}

