#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "fileInfo.h"
#include "log_in.h"
using std::cout;
using std::endl;
//����
void Snakefont() {
	WriteChar(2, 9);
	cout << "������";
	WriteChar(2, 14);
	cout << "LEVEL";
	WriteChar(58, 10);
	cout << "���а�";
	WriteChar(30, 3);
	cout << "̰����";
}
//�������
void Snakescore() {

	WriteChar(2, 11);
	cout << score;
}
//����ȼ�
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
	printf("�����룺");
	scanf_s("%d", &button);
	switch (button)
	{
	case 1:system("CLS"); start_game(); break;
	case 2:exit(1); system("E:\ruanjian\daima\vs\C_preject\procedure\SNAKE\Debug\SNAKE.exe -t -f");
	default:
		printf("����������������룡");
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