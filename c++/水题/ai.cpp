#include<bits/stdc++.h>
#include <time.h>
#include<windows.h>
#include<stdlib.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) 
using namespace std;
typedef struct		//��¼��εĽṹ��
{
	int x, y;
	char ch;
}RAINDROP;
 
const int BUFFER_SIZE = 100;
int WIDTH = 80;
int HEIGHT = 30;
const int RAIN_LENGTH = 18;
 
RAINDROP raindropLine[BUFFER_SIZE];
HANDLE HOUT = GetStdHandle(STD_OUTPUT_HANDLE);//��ñ�׼����ľ��
 
void gotoxy(int x, int y)			
{
	COORD pos;	//�����ʾһ���ַ��ڿ���̨��Ļ�ϵ�����Ķ���
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(HOUT, pos);	//���ÿ���̨��׼������λ��
}
 
void show_cursor(BOOL hide)
{
	CONSOLE_CURSOR_INFO cciCursor;
	if (GetConsoleCursorInfo(HOUT, &cciCursor))	//��ù����Ϣ
	{
		cciCursor.bVisible = hide;				//���ع��
		SetConsoleCursorInfo(HOUT, &cciCursor);	//�������ù��
	}
}
 
void set_color(int color)
{
	SetConsoleTextAttribute(HOUT, color);		//���������ɫ
}
void szy()
{
	system("color 0a");
POINT mouse;
srand(time(0));

CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(HOUT, &info);	//��ÿ���̨������Ϣ
	HEIGHT = info.srWindow.Bottom;				//���ݿ���̨�Ŀ��������ʾ�Ŀ��
	WIDTH = info.srWindow.Right;
	
	show_cursor(FALSE);
	srand((unsigned int)time(NULL));
	for (int i=0; i<BUFFER_SIZE; i++)			//���������������λ��
	{
		raindropLine[i].x = rand()%WIDTH;
		raindropLine[i].y = rand()%HEIGHT;
		raindropLine[i].ch = rand() %2 + 48;				//�����������0��1
	}
	
	while(true)				
	{
		GetConsoleScreenBufferInfo(HOUT, &info);	//�������С�仯ʱ���������ÿ����Ϣ
		HEIGHT = info.srWindow.Bottom;
		WIDTH = info.srWindow.Right;
		for (int i=0; i<BUFFER_SIZE; ++i)
		{
			if (raindropLine[i].y <= HEIGHT)
			{
				gotoxy(raindropLine[i].x, raindropLine[i].y);
				set_color(FOREGROUND_GREEN);		//���������ɫ
				putchar(raindropLine[i].ch);
			}
			gotoxy(raindropLine[i].x, raindropLine[i].y - RAIN_LENGTH);	//�������������
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
				set_color(FOREGROUND_GREEN|FOREGROUND_INTENSITY);	//�������·������
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
	speak("�����뿪�����룡");
	int mm,local;
	cin>>mm;
	while(mm!=314416)
	{
		speak("���벻��");
		speak("����������");
		system("cls"); 
		cin>>mm;
	}
	speak("��ã�����");
	time_t rawtime;
	struct tm * timeinfo;
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	speak("����ʱ����");
	cout<<asctime (timeinfo);
	speak("Ϊ�㿪��������ģʽ����������");
	szy();
	return 0;
}

