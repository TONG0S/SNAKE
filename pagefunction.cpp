#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "fileInfo.h"
using std::cout;
using std::endl;
//����
void Snakefont() {
	WriteChar(2, 8);
	cout << "������";
	WriteChar(2, 15);
	cout << "LEVEL";
	WriteChar(75, 6);
	cout << "���а�";
	WriteChar(45, 2);
	cout << "̰����";
}
//�������
void Snakescore() {

	WriteChar(2, 11);
	cout << score;
}
//����ȼ�
void SnakeLevel() {
	WriteChar(2, 18);
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
	
	printf("�����룺");
	scanf_s("%d", &button);
	switch (button)
	{
	case 1:system("CLS"); levelpage(); break;
	case 2:exit(1); system("E:\ruanjian\daima\vs\C_preject\procedure\SNAKE\Debug\SNAKE.exe -t -f");
	default:
		printf("����������������룡");
		break;
	}

}