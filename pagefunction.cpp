/*

*ҳ�湦�ܵ�ʵ��

*/
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "fileInfo.h"
#include "log_in.h"
using std::cout;
using std::endl;


//�������
void Snakefont() {
	WriteChar(2, 9);
	cout << "������";
	WriteChar(2, 14);
	cout << "LEVEL";
	WriteChar(60, 8);
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


//�ȼ�����֮���ٶȴ���
void SnakeSpeed() {
	if (level == 1) {
		Sleep(speed);
	}
	if (level == 2) {
	
		Sleep(speed - 50);
		                 
	}	
	if (level ==3) {
		Sleep(speed - 100);
	}
	if (level == 4) {
		Sleep(speed - 150);
	}
	if (level >4) {
		Sleep(speed - 200);
	}	
}


//��Ϸ����
void gameover_fun() {
	int button = 0;
	write_game();
	gameover();
	WriteChar(10, 50);
	
	while (1) {
		printf("�����룺");
		scanf_s("%d", &button);
		switch (button)
		{
		case 1: {
			system("CLS"); start_game();
		}break;
		case 2:exit(1); system("E:\ruanjian\daima\vs\C_preject\procedure\SNAKE\Debug\SNAKE.exe -t -f");
		default:
			printf("\033[35m\033[1m����������������룡\033[36m\033[1m\n");
			break;
		}
	}

}


//����
void rank() {
	
	
	for (int i = 0,j = 12; (i < g_gamenum)&&(j < 20); i++,j++) {
		printf("\033[33m\033[1m");
		WriteChar(63, j);
		cout << g_gameLog[i].score;
		printf("\033[33m\033[1m");
		WriteChar(57, j);
		cout << i + 1;
		printf("\033[36m\033[1m");
		WriteChar(59, j);
		cout << g_gameLog[i].chAccount;
	}
}
