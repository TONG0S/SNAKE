#pragma once
typedef struct _Account 
{
	char chName[30] = { 0 };
	char chPassword[30] = { 0 };
}nAccount,*pAccount;
extern  nAccount *g_Log;//�����Ϣ
extern int decide;
extern int g_num;//�����Ϣ����
extern int g_num;//�����Ϣ����
extern int nTemp;