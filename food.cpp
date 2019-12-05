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
void  Food_Coordinate()
{
	
	int nfood_num = 1;    //用于判断	
	
	while (nfood_num != 0) {
		srand((unsigned)time(NULL));
		int i = rand() % (78 / 2) + 14;
		int j = rand() % (33 / 2) + 16;
	
			if ((nSpace[j][i] != 5) && (nSpace[j][i] != 4) && (nSpace[j][i] != 3)) {
				int posx = i;
				int posy = j;
				g_Food.x = posx, g_Food.y = posy;
				WriteChar(g_Food.x, g_Food.y);
				printf("\033[36m\033[1m卐");
				nfood_num = 0;
			}

	}
	
}


void Props_Accelerate()
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
			if (g_Food_Accelerate.x != g_Food.x || g_Food_Accelerate.y != g_Food.y) {
				int px = i;
				int py = j;
				g_Food_Accelerate.x = px, g_Food_Accelerate.y = py;
				WriteChar(g_Food_Accelerate.x, g_Food_Accelerate.y);
				printf("\033[35m\033[1m★");

				nfood_num = 0;
			}
		}
	}
}

void Props_Decelerate() {


	int nfood_num = 1;    //用于判断	
	while (nfood_num != 0) {
		srand((unsigned)time(NULL));
		int i = rand() % (78 / 2) + 14;
		int j = rand() % (33 / 2) + 10;
		if ((nSpace[j][i] != 5) && (nSpace[j][i] != 4) && (nSpace[j][i] != 3)) {
			if (g_Food_Decelerate.x != g_Food.x || g_Food_Decelerate.y != g_Food.y) {
				if ((g_Food_Accelerate.x != g_Food_Decelerate.x) || (g_Food_Accelerate.y != g_Food_Decelerate.y)) {
			/*	int px = i;
				int py = j;*/
					g_Food_Decelerate.x = i, g_Food_Decelerate.y = j;
					WriteChar(g_Food_Decelerate.x, g_Food_Decelerate.y);

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
	Food_Coordinate();
	Props_Accelerate();
	Props_Decelerate();
}

