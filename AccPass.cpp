

#include "fileInfo.h"
#include "log_in.h"
#include <iostream>
#include <string.h>
#include "windows.h"
#include "data.h"
int g_num = 0;
int nTemp = 0;
int decide = 0;

//从文件读入页面

void read_Account() {
	FILE *fpFile = NULL;
	int Error = fopen_s(&fpFile, "accout_pass.txt", "rb+");
	if (Error != 0) {
		g_Log = (nAccount *)calloc(4  * sizeof(nAccount), 1);
	}
	else {
		fread(&g_num, 4, 1, fpFile);
		g_Log = (nAccount *)calloc(g_num * 2* sizeof(nAccount), 1);
		for (int i = 0; i < g_num; i++) {
			//fscanf_s(fpFile, "\n");
			fscanf_s(fpFile, "%s\n", g_Log[i].chName,30);
			fscanf_s(fpFile, "%s\n", g_Log[i].chPassword,30);
			
		}
		fclose(fpFile);
	}
	
}
//从文件写入页面
void write_Account() {
	FILE *fpFile = NULL;
	int Error = fopen_s(&fpFile, "accout_pass.txt", "wb+");
	if (Error != 0) {
		printf("出错");
	}
	fwrite(&g_num, 4, 1, fpFile);
	for (int i = 0; i < g_num; i++) {
		

		fprintf(fpFile, "%s\n", g_Log[i].chName);
		fprintf(fpFile, "%s\n", g_Log[i].chPassword);
	}
	fclose(fpFile);
}
void log_in() {
	if (g_num > 1){
		nAccount *Temp_log = (nAccount *)calloc(g_num * 2 * sizeof(nAccount), 1);
	memcpy(Temp_log, g_Log, g_num * 2 * sizeof(nAccount));
	free(g_Log);
	g_Log = Temp_log;
}
	WriteChar(36, 18);
	scanf_s("%s", g_Log[g_num].chName, 30);
	WriteChar(36, 20);
	scanf_s("%s", g_Log[g_num].chPassword, 30);
	g_num++;
	WriteChar(36, 27);
	printf("注册成功！！！");
	Sleep(600);
}
void Account() 
{
	int nAcc = 1;
	int nWord = 1;
	//char bufAcc[30] = { 0 };
	char bufWord[30] = { 0 };

	WriteChar(36, 18);
	scanf_s("%s", bufAcc, 30);
	WriteChar(36, 20);
	scanf_s("%s", bufWord, 30);
	WriteChar(36, 27);
	for (int i = 0; i < g_num; i++) {
		nAcc = strcmp(bufAcc, g_Log[i].chName);
		nWord = strcmp(bufWord, g_Log[i].chPassword);
		if (nAcc==0&&nWord==0) {
			decide = 1;
			printf("登录成功!!!");
			strcpy_s(bufAcc, g_Log[i].chName);
			strcpy_s(bufWord, g_Log[i].chPassword);
		
				break;
	}
	}
	if (nAcc == 0 && nWord != 0) {
		printf("密码错误");
		Sleep(600);
	}
	else if (nWord == 0 && nAcc != 0) {
		
		printf("账户错误");
		
	}
	else if (nWord != 0 && nAcc != 0) {
		printf("账户密码错误");

	}
}
void dealAcc() {
	read_Account();
	while (decide!=1) {
		decide = 0;
		index();
		WriteChar(32, 16);
		printf("请输入：");
		scanf_s("%d", &nTemp);
		printf("\n");
		switch (nTemp)
		{
		case 1:Account(); Sleep(600); break;
		case 2:log_in(); write_Account(); break;
		default:
			break;
			
		}
		system("CLS");
	}
}
