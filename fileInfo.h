#pragma once
/*    
存放声明
*/
 extern void start_game();

 /*  windows   */
void putSet();
void hide();
void WriteChar(int x, int y);
void WriteChar2(int x, int y, const char* pStr);
void hideput();
char GetOper();
void pause_game();//暂停
void things();
/*    页面    */

void index();           //登录注册页面
void gamestart();
void levelpage();
void gameover();
void confilm();
void gamestart1();

/*功能*/
void PROPS();     //所有道具

void food_coordinate();
void props_accelerate();
void props_decelerate();
void nSnake_height();
//void direcion_Snake();      //判断方向
int  judge_wall();
void eat_food();



/*页面功能*/
void Snakescore();
void SnakeLevel();
void SnakeSpeed();
void gameover_fun();          //结束页面的功能
//void  SnakeStart();           //开始页面功能
void  judge();
void  Snakefont();
void select_mode();
void rank();

/*注册登录信息*/
void dealAcc();


/*  地图处理  */
void backgroudFile();
void putMap();
void map_B();


//存读档
void write_game();
void read_game();