#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "fileInfo.h"
using std::cout;
using std::endl;
//�ߵĳ��������꣬��ͷλ�õ����ó������㷽��λ
void nSnake_height() {

	nSnake_coord[0].x = x;
	nSnake_coord[0].y = y;
	WriteChar(nSnake_coord[0].x, nSnake_coord[0].y);
	//WORD color : blue;
	cout << "\033[33m��\033[33m";
	for (int i = 1; i < Lenght; i++)
	{


		WriteChar(nSnake_coord[i].x, nSnake_coord[i].y);
		cout << "\033[32m��\033[32m";
	}
}
