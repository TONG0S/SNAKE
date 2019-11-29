#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#if 0
void backgroudFile() {
	char nSpace[30][60] = { 0 };
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 60; j++) {
			nSpace[0][j] = 5;
			nSpace[29][j] = 5;
			nSpace[i][0] = 5;
			nSpace[i][59] = 5;
		}
	}
	for (int i = 7; i < 15; i++) {
		nSpace[i][10] = 5;
	}
	for (int k = 15; k < 24; k++) {
		nSpace[k][49] = 5;
	}
	for (int j = 10; j < 50; j++) {
		nSpace[7][j] = 5;
		nSpace[15][j] = 5;
		nSpace[23][j] = 5;
	}
	
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 60; j++)
		{
			std::cout << nSpace[i][j];
			/*if (nSpace[i][j] == 5) {
				std::cout << "#";
			}*/
				//
			
			//std::cout << " ";
			
		}
		printf("\n");
	}
}
#endif
#if 1
//±³¾°30*60
void backgroudFile() {
	
	char nSpace[20][70] = { 0 };
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 70; j++) {
			nSpace[0][j] = '-';
			nSpace[19][j] = '-';
			nSpace[i][0] = '|';
			nSpace[i][9] = '|';
			nSpace[i][69] = '|';
		}
	}
	nSpace[15][30] = '#';
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 70; j++)
		{
			std::cout << nSpace[i][j];
		}
		printf("\n");
	}
}
#endif 