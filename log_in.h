#pragma once
typedef struct _Account 
{
	char chName[30] = { 0 };
	char chPassword[30] = { 0 };
}nAccount,*pAccount;
extern  nAccount *g_Log;//存放信息
extern int decide;
extern int g_num;//存放信息条数
extern int g_num;//存放信息条数
extern int nTemp;