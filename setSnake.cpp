/*

*  windows控制台编程

*/
#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "time.h"
#include "fileInfo.h"
#pragma comment(lib,"winmm.lib")
int posx=0;//鼠标坐标
int posy=0;

HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);

//中文输入及其他设置
void putSet() {
	system("title snake");
	system("color 0F");
	system("mode con cols=170 lines=40");
	keybd_event(VK_SHIFT, 0, 0, 0);
	Sleep(100);
	keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0);
	PlaySoundA("Mermaid_MiyanoMamoru.wav", NULL, SND_ASYNC | SND_NODEFAULT);
	//int nSelect = MessageBox(NULL, TEXT("开始贪吃蛇小游戏"), TEXT("贪吃蛇"), MB_OKCANCEL);
	//if (nSelect == IDOK) {
	//	MessageBox(NULL, TEXT("即将开始游戏"), TEXT("提示"), MB_OK);
	//}
	//else {
	//	MessageBox(NULL, TEXT("关闭游戏"), TEXT("提示"), MB_OK);
	//	exit(1); system("E:\ruanjian\daima\vs\C_preject\procedure\SNAKE\Debug\SNAKE.exe -t -f");
	//}

}

         // 隐藏光标 windows.h
		void hide()
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
		SetConsoleCursorInfo(hStd, &cursor_info);
	}


		//显示光标 windows.h
		void hideput()
		{
			CONSOLE_CURSOR_INFO cursor_info = { 6,1 };
			SetConsoleCursorInfo(hStd, &cursor_info);
		}
		


		void WriteChar(int x, int y)
		{
			//获取一个输出句柄
			COORD stcPos = { x * 2,y };
			//设置控制台光标位置
			SetConsoleCursorPosition(hStd, stcPos);
		}


		//判断是否按下，并以无回显的方式获取一个按键
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
				std::cout << "暂停";
				system("pause");
				WriteChar(35, 35);
				std::cout << "                     ";
			
			}
		}
#if 0
		
		void Mouse_info()
		{
			
			HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);//获取标准输入句柄
			
			INPUT_RECORD ir = { 0 };                               // MOUSE_EVENT_RECORD所在的结构体
			DWORD dwRead=0;                                  //存储读取记录
			SetConsoleMode(hstdin, ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT);
			
				ReadConsoleInput(hstdin, &ir, sizeof(ir), &dwRead);
				if (ir.EventType == MOUSE_EVENT) {               //如果是鼠标事件
					int mx = ir.Event.MouseEvent.dwMousePosition.X;//鼠标在控制台x轴的位置
					int my = ir.Event.MouseEvent.dwMousePosition.Y;//鼠标在控制台y轴的位置
					posx = x;
					posy = y;
				
			}
		}
#endif