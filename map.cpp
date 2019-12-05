#include "conio.h"
#include "data.h"
#include <iostream>
#include "fileInfo.h"

#include <windows.h>

//地图
int nSpace[40][150] = { 0 };
//int nSpace_draw[40][150] = { 0 };
void backgroudFile() {
#if 1
	nSpace[0][0] = 5;
	for (int i = 0; i < 35; i++) {
		for (int j = 0; j < 70; j++) {
			if ((i == 0 && j != 0) || (i == 5 && j != 0) || (i == 34 && j != 0)) {
				nSpace[i][j] = 5;
			}
			//
		}
	}
	for (int i = 0; i < 35; i++) {
		for (int j = 0; j < 70; j++) {
			if ((j == 0 && i != 0) || (j == 69 && i != 0)) {
				nSpace[i][j] = 4;
			}
		}
	}
	for (int i = 6; i < 34; i++) {
		for (int j = 0; j < 70; j++) {
			if ((j == 9 && i != 0) || (j == 54 && i != 0)) {
				nSpace[i][j] = 4;
			}
		}
	}
}
void WriteChar1(int x, int y)
{
	HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
	//获取一个输出句柄
	COORD stcPos = { x*2,y };
	//设置控制台光标位置
	SetConsoleCursorPosition(hStd, stcPos);
	//输出字符串

}

void putMap(){
	for (int j = 0; j < 35; j++) {
		for (int i = 0; i < 70; i++) {
			WriteChar1( i,j);
			switch (nSpace[j][i]) {
			case 0:printf("  "); break;
			case 5:printf("\033[34m\033[1m█ "); break;
			case 4:printf("\033[36m\033[1m█"); break;
			case 3:printf("\033[31m\033[1m¤"); break;
			}
		}
		//printf("\n");
		//printf("111");

	}
}

#endif	
#if 1
//简单地图
void map_B() {
	backgroudFile();
	for (int i = 13; i < 18; i++) {
		nSpace[i][29] = 3;
		nSpace[i][44] = 3;
		nSpace[i][49] = 3;
	}
	for (int i = 23; i < 28; i++) {
		nSpace[i][29] = 3;
		nSpace[i][34] = 3;
		nSpace[i][49] = 3;
	}
	for (int j = 30; j < 35; j++) {
		nSpace[13][j] = 3;
		nSpace[18][j] = 3;
		nSpace[28][j] = 3;
	}
	for (int j = 45; j < 50; j++) {
		nSpace[13][j] = 3;
		nSpace[23][j] = 3;
		nSpace[28][j] = 3;
	}
}
#if 1
void writemap() {
	FILE *fpFile = NULL;
	int Error = fopen_s(&fpFile, "map.txt", "w+");
	if (Error != 0) {
		printf("出错");
	}
	for (int i = 0; i < 40; i++) {
		for (int j = 0; j < 150; j++) {
		
			fprintf(fpFile, "%d\t", nSpace[i][j]);
		}
		fprintf(fpFile, "\n");
	}

	fclose(fpFile);
}

void readmap() {
	FILE *fpFile = NULL;
	int Error = fopen_s(&fpFile, "map.txt", "r+");
	if (Error != 0) {
		printf("暂时没有保存的地图，请去娱乐模式画一下吧!!!");
	}
	else {
		for (int i = 0; i < 40; i++) {
			memset(nSpace[i], 0, 150 * sizeof(int));
		}
		for (int i = 0; i < 40; i++) {
			for (int j = 0; j < 150; j++) {
				fscanf_s(fpFile, "%d\t", &nSpace[i][j]);

			}
			fscanf_s(fpFile, "\n");
		}
	}
	fclose(fpFile);
}
//自定义地图
void drawmap() {
	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);//获取标准输入句柄

	for (int i = 0; i < 40; i++) {
		for (int j = 0; j < 150; j++) {
			nSpace[i][j] = 0;
		}
	}
	//backgroudFile();
	//putMap();
	int enddrawmap = 0;                              //循环结束判断变量
	WriteChar(1, 0);
	printf(" \033[33m\033[1m左键点击开始画图");
	WriteChar(1, 2);
	printf("\033[33m\033[1m左键单击             \033[31m\033[1m¤");
	WriteChar(1, 3);
	printf("\033[33m\033[1m左键 加 CTRL         \033[36m\033[1m█");
	WriteChar(1,4);
	printf("\033[33m\033[1m左键单 加 SHIFT      \033[34m\033[1m█");
	WriteChar(1,6);
	printf("\033[33m\033[1m右键点击取消图案");
	WriteChar(1, 8);
	printf("\033[33m\033[1m空格键停止画图");
	system("pause");
	system("CLS");
	INPUT_RECORD ir = { 0 };                               // MOUSE_EVENT_RECORD所在的结构体
	DWORD dwRead = 0;                                  //存储读取记录
	COORD POS;
	SetConsoleMode(hstdin, ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT);

	while (enddrawmap != 1) {
		ReadConsoleInput(hstdin, &ir, 1, &dwRead);
		POS = ir.Event.MouseEvent.dwMousePosition;
		if (ir.EventType == MOUSE_EVENT) {               //如果是鼠标事件
		//	int mx = ir.Event.MouseEvent.dwMousePosition.X;//鼠标在控制台x轴的位置
		//	int my = ir.Event.MouseEvent.dwMousePosition.Y;//鼠标在控制台y轴的位置
		//posx = x;
		//	posy = y;

			if (GetAsyncKeyState(VK_LBUTTON)) {
				WriteChar1(POS.X / 2, POS.Y);
				printf("\033[31m\033[1m¤");
				nSpace[POS.Y][POS.X / 2] = 3;
				//std::cout<<POS.Y<<"  "<<POS.X/2;
			}
			if (GetAsyncKeyState(VK_RBUTTON)) {
				WriteChar1(POS.X / 2, POS.Y);
				printf("  ");
				nSpace[POS.Y][POS.X / 2] = 0; //MOUSE_EVENT_RECORD;
			}
			if (GetAsyncKeyState(VK_CONTROL)) {
				WriteChar1(POS.X / 2, POS.Y);
				printf("\033[36m\033[1m█");
				nSpace[POS.Y][POS.X / 2] = 4;
				
			}
			if (GetAsyncKeyState(VK_SHIFT)) {
				WriteChar1(POS.X / 2, POS.Y);
				printf("\033[34m\033[1m█");
				nSpace[POS.Y][POS.X / 2] = 5;

			}
		}
 			if (ir.EventType == KEY_EVENT) {
				if (GetAsyncKeyState(VK_SPACE)) {
					enddrawmap = 1;
					//for (int i = 0; i < 40; i++) {
					//	for (int j = 0; j < 150; j++) {
						//	int buf = 0;
						//	nSpace_draw[i][j] = nSpace[i][j];
							//nSpace[i][j]=
							//strcpy_s(nSpace_draw[i], nSpace[i]);
						//}
				//	}
				}
			
				
			
		}
	}
	writemap();
	enddrawmap = 0;

}
#endif

//选择地图

void select_mode() {
	hide();
	map_decide = 0;
	for (int i = 0; i < 40; i++) {
		memset(nSpace[i], 0, 150 * sizeof(int));
	}
	//nSpace[40][150] = { 0 };
	while (map_decide != 1) {
	
		system("CLS");
		levelpage();

		int nStart = 0;
		WriteChar(40, 18);
		printf("请输入：");
		scanf_s("%d", &nStart);
		for (int i = 0; i < 40; i++) {
			for (int j = 0; j < 150; j++) {
				nSpace[i][j] = 0;
			}
		}
		switch (nStart)
		{
		case 1: {
			system("CLS"); 
			start_animation(); 
			backgroudFile();
			putMap();
			map_decide = 1;
		}break;
		case 2: {
			system("CLS");
			start_animation();
			map_B(); 
			putMap();
			map_decide = 1;
		}break;
		case 3: {
			system("CLS");
			start_animation();
			drawmap();
			map_decide = 1;// 
			
		}break;
		case 4: {
			readmap();
			//for (int i = 0; i < 35; i++) {
				//strcpy_s(nSpace[i], nSpace_draw[i]);
		//	}
			putMap();
			map_decide = 1;
		}break;
		default:
			break;
		}
		nStart = 0;
	}
	}


#endif

#if 0
//void MOUSE_COORD() {
	//while (1) {
	//	POINT pt;
	//	//HWND Set
	//	GetCursorPos(&pt);
	//	//ScreenToClient()
	//	//ClientToScreen(HWND)
	//	SetCursorPos(pt.x, pt.y);
char nSpace[25][90] = { 0 };
for (int i = 4; i < 24; i++) {
	for (int j = 0; j < 90; j++) {
		nSpace[0][j] = '-';
		nSpace[4][j] = '-';
		nSpace[24][j] = '-';
		nSpace[i][0] = '|';
		nSpace[i][9] = '|';
		nSpace[i][69] = '|';
		nSpace[i][89] = '|';
	}
}
for (int i = 1; i < 5; i++) {
	nSpace[i][0] = '|';
	nSpace[i][89] = '|';
}
nSpace[15][30] = '#';
for (int i = 0; i < 25; i++) {
	for (int j = 0; j < 90; j++)
	{
		std::cout << nSpace[i][j];
	}
	printf("\n");
}
}
#endif
#if 0
void backgroudFile_lever2() {
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

#endif	