#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "fileInfo.h"
#include "log_in.h"
using std::cout;
using std::endl;
//文字
void Snakefont() {
	WriteChar(2, 9);
	cout << "分数：";
	WriteChar(2, 14);
	cout << "LEVEL";
	WriteChar(58, 10);
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
void SnakeSpeed() {
	if (10>Lenght >=0) {
		Sleep(speed);
	}
	else if (20>Lenght >= 10) {
		Sleep(speed - 50);
		level += 1;
	}
	else if (30>Lenght >= 20) {
		Sleep(speed - 100);
	}
	else if (40>Lenght >= 30) {
		Sleep(speed - 150);
	}
	else if (Lenght >= 40) {
		Sleep(speed - 200);
	}
	
	
}
void gameover_fun() {
	int button = 0;
	gameover();
	WriteChar(10, 50);
	printf("请输入：");
	scanf_s("%d", &button);
	switch (button)
	{
	case 1:system("CLS"); start_game(); break;
	case 2:exit(1); system("E:\ruanjian\daima\vs\C_preject\procedure\SNAKE\Debug\SNAKE.exe -t -f");
	default:
		printf("输入错误，请重新输入！");
		break;
	}

}
void rank() {
	//WriteChar(86, 15);
	//cout << bufAcc;
	//WriteChar(95, 15);
	//cout<<score;
	for (int i = 0; i < g_num; i++) {
		//for(int j=15;j<29){}
		//WriteChar(86, 15);
	}
}