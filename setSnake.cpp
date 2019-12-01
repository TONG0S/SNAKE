#include <iostream>
#include "windows.h"
#include "conio.h"
#include "data.h"
#include "time.h"
#include "fileInfo.h"
#pragma comment(lib,"winmm.lib")
HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
//中文输入及其他设置
void putSet() {
	system("title snake");
	system("color 8F");
	system("mode con cols=150 lines=40");
	keybd_event(VK_SHIFT, 0, 0, 0);
	Sleep(100);
	keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0);
	PlaySoundA("E:\\ruanjian\\daima\\vs\\C_preject\\SNAKE\\Mermaid_MiyanoMamoru.wav", NULL, SND_ASYNC | SND_NODEFAULT);

}
// 隐藏光标 windows.h
		void hide()
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
		SetConsoleCursorInfo(hStd, &cursor_info);
	}
		void WriteChar(int x, int y)
		{

			//获取一个输出句柄
			COORD stcPos = { x,y };
			//设置控制台光标位置
			SetConsoleCursorPosition(hStd, stcPos);
			//输出字符串

		}
		//判断是否按下，并以无回显的方式获取一个按键
		char GetOper()
		{
			if (_kbhit())
			{
				return _getch();
			}
		}