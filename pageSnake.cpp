/*

*����ͼ��


*/


#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include <time.h>
#include "fileInfo.h"
using std::cout;
using std::endl;

//ע��ҳ��
void index() {
	printf(" \033[36m\033[1m                                                   ***************************************************\n");
	printf("                                                    *                                                 *\n");
	printf("                                                    *           ��ӭ����̰������Ϸ                    *\n");
	printf("                                                    *            ���ȵ�¼�����˻�                     *\n");
	printf("                                                    *                                                 *\n");
	printf("                                                    *               1.  ��¼                          *\n");
	printf("                                                    *               2.  ע��                          *\n");
	printf("                                                    *                                                 *\n");
	printf("                                                    ***************************************************\n");
	WriteChar(30, 15);
	printf("******************************");
	for (int i = 16; i < 22; i++) {
		WriteChar(30, i);
		printf("*");
		WriteChar(44, i);
		printf("*");
	}
	WriteChar(30, 22);
	printf("******************************");
	WriteChar(32, 18);
	printf("�˻���");
	WriteChar(32, 20);
	printf("���룺");
}
//��ʼҳ��
void gamestart() 
{
	printf("                              ��ӭ����̰������Ϸ                     \n");
	printf("                                                                     \n");
	printf("            *********************************************************\n");
	printf("                                                                     \n");
	printf("                                 �������£�                          \n");
	printf("                                                                     \n");
	printf("                             \n");
	printf("                                                                     \n");
	printf("                           ����������100��������һ�ȼ�                              \n");
	printf("                                                                     \n");
	printf("                                 1.ײ��ǽ����Ϸ����                        \n");
	printf("                                                                     \n");
	printf("                                 2.�벻Ҫ��ͷ��                        \n");
	printf("                                 3.�벻Ҫ��ͷ��                        \n");
	printf("                                 4.�벻Ҫ��ͷ��                        \n");
	printf("                                                                     \n");
}
void gamestart1()
{
	printf("                              ��ӭ����̰������Ϸ                     \n");
	printf("                                                                     \n");
	printf("                      *********************************************************\n");
	printf("                                                                               \n");
	printf("                                                                               \n");	printf("                                                                               \n");
	printf("                                           �������£�                          \n");
	printf("                                                                               \n");
	printf("                                       �ո����ͣ                            \n");
	printf("                                                                               \n");
	printf("                             'w'����   's'����   'a'����  'd'����                   \n");
	printf("                                                                               \n");
	printf("                                  \033[36m\033[1m�e  ��������        \n");
	printf("                                                                               \n");
	printf("                                  \033[35m\033[1m��  ����                    \n");
	printf("                                                                               \n");
	printf("                                  \033[32m\033[1m��  ����                      \n");
	printf("                                                                         \n");
	
	printf("                                                                     \n");
}
void levelpage()
{
	printf("\033[34m\033[1m\n");
	printf("                                 # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   \n");
	printf("                                                 �� �� �� ʼ ̰ �� �� �� Ϸ                     \n");
	printf("                                                                                                \n");
	printf("                                                                                                \n");
	printf("                                                         ��ѡ���ͼ                             \n");
	printf("                                                                                                \n");
	printf("                                                          1. ����                            \n");
	printf("                                                          2. ��                            \n");
	printf("                                                          3. ����                            \n");
	printf("                                                                                                \n");

}
void gameover() {

	
	printf("              ****************************************************\n");
	printf("              *                                                  *\n");
	printf("              *                                                  *\n");
	printf("              *                                                  *\n");
	printf("              *               GAME  OVER                         *\n");
	printf("              *                 ~ _ ~                            *\n");
	printf("              *                                                  *\n");
	printf("              *              �Ƿ����¿�ʼ                        *\n");
	printf("              *           1. ��      2.��                        *\n");
	printf("              *                                                  *\n");
	printf("              ****************************************************\n");
	
	
}
void confilm() {
	WriteChar(20, 5);
	std::cout << "�Ƿ�ʼ��Ϸ" << std::endl;
	WriteChar(15, 10);
	std::cout << "��" << std::endl;
	WriteChar(30, 10);
	std::cout << "��" << std::endl;
}

