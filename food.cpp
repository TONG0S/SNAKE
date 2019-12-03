/*

*  三种随机道具

*/
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "food.h"
#include "time.h"
#include "data.h"
#include "fileInfo.h"


#if 1
//void putfood() {
//
//}
void  food_coordinate()
{
	//food_props();
	int nfood_num = 1;    //用于判断	
	
	while (nfood_num != 0) {
		srand((unsigned)time(NULL));
		int i = rand() % (78 / 2) + 14;
		int j = rand() % (33 / 2) + 16;
	//	switch (map_decide) {
	//	case 1: {
			if ((nSpace[j][i] != 5) && (nSpace[j][i] != 4) && (nSpace[j][i] != 3)) {
				int px = i;
				int py = j;
				food.x = px, food.y = py;
				WriteChar(food.x, food.y);
				printf("\033[36m\033[1m卐");
				nfood_num = 0;
			}
	//	}
	//			break;
	//	case 2: {if ((nSpace_draw[j][i] != 5) && (nSpace_draw[j][i] != 4) && (nSpace_draw[j][i] != 3)) {
	//		int px = i;
	//		int py = j;
	//		food.x = px, food.y = py;
	//		WriteChar(food.x, food.y);
	//		printf("\033[36m\033[1m卐");
	//		nfood_num = 0;
	//	}
	//	}break;
	//	}
	
	}
	
}


void props_accelerate()
{

	//int nfood_num = 1;    //用于判断	
	//while (nfood_num != 0) {
	//	food_props();
	int nfood_num = 1;    //用于判断	
	while (nfood_num != 0) {
		srand((unsigned)time(NULL));
		int i = rand() % (78 / 2) + 15;
		int j = rand() % (33 / 2) + 18;
		if ((nSpace[j][i] != 5) && (nSpace[j][i] != 4) && (nSpace[j][i] != 3)) {
			if (food_accelerate.x != food.x || food_accelerate.y != food.y) {
				int px = i;
				int py = j;
				food_accelerate.x = px, food_accelerate.y = py;
				WriteChar(food_accelerate.x, food_accelerate.y);
				printf("\033[35m\033[1m★");

				nfood_num = 0;
			}
		}
	}
}

void props_decelerate() {


	int nfood_num = 1;    //用于判断	
	while (nfood_num != 0) {
		srand((unsigned)time(NULL));
		int i = rand() % (78 / 2) + 14;
		int j = rand() % (33 / 2) + 10;
		if ((nSpace[j][i] != 5) && (nSpace[j][i] != 4) && (nSpace[j][i] != 3)) {
			if (food_decelerate.x != food.x || food_decelerate.y != food.y) {
				if ((food_accelerate.x != food_decelerate.x) || (food_accelerate.y != food_decelerate.y)) {
			/*	int px = i;
				int py = j;*/
					food_decelerate.x = i, food_decelerate.y = j;
					WriteChar(food_decelerate.x, food_decelerate.y);

					printf("\033[32m\033[1m★");
					nfood_num = 0;
				}
			}
		}
	}
}

#endif
#if 0
void food_props1() {
	//px = 0;
	//py = 0;
	srand((unsigned)time(NULL));
	i = rand() % (78 / 2) + 14;
	j = rand() % (33 / 2) + 10;
	if ((nSpace[j][i] != 5) && (nSpace[j][i] != 4) && (nSpace[j][i] != 3)) {
		px = i;
		py = j;
	}
}
void  food_coordinate1() 
{	
	 food_props();			
				food.x = px, food.y = py;
				WriteChar(food.x, food.y);
				//printf("\033[36m\033[1m");	
				short x = food.x;
				short y = food.y;
				DWORD dwWrite;
				WriteConsoleOutputCharacterW(GetStdHandle(STD_OUTPUT_HANDLE),
					L"卐", 1, { x,y}, &dwWrite);
				//printf("Q");
		}
	

void props_accelerate1() 
{	
	
	int nfood_num = 1;    //用于判断	
	while (nfood_num != 0) {
		food_props();
		if (food_accelerate.x != food.x|| food_accelerate.y != food.y) {
			
				food_accelerate.x = px, food_accelerate.y = py;
				WriteChar(food_accelerate.x, food_accelerate.y);
				//printf("\033[35m\033[1m");
				short x = food_accelerate.x;
				short y = food_accelerate.y;
				DWORD dwWrite;
				WriteConsoleOutputCharacterW(GetStdHandle(STD_OUTPUT_HANDLE),
					L"★", 1, { x, y }, &dwWrite);
				
				nfood_num = 0;
			}
		}
	}

void props_decelerate1() {
	
	//coordinate *food = (coordinate *)calloc(  2 * sizeof(coordinate), 1);
	int nfood_num = 1;    //用于判断
	while (nfood_num != 0) {
		food_props();
			if (food_decelerate.x != food.x||food_decelerate.y != food.y) {
				if ((food_accelerate.x != food_decelerate.x)|| (food_accelerate.y != food_decelerate.y)) {
					food_decelerate.x = px, food_decelerate.y = py;
					WriteChar(food_decelerate.x, food_decelerate.y);
					short x = food_decelerate.x;
					short y = food_decelerate.y;
				//	printf("\033[32m\033[1m");
					DWORD dwWrite;
					//MessageBox(0, 0, 0, 0);
					WriteConsoleOutputCharacterW(GetStdHandle(STD_OUTPUT_HANDLE),
						L"★", 1, { 7, 7}, &dwWrite);

					
					nfood_num = 0;
				}
			}	
	}
}
#endif
void PROPS(){
	food_coordinate();
	props_accelerate();
	props_decelerate();
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

