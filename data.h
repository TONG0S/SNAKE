#pragma once
#define  UP 0
#define  DOWN 1
#define  LEFT 2
#define  RIGHT 3

typedef struct _COORDINATE
{
	int x = 0;
	int y = 0;
}COORDINATE;
extern  COORDINATE g_Food;
extern  COORDINATE g_Food_Accelerate;
extern  COORDINATE g_Food_Decelerate;
extern  COORDINATE nSnake_coord[3000];
extern  COORDINATE nSnakeother_coord[3000];
extern int x;
extern int y;
extern int g_Score ;
extern int g_Level;
extern int g_Lenght;
//extern int nDir;
extern int g_Speed;  //加速
extern bool e;
extern int nSpace[40][150];
extern char bufAcc[30];
extern int map_decide;
typedef struct _gameinfo
{
	
	int g_Score = 0;
	char chAccount[30] = { 0 };
}GAMEINFO, *pGAMEINFO;
extern  GAMEINFO *g_gameLog;      //存放信息
extern int g_gamenum;             //存放信息条数