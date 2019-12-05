#include "data.h"
#include "log_in.h"
//COORDINATE *nSnake_coord=nullptr;
COORDINATE nSnake_coord[3000];
COORDINATE nSnakeother_coord[3000];
COORDINATE g_Food;
COORDINATE g_Food_Accelerate;
COORDINATE g_Food_Decelerate;
nAccount *g_Log = nullptr;
GAMEINFO *g_gameLog = nullptr;
int map_decide = 0;
int g_gamenum = 0;
//全局调用
int x;
int y;

int g_Lenght;
int g_Score = 0;
int g_Level = 1;
int g_Speed = 300;//速度

bool e = true;
char bufAcc[30] = { 0 };
char bufWord[30] = { 0 };//当前账户

