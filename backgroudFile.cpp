#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#if 0
void backgroudFile() {
	char nSpace[30][30] = { 0 };
	for (int i = 0; i < 30; i++) {
		nSpace[0][i] = '-';
		nSpace[29][i] = '-';
		nSpace[i][0] = '|';
		nSpace[i][29] = '|';

	}
		for (int i = 0; i < 30; i++) {
			for (int j = 0; j < 30; j++)
			{
				std::cout << nSpace[i][j];
			}
			printf("\n");
		}
	}
#endif 