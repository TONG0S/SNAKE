#pragma once
/*    
�������
*/
 extern void Start_Game();

 /*  windows   */
void PutSet();
void Hide();
void WriteChar(int x, int y);
void Mouse_info();
//void WriteChar2(int x, int y, const char* pStr);

char GetOper();
void pause_game();//��ͣ
void Exit_Game(); //�˳�

/*    ҳ��    */

void Start_Animation();
void Index();           //��¼ע��ҳ��
void GameStart();
void levelpage();
void GameOver();
void ConFilm();
void GameStart1();

/*ҳ�湦��*/
void Snakescore();
void SnakeLevel();
void SnakeSpeed();
void  Gameover_Fun();          //����ҳ��Ĺ���
//void  SnakeStart();           //��ʼҳ�湦��
void  Judge();
void  Snakefont();
void Select_Mode();
void Rank();

/*����*/
void PROPS();     //���е���
void Food_Coordinate();
void Props_Accelerate();
void Props_Decelerate();
void nSnake_height();
//void direcion_Snake();      //�жϷ���
int  Judge_Wall();
void Eat_Food();





/*ע���¼��Ϣ*/
void DealAcc();


/*  ��ͼ����  */
void BackgroudFile();
void PutMap();
void Map_B();
void WriteMap();
void ReadMap();

//�����
void Write_Game();
void Read_Game();