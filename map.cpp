#include "conio.h"
#include "data.h"
#include <iostream>
#include "fileInfo.h"

#include <windows.h>

//����30*60
char nSpace[35][150] = { 0 };
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
	//��ȡһ��������
	COORD stcPos = { x*2,y };
	//���ÿ���̨���λ��
	SetConsoleCursorPosition(hStd, stcPos);
	//����ַ���

}

void putMap(){
	for (int j = 0; j < 35; j++) {
		for (int i = 0; i < 70; i++) {
			WriteChar1( i,j);
			switch (nSpace[j][i]) {
			case 0:printf("  "); break;
			case 5:printf("\033[34m\033[1m�� "); break;
			case 4:printf("\033[36m\033[1m��"); break;
			case 3:printf("\033[31m\033[1m��"); break;
			}
		}
		//printf("\n");
		//printf("111");

	}
}

#endif	
#if 1
//�򵥵�ͼ
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
#if 0
//�Զ����ͼ
void drawmap() {
	COORD pos;    //�洢���λ��
	DWORD dwread;//�洢��ȡ��¼
	
	INPUT_RECORD ir;
	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);//��ȡ��׼������
	int enddrawmap = 0;
	while (enddrawmap != 1) {
		ReadConsoleInput(hstdin, &ir, 1, &dwread);
		pos = ir.Event.MouseEvent.dwMousePosition;
		if(ir.EventType==MOUSE_EVENT){
			VOID MouseEventProc(MOUSE_EVENT_RECORD mer){
				switch (mer.dwEventFlags) {

					if (mer.Event.MouseEvent)

				}
			}

	}
}
#endif
//ѡ���ͼ
void select_mode() {
	system("CLS");
	levelpage();
	
		int nStart = 0;
		WriteChar(20, 10);
		printf("�����룺");
		scanf_s("%d", &nStart);
		for (int i = 0; i < 30; i++) {
			for (int j = 0; j < 150; j++) {
				nSpace[i][j] = 0;
			}
		}
		switch (nStart)
		{
		case 1: {
			system("CLS"); backgroudFile(); putMap();
		}break;
		case 2: {
			system("CLS"); map_B(); putMap();
		}break;
		default:
			break;
		}
	}


#endif

#if 0
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