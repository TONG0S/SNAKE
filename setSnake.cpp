#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "time.h"
#pragma comment(lib,"winmm.lib")
HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
//�������뼰��������
void putSet() {
	system("title snake");
	keybd_event(VK_SHIFT, 0, 0, 0);
	Sleep(100);
	keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0);
	PlaySoundA("E:\\ruanjian\\daima\\vs\\C_preject\\procedure\\SNAKE\\Mermaid_MiyanoMamoru.wav", NULL, SND_ASYNC | SND_NODEFAULT);

}
// ���ع�� windows.h
		void hide()
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
		SetConsoleCursorInfo(hStd, &cursor_info);
	}
		void WriteChar(int x, int y)
		{

			//��ȡһ��������
			COORD stcPos = { x,y };
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