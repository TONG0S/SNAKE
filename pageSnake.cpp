
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
	printf("                                                    ***************************************************\n");
	printf("                                                    *                                                 *\n");
	printf("                                                    *           ��ӭ����̰������Ϸ                    *\n");
	printf("                                                    *            ���ȵ�¼�����˻�                     *\n");
	printf("                                                    *                                                 *\n");
	printf("                                                    *               1.  ��¼                          *\n");
	printf("                                                    *               2.  ע��                          *\n");
	printf("                                                    *                                                 *\n");
	printf("                                                    ***************************************************\n");
	WriteChar(60, 15);
	printf("******************************");
	for (int i = 16; i < 22; i++) {
		WriteChar(30, i);
		printf("*");
		WriteChar(45, i);
		printf("*");
	}
	WriteChar(30, 22);
	printf("******************************");
	WriteChar(31, 18);
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
	printf("                        'w'����   's'����   'a'����  'd'����         \n");
	printf("                             ײ��ǽ����Ϸ����                        \n");
	printf("                                                                     \n");
}
void levelpage()
{
	printf("                                 # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   \n");
	printf("                                                 �� �� �� ʼ ̰ �� �� �� Ϸ                     \n");
	printf("                                                                                                \n");
	printf("                                                                                                \n");
	printf("                                                         ��ѡ��ؿ�                             \n");
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

