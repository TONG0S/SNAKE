#pragma once
/*    
存放声明
*/
 extern void Start_Game();

 /*  windows   */
void PutSet();
void Hide();
void WriteChar(int x, int y);
void Mouse_info();
//void WriteChar2(int x, int y, const char* pStr);

char GetOper();
void pause_game();//暂停
void Exit_Game(); //退出

/*    页面    */

void Start_Animation();
void Index();           //登录注册页面
void GameStart();
void levelpage();
void GameOver();
void ConFilm();
void GameStart1();

/*页面功能*/
void Snakescore();
void SnakeLevel();
void SnakeSpeed();
void  Gameover_Fun();          //结束页面的功能
//void  SnakeStart();           //开始页面功能
void  Judge();
void  Snakefont();
void Select_Mode();
void Rank();

/*功能*/
void PROPS();     //所有道具
void Food_Coordinate();
void Props_Accelerate();
void Props_Decelerate();
void nSnake_height();
//void direcion_Snake();      //判断方向
int  Judge_Wall();
void Eat_Food();





/*注册登录信息*/
void DealAcc();


/*  地图处理  */
void BackgroudFile();
void PutMap();
void Map_B();
void WriteMap();
void ReadMap();

//存读档
void Write_Game();
void Read_Game();