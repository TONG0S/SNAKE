#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "time.h"
#include "data.h"
#include "fileInfo.h"
//���һ����ʵ��λ�ã�
void food_coordinate() {
	//coordinate *food = (coordinate *)calloc(  2 * sizeof(coordinate), 1);
	int nfood_num = 1;    //�����ж�
	srand((unsigned)time(NULL));
	while (nfood_num!=0) {
		int i = rand() % 118 + 14;
		int j = rand() % 28 + 10;
		if (nSpace[j][i] != 5) {
			food.x = i, food.y = j;
			WriteChar(food.x, food.y);
			printf("o");
			nfood_num = 0;
		}
	}
}
#if 0
void food_coordinate() {
	srand((unsigned)time(NULL));
	int i = rand() % (1 + 29);
	int j = rand() % (1 + 29);
	food.x = i, food.y = j;
	WriteChar(food.x, food.y, "a");
}
#endif

