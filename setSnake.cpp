/*

*  windows����̨���

*/
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "time.h"
#include "fileInfo.h"
#pragma comment(lib,"winmm.lib")
HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
//�������뼰��������
void putSet() {
	system("title snake");
	system("color 0F");
	system("mode con cols=170 lines=40");
	keybd_event(VK_SHIFT, 0, 0, 0);
	Sleep(100);
	keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0);
	PlaySoundA("Mermaid_MiyanoMamoru.wav", NULL, SND_ASYNC | SND_NODEFAULT);

}
//�¼�
void things() {
	
}
// ���ع�� windows.h
		void hide()
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
		SetConsoleCursorInfo(hStd, &cursor_info);
	}
		//��ʾ��� windows.h
		void hideput()
		{
			CONSOLE_CURSOR_INFO cursor_info = { 6,1 };
			SetConsoleCursorInfo(hStd, &cursor_info);
		}
		//void WriteChar2(int x, int y,const char* pStr)
		//{

		//	//��ȡһ��������
		//	COORD stcPos = { x*2,y };
		//	//���ÿ���̨���λ��
		//	SetConsoleCursorPosition(hStd, stcPos);
		//	//����ַ���
		//	
		//	std::cout << pStr;
		//}
		void WriteChar(int x, int y)
		{

			//��ȡһ��������
			COORD stcPos = { x * 2,y };
			//���ÿ���̨���λ��
			SetConsoleCursorPosition(hStd, stcPos);
			//����ַ���
	
		}
		//�ж��Ƿ��£������޻��Եķ�ʽ��ȡһ������
		char GetOper()
		{
			if (_kbhit())
			{
				return _getch();
			}
		}
		void pause_game() {
			if(GetAsyncKeyState(VK_SPACE)){
				WriteChar(35, 35);
				std::cout << "��ͣ";
				system("pause");
				WriteChar(35, 35);
				std::cout << "                     ";
			
			}
		}