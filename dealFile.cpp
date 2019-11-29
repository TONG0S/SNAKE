#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "fileInfo.h"
#if 1
int  judge() {
	for (int i = 0, j = 1; i < Lenght; i++) {
		if ((nSnake_coord[i].x == 9) || (nSnake_coord[i].y == 0) || (nSnake_coord[i].x == 69) || (nSnake_coord[i].y == 19)) {

			e = false;
			system("CLS");
			gameover();
			return 1;

		}
	}
	for (int  j = 1; j< Lenght; j++) {
		if ((nSnake_coord[0].x == nSnake_coord[j].x) && (nSnake_coord[0].y == nSnake_coord[j].y)) {
			e = false;
			
			system("CLS");
			gameover();
			return 1;
		}
	}
	return 0;
}
#endif

#if 1

#endif 