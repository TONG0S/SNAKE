#include "fileInfo.h"
#include "log_in.h"
#include <iostream>
#include <string.h>
#include "windows.h"
#include "algorithm"
#include "data.h"
using std::swap;
#if 1
//д����Ϣ
void write_game() {
	int decide = 0;
	for (int i = 0; i < g_gamenum; i++) {
		if (strcmp(bufAcc,g_gameLog[i].chAccount)==0){          //�ж��Ƿ���ڸ��˻�
			if (score >= g_gameLog[i].score) {          //�жϴ˷����Ƿ��Ǹ��˻���ߵ�
				g_gameLog[i].score = score;
			}
			strcpy_s(g_gameLog[i].chAccount, bufAcc);
			decide = 1;
	}
	}
	while (decide != 1) {
		g_gameLog[g_gamenum].score = score;
		strcpy_s(g_gameLog[g_gamenum].chAccount, bufAcc);
		g_gamenum++;
		decide = 1;
	}
	
	if (g_gamenum > 1) {
		GAMEINFO *Temp_log = (GAMEINFO *)calloc(g_gamenum * 2 * sizeof(GAMEINFO), 1);
		memcpy(Temp_log, g_gameLog, g_gamenum * 2 * sizeof(GAMEINFO));
		free(g_gameLog);
		g_gameLog = Temp_log;
	}
	FILE *fpFile = NULL;
	int Error = fopen_s(&fpFile, "game_info.txt", "w+");
	if (Error != 0) {
		printf("����");
	}
	fwrite(&g_gamenum, 4, 1, fpFile);
	for (int i = 0; i < g_gamenum; i++) {         //��������С���д��
	for (int j = g_gamenum-1; j >i; j--) {
		if (g_gameLog[i].score < g_gameLog[j].score) {
			int nbuff = 0;
			nbuff = g_gameLog[i].score;
			g_gameLog[i].score = g_gameLog[j].score;
			g_gameLog[j].score = nbuff;
			char buff[30] = { 0 };
			strcpy_s(buff, g_gameLog[i].chAccount);
			strcpy_s(g_gameLog[i].chAccount, g_gameLog[j].chAccount);
			strcpy_s(g_gameLog[j].chAccount, buff);
		}
		}
	}
		for (int i = 0; i < g_gamenum; i++) {
		fprintf(fpFile, "%d\n", g_gameLog[i].score);
		fprintf(fpFile, "%s\n", g_gameLog[i].chAccount);
	}
		
	fclose(fpFile);
}


//��ȡ��Ϸ��Ϣ
void read_game() {
	FILE *fpFile = NULL;
	int Error = fopen_s(&fpFile, "game_info.txt", "r+");
	if (Error != 0) {
		g_gameLog = (GAMEINFO *)calloc(4 * sizeof(GAMEINFO), 1);
	}
	else {

		fread(&g_gamenum, 4, 1, fpFile);
		g_gameLog = (GAMEINFO *)calloc(g_gamenum * 2 * sizeof(GAMEINFO), 1);
		for (int i = 0; i < g_gamenum; i++) {
			//fscanf_s(fpFile, "\n");
			fscanf_s(fpFile, "%d\n", &g_gameLog[i].score);
			fscanf_s(fpFile, "%s\n", g_gameLog[i].chAccount, 30);

		}
		fclose(fpFile);
	}

}
#endif