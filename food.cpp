#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "time.h"
#include "data.h"
#include "fileInfo.h"
//随机一个果实的位置；
void food_coordinate() {
	//coordinate *food = (coordinate *)calloc(  2 * sizeof(coordinate), 1);
	srand((unsigned)time(NULL));
	int i = rand() % 58 + 10;
	int j = rand() % 18 + 5;
	food.x = i, food.y = j;
	WriteChar(food.x, food.y);
	printf("o");
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

