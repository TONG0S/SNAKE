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
int posx=0;//�������
int posy=0;

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
	//int nSelect = MessageBox(NULL, TEXT("��ʼ̰����С��Ϸ"), TEXT("̰����"), MB_OKCANCEL);
	//if (nSelect == IDOK) {
	//	MessageBox(NULL, TEXT("������ʼ��Ϸ"), TEXT("��ʾ"), MB_OK);
	//}
	//else {
	//	MessageBox(NULL, TEXT("�ر���Ϸ"), TEXT("��ʾ"), MB_OK);
	//	exit(1); system("E:\ruanjian\daima\vs\C_preject\procedure\SNAKE\Debug\SNAKE.exe -t -f");
	//}

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
		


		void WriteChar(int x, int y)
		{
			//��ȡһ��������
			COORD stcPos = { x * 2,y };
			//���ÿ���̨���λ��
			SetConsoleCursorPosition(hStd, stcPos);
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
#if 0
		
		void Mouse_info()
		{
			
			HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);//��ȡ��׼������
			
			INPUT_RECORD ir = { 0 };                               // MOUSE_EVENT_RECORD���ڵĽṹ��
			DWORD dwRead=0;                                  //�洢��ȡ��¼
			SetConsoleMode(hstdin, ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT);
			
				ReadConsoleInput(hstdin, &ir, sizeof(ir), &dwRead);
				if (ir.EventType == MOUSE_EVENT) {               //���������¼�
					int mx = ir.Event.MouseEvent.dwMousePosition.X;//����ڿ���̨x���λ��
					int my = ir.Event.MouseEvent.dwMousePosition.Y;//����ڿ���̨y���λ��
					posx = x;
					posy = y;
				
			}
		}
#endif