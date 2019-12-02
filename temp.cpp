#include "data.h"
#include "log_in.h"
//coordinate *nSnake_coord=nullptr;
coordinate nSnake_coord[3000];
coordinate food;
nAccount *g_Log = nullptr;
//全局调用的
int x;
int y;
int Lenght;
int score = 0;
int level = 1;
int speed = 300;//速度
bool e = true;
char bufAcc[30] = { 0 };
char bufWord[30] = { 0 };//当前账户