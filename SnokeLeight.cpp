#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "time.h"
#include "fileInfo.h"
using std::cout;
using std::endl;
//蛇的长度与坐标，蛇头位置单独拿出。方便方向定位
void nSnake_height() {

	nSnake_coord[0].x = x;
	nSnake_coord[0].y = y;
	WriteChar(nSnake_coord[0].x, nSnake_coord[0].y);
	//WORD color : blue;
	cout << "@";
	for (int i = 1; i < Lenght; i++)
	{


		WriteChar(nSnake_coord[i].x, nSnake_coord[i].y);
		cout << "*";
	}
}
