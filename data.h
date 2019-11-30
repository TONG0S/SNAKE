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
extern  coordinate nSnake_coord[3000];
extern int x;
extern int y;
extern int score ;
extern int level ;
extern int Lenght;
extern int speed;
extern bool e;
//extern char  nSpace[30][30];
//extern void backgroudFile();
//extern void WriteChar(int x, int y, const char* szbuf);
//char GetOper();
//struct coordinate
//{
//	int x = 0;
//	int y = 0;
//};
//extern struct coordinate food;
//extern struct coordinate nSnake_coord[100];
// 