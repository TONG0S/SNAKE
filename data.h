#pragma once
#define  UP 0
#define  DOWN 1
#define  LEFT 2
#define  RIGHT 3

typedef struct _coordinate
{
	int x = 0;
	int y = 0;
}coordinate;
extern  coordinate food;
extern  coordinate food_accelerate;
extern  coordinate food_decelerate;
extern  coordinate nSnake_coord[3000];
extern  coordinate nSnakeother_coord[3000];
extern int x;
extern int y;
extern int score ;
extern int level ;
extern int Lenght;
//extern int nDir;
extern int speed;  //加速
extern bool e;
extern char nSpace[35][150];
extern char nSpace_draw[35][150];
extern char bufAcc[30];
extern int map_decide;
typedef struct _gameinfo
{
	
	int score = 0;
	char chAccount[30] = { 0 };
}GAMEINFO, *pGAMEINFO;
extern  GAMEINFO *g_gameLog;      //存放信息
extern int g_gamenum;             //存放信息条数