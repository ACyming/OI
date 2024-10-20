#include<iostream>
#include<conio.h>
#include<windows.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
bool c=0;
int main()
{
	while(1)
	{
		if(c==1)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			_sleep(1);
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		}
		if(KEY_DOWN('H'))
		{
			c=!c;
			_sleep(1000);
		}
	}
	return 0;
}
