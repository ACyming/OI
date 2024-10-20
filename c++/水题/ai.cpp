#include<bits/stdc++.h>
#include <time.h>
#include<windows.h>
#include<stdlib.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) 
using namespace std;
typedef struct		//记录雨滴的结构体
{
	int x, y;
	char ch;
}RAINDROP;
 
const int BUFFER_SIZE = 100;
int WIDTH = 80;
int HEIGHT = 30;
const int RAIN_LENGTH = 18;
 
RAINDROP raindropLine[BUFFER_SIZE];
HANDLE HOUT = GetStdHandle(STD_OUTPUT_HANDLE);//获得标准输出的句柄
 
void gotoxy(int x, int y)			
{
	COORD pos;	//定义表示一个字符在控制台屏幕上的坐标的对象
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(HOUT, pos);	//设置控制台标准输出光标位置
}
 
void show_cursor(BOOL hide)
{
	CONSOLE_CURSOR_INFO cciCursor;
	if (GetConsoleCursorInfo(HOUT, &cciCursor))	//获得光标信息
	{
		cciCursor.bVisible = hide;				//隐藏光标
		SetConsoleCursorInfo(HOUT, &cciCursor);	//重新设置光标
	}
}
 
void set_color(int color)
{
	SetConsoleTextAttribute(HOUT, color);		//设置输出颜色
}
void szy()
{
	system("color 0a");
POINT mouse;
srand(time(0));

CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(HOUT, &info);	//获得控制台窗体信息
	HEIGHT = info.srWindow.Bottom;				//根据控制台的宽高设置显示的宽高
	WIDTH = info.srWindow.Right;
	
	show_cursor(FALSE);
	srand((unsigned int)time(NULL));
	for (int i=0; i<BUFFER_SIZE; i++)			//随机设置雨滴下落的位置
	{
		raindropLine[i].x = rand()%WIDTH;
		raindropLine[i].y = rand()%HEIGHT;
		raindropLine[i].ch = rand() %2 + 48;				//设置雨滴内容0或1
	}
	
	while(true)				
	{
		GetConsoleScreenBufferInfo(HOUT, &info);	//当窗体大小变化时，重新设置宽高信息
		HEIGHT = info.srWindow.Bottom;
		WIDTH = info.srWindow.Right;
		for (int i=0; i<BUFFER_SIZE; ++i)
		{
			if (raindropLine[i].y <= HEIGHT)
			{
				gotoxy(raindropLine[i].x, raindropLine[i].y);
				set_color(FOREGROUND_GREEN);		//设置雨滴颜色
				putchar(raindropLine[i].ch);
			}
			gotoxy(raindropLine[i].x, raindropLine[i].y - RAIN_LENGTH);	//擦除过长的雨滴
			putchar(' ');
			raindropLine[i].y++;
			raindropLine[i].ch = rand() % 2 + 48;
			if (raindropLine[i].y > HEIGHT + RAIN_LENGTH)		
			{
				raindropLine[i].x = rand() % WIDTH;
				raindropLine[i].y = rand() % HEIGHT;
			}
			if ( raindropLine[i].y <= HEIGHT)
			{
				gotoxy(raindropLine[i].x, raindropLine[i].y);
				set_color(FOREGROUND_GREEN|FOREGROUND_INTENSITY);	//高亮最下方的雨滴
				putchar(raindropLine[i].ch);
			}
		}
//		GetCursorPos(&mouse);
//		mouse.x=rand()%1920;
//		mouse.y=rand()%1080;
//		SetCursorPos(mouse.x,mouse.y);
		if(KEY_DOWN(MOUSE_MOVED)){
			break;
		}
		Sleep(50);
	}
	getchar();
}
void speak(string the_world_say)
{
	FILE* fp=fopen("%2%speak_c++.vbs","w");
	string the_vbs_code="CreateObject(\"Scripting.FileSystemObject\").DeleteFile(WScript.ScriptName)\nCreateObject(\"SAPI.SpVoice\").Speak\""+the_world_say+"\"";
	fputs(the_vbs_code.c_str(),fp);
	fclose(fp);
	system("%2%speak_c++.vbs");
	return;
}
int main()
{
	speak("请输入开启密码！");
	int mm,local;
	cin>>mm;
	while(mm!=314416)
	{
		speak("密码不对");
		speak("请重新输入");
		system("cls"); 
		cin>>mm;
	}
	speak("你好，主人");
	time_t rawtime;
	struct tm * timeinfo;
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	speak("现在时间是");
	cout<<asctime (timeinfo);
	speak("为你开启数字雨模式，尽情欣赏");
	szy();
	return 0;
}

