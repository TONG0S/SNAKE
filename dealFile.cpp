#include "pch.h"
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "fileInfo.h"

#if 1
void judge() {                   //еп╤о
	judge_wall();
	eat_food();
}
int  judge_wall() {
	int n_x = nSnake_coord[0].x;
	int n_y = nSnake_coord[0].y;
	if ((nSpace[n_y][n_x] == 5) || (nSpace[n_y][n_x] == 4)|| (nSpace[n_y][n_x] == 3)) {

		e = false;
		system("CLS");
		gameover_fun();
		return 1;

	}
	//еп╤ом╥
	for (int j = 1; j < Lenght; j++) {
		if ((nSnake_coord[0].x == nSnake_coord[j].x) && (nSnake_coord[0].y == nSnake_coord[j].y)) {
			e = false;

			system("CLS");
			gameover_fun();
			return 1;
		}
		
	}
	return 0;
}
void eat_food() {
	if ((nSnake_coord[0].x == food.x) && (nSnake_coord[0].y == food.y)) {
		Lenght += 1;
		score += 10;

		food_coordinate();
		nSnake_coord[Lenght - 1] = nSnake_coord[Lenght - 2];
	}
}
#endif
#if 0

	for (int i = 0, j = 1; i < Lenght; i++) {
		if ((nSnake_coord[i].x == 9) || (nSnake_coord[i].y == 4) || (nSnake_coord[i].x == 69) || (nSnake_coord[i].y == 24)) {

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