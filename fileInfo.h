#pragma once
/*    
�������
*/
extern void start_game();

 /*  windows   */
void putSet();
void hide();
void WriteChar(int x, int y);
void hideput();
char GetOper();

/*    ҳ��    */

void index();           //��¼ע��ҳ��
void gamestart();
void levelpage();
void gameover();
void confilm();


/*����*/
void food_coordinate();
void nSnake_height();
//void direcion_Snake();      //�жϷ���
int  judge_wall();
void eat_food();


/*ҳ�湦��*/
void Snakescore();
void SnakeLevel();
void SnakeSpeed();
void gameover_fun();          //����ҳ��Ĺ���
//void  SnakeStart();           //��ʼҳ�湦��
void  judge();
void  Snakefont();
void select_mode();
void rank();

/*ע���¼��Ϣ*/
void dealAcc();


/*  ��ͼ����  */
void backgroudFile();
void putMap();
void map_B();