#include "conio.h"
#include "data.h"
#include "pch.h"
#include <iostream>
#include "fileInfo.h"
#include "windows.h"
//ע��ҳ��
void index() {
	printf("                  ***************************************************\n");
	printf("                  *                                                 *\n");
	printf("                  *           ��ӭ����̰������Ϸ                    *\n");
	printf("                  *            ���ȵ�¼�����˻�                     *\n");
	printf("                  *                                                 *\n");
	printf("                  *               1.  ��¼                          *\n");
	printf("                  *               2.  ע��                          *\n");
	printf("                  *                                                 *\n");
	printf("                  ***************************************************\n");
	
}
//��ʼҳ��
void gamestart() {
	printf("           ��ӭ����̰������Ϸ                     \n");
	printf("                                                  \n");
	printf("**************************************************\n");
	printf("                                                  \n");
	printf("              �������£�                          \n");
	printf("     'w'����   's'����   'a'����  'd'����         \n");
	printf("          ײ��ǽ����Ϸ����                        \n");
	printf("                                                  \n");
}
void levelpage() {
	printf("           ������ʼ̰������Ϸ                     \n");
	printf("              ��ѡ��ؿ�                          \n");
	printf("               1. ����                            \n");
	printf("               2. ��                            \n");
	printf("               3. ����                            \n");
}
void gameover() {

	int g_Temp_gameover = 0;
	printf("****************************************************\n");
	printf("*                                                  *\n");
	printf("*                                                  *\n");
	printf("*                                                  *\n");
	printf("*               GAME  OVER                         *\n");
	printf("*                 ~ _ ~                            *\n");
	printf("*                                                  *\n");
	printf("*              �Ƿ����¿�ʼ                        *\n");
	printf("*           1. ��      2.��                        *\n");
	printf("*                                                  *\n");
	printf("****************************************************\n");
	while (g_Temp_gameover == 0) {
		gameover_fun();
	}
	//sccanf("%d")
}
//����30*60
void backgroudFile() {
#if 1
	char nSpace[25][90] = { 0 };
	for (int i = 4; i < 25; i++) {
		for (int j = 0; j < 90; j++) {
			nSpace[0][j] = 5;
			nSpace[4][j] = 5;
			nSpace[24][j] = 5;
			nSpace[i][0] = 4;
			nSpace[i][9] = 4;
			nSpace[i][69] = 4;
			nSpace[i][89] = 4;
		}
	}
	for (int i = 1; i < 5; i++) {
		nSpace[i][0] = 4;
		nSpace[i][89] = 4;
	}
	//for (int i = 7; i < 15; i++) {
	//	nSpace[i][10] = 5;
	//}
	//for (int k = 15; k < 24; k++) {
	//	nSpace[k][49] = 5;
	//}
	//for (int j = 10; j < 50; j++) {
	//	nSpace[7][j] = 5;
	//	nSpace[15][j] = 5;
	//	nSpace[23][j] = 5;
	//}
	for (int j = 0; j < 25; j++) {
		for (int i = 0; i < 90; i++) {
			switch (nSpace[j][i]) {
			case 0:printf(" "); break;
			case 5:printf("_"); break;
			case 4:printf("|"); break;
			}
		}
		printf("\n");
		
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

#endif	}
}