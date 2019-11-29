#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "time.h"
#if 0
void food_coordinate() {
	srand((unsigned)time(NULL));
	int i = rand() % (1 + 29);
	int j = rand() % (1 + 29);
	food.x = i, food.y = j;
	WriteChar(food.x, food.y, "a");
}
#endif

