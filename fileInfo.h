#pragma once
/*    
�������
*/
 extern void start_game();

 /*  windows   */
void putSet();
void hide();
void WriteChar(int x, int y);
void Mouse_info();
//void WriteChar2(int x, int y, const char* pStr);
void hideput();
char GetOper();
void pause_game();//��ͣ
void exit_game(); //�˳�

/*    ҳ��    */

void start_animation();
void index();           //��¼ע��ҳ��
void gamestart();
void levelpage();
void gameover();
void confilm();
void gamestart1();

/*����*/
void PROPS();     //���е���

void food_coordinate();
void props_accelerate();
void props_decelerate();
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
void writemap();
void readmap();

//�����
void write_game();
void read_game();