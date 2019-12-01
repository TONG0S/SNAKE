#include "conio.h"
#include "data.h"
#include <iostream>
#include "fileInfo.h"
#include "Snake_map.h"
//±³¾°30*60
int nSpace[35][110] = { 0 };
void backgroudFile() {
#if 1


	for (int j = 0; j < 110; j++) {
		nSpace[0][j] = 5;
		nSpace[9][j] = 5;
		nSpace[34][j] = 5;
	}
			for (int i = 10; i < 35; i++) {
			nSpace[i][0] = 4;
			nSpace[i][14] = 4;
			nSpace[i][79] = 4;
			nSpace[i][109] = 4;
		}
	
    for (int i = 1; i < 10; i++) {
    	nSpace[i][0] = 4;
    	nSpace[i][109] = 4;
    }
	
}
void putMap() {
	for (int j = 0; j < 35; j++) {
		for (int i = 0; i < 110; i++) {
			switch (nSpace[j][i]) {
			case 0:printf(" "); break;
			case 5:printf("_"); break;
			case 4:printf("|"); break;
			case 3:printf("…e"); break;
			}
		}
		printf("\n");

	}
}

#endif	
#if 1
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
void select_mode() {
	levelpage();
		int nStart = 0;
		//printf("ÇëÊäÈë£º");
	
	
		scanf_s("%d", &nStart);
		switch (nStart)
		{
		case 1:system("CLS"); backgroudFile(); putMap(); break;
		case 2: system("CLS"); map_B(); putMap(); break;
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