#include "data.h"
#include "log_in.h"
//coordinate *nSnake_coord=nullptr;
coordinate nSnake_coord[3000];
coordinate nSnakeother_coord[3000];
coordinate food;
coordinate food_accelerate;
coordinate food_decelerate;
nAccount *g_Log = nullptr;
GAMEINFO *g_gameLog = nullptr;
int map_decide = 0;
int g_gamenum = 0;
//ȫ�ֵ���
int x;
int y;

int Lenght;
int score = 0;
int level = 1;
int speed = 300;//�ٶ�

bool e = true;
char bufAcc[30] = { 0 };
char bufWord[30] = { 0 };//��ǰ�˻�

