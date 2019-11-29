#pragma once
typedef struct _Account 
{
	char chName[30] = { 0 };
	char chPassword[30] = { 0 };
}nAccount;
extern  nAccount *g_Log;//存放信息

extern int num;//存放信息条数