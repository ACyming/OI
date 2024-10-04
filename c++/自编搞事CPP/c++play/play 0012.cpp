//作者：https://www.luogu.com.cn/user/126871
//转自：https://www.luogu.com.cn/blog/yzh-Error404/move-v10-post
//使用鼠标点击进入游戏
#include<bits/stdc++.h>
#include<windows.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
#define jp(x) ((GetAsyncKeyState(x)&0x8000)?1:0)
#define CLS color(112),system("cls");
using namespace std;
int clearma[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int ma[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1},
	{0,0,0,0,0,0,0,0,7,7,7,7,7,7,7,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1},
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,1,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{1,1,1,9,9,9,9,9,1,1,1,1,1,1,1,1,8,8,8,8,8,8,8,8,8,1}};
int ma1[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{1,0,0,0,0,0,0,0,0,6,0,0,0,5,0,0,0,6,0,0,0,5,0,0,0,0},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,5,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,5,0,0,0},
	{0,0,1,0,0,0,6,0,0,0,0,1,0,0,0,0,0,6,0,0,0,0,1,0,0,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma2[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,6,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0},
	{0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0},
	{0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,0,0},
	{0,1,5,1,5,1,5,1,5,5,5,5,5,5,5,5,1,5,1,5,1,5,1,5,1,2},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma3[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,1,1,1,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,6,1,1,1,1,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,1,1,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,5,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,5},
	{0,0,0,0,0,0,5,0,6,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,5,5},
	{0,0,0,5,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,5,0,0,0,5,5,5},
	{0,5,0,1,1,1,1,2,0,0,0,0,0,0,0,5,0,5,0,1,0,0,5,5,5,5},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma4[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,7,7,7,7,0,7,7,7,0,7,7,7,7,0,7,7,7,0,7,7,7,7,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
	{0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,2},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma5[105][105]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,7,7,7,0},
	{0,0,0,5,0,0,0,5,0,5,0,0,0,5,0,1,0,1,0,1,0,0,0,0,0,0},
	{0,0,0,1,5,0,5,1,0,1,5,0,5,1,0,5,5,5,5,5,5,5,5,5,5,5},
	{7,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{0,0,0,7,0,1,0,7,0,1,0,7,0,1,0,7,0,1,0,7,0,1,0,7,0,2},
	{0,0,0,5,0,5,0,5,0,5,0,5,0,5,0,5,0,5,0,5,0,5,0,5,0,5},
	{0,0,0,1,0,7,0,1,0,7,0,1,0,7,0,1,0,7,0,1,0,7,0,1,0,7},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma6[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,1,1,1,1,1,0,0,0,0,0,7,1,5,0,0,0,5,1,5,0,0,0,0},
	{0,0,0,0,0,0,0,1,0,0,0,0,0,7,1,0,5,0,5,0,0,0,5,0,0,0},
	{0,0,0,0,0,0,0,1,0,0,0,0,0,5,1,0,0,1,0,0,0,0,0,1,5,0},
	{0,0,0,1,1,1,1,1,0,0,0,0,0,7,1,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,0,0,0,0,0,7,1,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,5,5,5,5,5,5,1,2,0,5,5,5,0,5,5,5,0,0},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma7[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,5,0,0,0,5,0,0,0,0,0,0,7,1,1,1,1,1,0,0,0,0,0,0},
	{0,0,1,1,1,0,1,1,1,7,0,5,0,0,7,0,0,1,0,0,5,0,0,0,0,0},
	{0,0,0,0,0,0,0,5,0,7,0,5,0,0,7,0,0,1,7,1,1,1,0,0,0,0},
	{0,7,1,1,1,0,1,1,1,7,1,1,1,0,7,0,0,1,7,0,1,0,0,0,0,0},
	{0,7,0,0,0,0,0,0,0,0,0,1,0,0,7,0,0,1,7,0,0,0,1,1,1,0},
	{0,0,0,1,0,7,1,1,1,0,0,1,0,1,1,1,0,1,0,0,1,0,0,1,0,0},
	{0,0,0,1,5,7,5,1,5,5,5,1,5,5,1,5,5,1,5,5,1,5,5,1,5,2},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma8[105][105]={{0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,7,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,7,0,0,7,0,0,0,0},   
	{0,7,0,7,5,0,0,5,0,7,0,5,0,0,0,0,7,0,5,5,0,5,7,0,0,0},
	{0,7,0,0,7,0,0,7,0,0,0,7,0,7,0,0,5,0,0,7,0,0,0,7,0,0},
	{0,7,0,0,0,7,0,0,0,0,0,0,0,5,7,0,0,0,0,0,0,0,0,0,0,0},
	{0,7,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0},
	{0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,2},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma9[105][105]={{0,0,1,0,0,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,2},
	{0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,1},
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5},
	{0,0,0,0,5,1,5,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,7,5},
	{0,1,1,0,0,1,0,0,1,0,5,1,5,0,1,0,5,1,5,0,1,0,0,5,7,5},
	{0,7,1,0,0,1,0,5,1,5,0,1,0,5,1,5,0,1,0,0,1,0,0,5,7,5},
	{0,7,1,5,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,5,7,5},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,7,5},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma10[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{9,9,9,9,9,9,9,9,5,9,9,9,9,5,9,9,9,9,9,5,9,9,9,9,9,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,5,0,0,0,0,5,0,0,1},
	{0,0,0,0,0,5,0,0,5,0,0,0,0,0,0,5,0,0,0,0,5,0,0,0,5,1},
	{0,1,8,8,8,8,8,5,8,8,5,8,8,5,8,8,8,8,8,5,8,8,8,8,8,8},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma11[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5},
	{0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,5,9,0,0,0,0,0,0,6,5,7},
	{0,0,0,0,0,0,0,0,0,0,0,0,1,5,0,0,0,0,0,0,0,0,0,5,5,7},
	{0,0,0,0,0,0,0,0,0,1,5,0,1,0,0,0,0,0,5,0,0,0,0,0,5,7},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,7},
	{0,0,1,5,5,5,5,1,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,7},
	{0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
	{1,1,1,5,1,1,1,5,1,1,1,5,1,1,1,1,5,1,1,5,1,1,1,1,1,1}};
//8冰,9细雪 
int rec[105];
int turn=0;//0左,2右 
bool jumphigher=false;
int manum=1;
int blood=3,maxblood=3;
int nowx=7,nowy=0;
int tim;
struct Button
{
	int x,y,color;
	const char *name;
	int len;
};
inline void GetPos(POINT &pt)
{
	HWND hwnd=GetForegroundWindow();
	GetCursorPos(&pt);
	ScreenToClient(hwnd,&pt);
	pt.y=pt.y/16;
	pt.x=pt.x/8;
}
inline void color(int a)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
inline void gto(int x,int y)
{
	COORD pos;
	pos.X=y;
	pos.Y=x;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
inline Button NewButton(int x,int y,int color,const char *name)
{
	Button t;
	t.x=x;
	t.y=y;
	t.name=name;
	t.color=color;
	t.len=strlen(name);
	gto(x,y),cout<<name;
	return t;
}
inline bool Preserve(Button A)
{
	gto(A.x,A.y),color(A.color);
	POINT pt;
	GetPos(pt);
	if(pt.y==A.x&&(pt.x>=A.y&&pt.x<=A.y+A.len))
	{
		if(KEY_DOWN(MOUSE_MOVED))return 1;
	}
	return 0;
}
inline void dis_mouse()
{
	ShowCursor(false);
	HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hOut,&cci);
	cci.bVisible=false;
	SetConsoleCursorInfo(hOut,&cci);
}
inline void print(int x,int y,string c)
{
	y*=2;
	HANDLE hOut;COORD pos;
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	pos.X=y;pos.Y=x;
	SetConsoleCursorPosition(hOut,pos);
	cout<<c;
}
inline void printmap()
{
	system("cls");
	for(register int i=0;i<=8;i++)
	{
		for(register int j=0;j<=25;j++)
		{
			if(ma[i][j]==0)print(i,j,"  ");
			if(ma[i][j]==1)print(i,j,"■");
			if(ma[i][j]==2)print(i,j,"Ω");
			if(ma[i][j]==4)print(i,j,"Ψ");
			if(ma[i][j]==5)print(i,j,"Λ");
			if(ma[i][j]==6)print(i,j,"Θ");
			if(ma[i][j]==7)print(i,j,"▓");
			if(ma[i][j]==8)color(3),print(i,j,"■"),color(7); 
			if(ma[i][j]==9)color(8),print(i,j,"■"),color(7);
		}
		puts("");
	}
	print(nowx,nowy,"○");
	print(9,0,"");
	printf("level:%d\n",manum);
	printf("blood:");
	for(register int i=1;i<=blood;i++)
		printf("■");
	for(register int i=blood;i<maxblood;i++)
		printf("□");
	if(manum==9)print(9,21,"by lyxsky");
	if(manum==12)print(9,19,"by 无名の蒟蒻");
	color(7);
}
inline int changemap()
{
	print(4,11,"win!");
	Sleep(1024);
	if(manum==12)
	{
		system("cls");
		print(0,0,"move v2.2.1");
		print(4,0,">开始游戏");
		print(6,0,">游戏规则");
		print(8,0,">退出游戏");
		print(10,0,">查看记录");
		return 10;
	}
	if(manum==11)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma11[i][j];
		nowx=7,nowy=0;
		manum=12;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==10)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma10[i][j];
		nowx=7,nowy=0;
		manum=11;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==9)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma9[i][j];
		nowx=7,nowy=0;
		manum=10;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==8)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma8[i][j];
		nowx=7,nowy=0;
		manum=9;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==7)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma7[i][j];
		nowx=7,nowy=0;
		manum=8;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==6)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma6[i][j];
		nowx=7,nowy=0;
		manum=7;
		printmap(); 
		tim=clock();
		return 0;
	}
	if(manum==5)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma5[i][j];
		nowx=7,nowy=0;
		manum=6;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==4)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma4[i][j];
		nowx=7,nowy=0;
		manum=5;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==3)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma3[i][j];
		nowx=7,nowy=0;
		manum=4;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==2)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma2[i][j];
		nowx=7,nowy=0;
		manum=3;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==1)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma1[i][j];
		nowx=7,nowy=0;
		manum=2;
		printmap();
		tim=clock();
		return 0;
	}
}
int main()
{
	srand(time(NULL));
	dis_mouse();
	system("title move v2.3");
	system("mode con cols=53 lines=13");
	print(0,0,"move v2.2.1");
	Button start=NewButton(4,0,7,">开始游戏");
	Button rule=NewButton(6,0,7,">游戏规则");
	Button goout=NewButton(8,0,7,">退出游戏");
	Button red=NewButton(10,0,7,">查看记录");
	while(1)
	{
		system("title move v2.2.1");
		if(Preserve(rule))
		{
			system("cls");
			Sleep(100);
			print(0,0,"游戏规则");
			print(2,0,"AWSD移动");
			print(3,0,"Ψ为跳跃加强");
			print(4,0,"Λ为刺      "); 
			print(5,0,"Θ为血包    ");
			print(6,0,"Ω为终点    ");
			print(7,0,"▓为藤蔓    ");
			color(3),print(8,0,"■"),color(7);
			print(8,1,"为冰块");
			color(8),print(9,0,"■"),color(7);
			print(9,1,"为细雪");
			print(10,0,"按Q返回起点");
			print(11,0,"按Shift蹲下");
			Button back=NewButton(12,0,7,"返回");
			while(1)
			{   
				if(Preserve(back))
				{
					system("cls");
					print(0,0,"move v2.2.1");
					print(4,0,">开始游戏");
					print(6,0,">游戏规则");
					print(8,0,">退出游戏");
					print(10,0,">查看记录");
					break;
				}
			}
			Sleep(100);
		}
		if(Preserve(goout))
		{
			system("cls");
			system("title bye~");
			return 0;
		}
		if(Preserve(start))
		{
			memset(rec,0x7f,sizeof(rec));
			color(7);
			printmap();
			tim=clock();
			while(1)
			{
				if(blood==0)
				{
					//          ma[nowx][nowy]=0;
					nowx=7,nowy=0;
					print(nowx,nowy,"○");
					blood=3;
					printmap();
				}
				if(jp(16))turn=3;
				if(ma[nowx][nowy]==4)jumphigher=true;
				if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,print(nowx,nowy,"  "),printmap();
				if(ma[nowx][nowy]==2)if(changemap())break;;
				if(jp('Q'))
				{
					print(nowx,nowy,"  ");
					nowx=7;
					nowy=0;
					printmap();
					print(nowx,nowy,"○");
				}
				if(ma[nowx+1][nowy]==5&&ma[nowx][nowy]!=7)//下面有刺
				{
					blood--;
					print(nowx,nowy,"  ");
					int a=rand()%2;
					if(a==0)
					{
						nowy--;
						if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5)nowy++;
						print(nowx,nowy,"○");
					}
					else
					{
						nowy++;
						if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5)nowy--;
						print(nowx,nowy,"○");
					}
					printmap();
				} 
				if(ma[nowx+1][nowy]!=1&&ma[nowx][nowy]!=7&&ma[nowx+1][nowy]!=5&&ma[nowx+1][nowy]!=8&&ma[nowx+1][nowy]!=9)//控制下落 
				{
					print(nowx,nowy,"  ");
					print(nowx+1,nowy,"○"); 
					nowx++;
					Sleep(50);
				}
				if(ma[nowx+1][nowy]==8)
				{
					if(turn==0)
					{
						print(nowx,nowy,"  ");
						nowy--;
						if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
						print(nowx,nowy,"○");
					}
					if(turn==1)
					{
						print(nowx,nowy,"  ");
						nowy++;
						if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9||ma[nowx][nowy]==9)nowy--;
						print(nowx,nowy,"○");
					}
					Sleep(64);
				}
				if(jp('A'))//向左走 
				{
					turn=0;
					if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
					else print(nowx,nowy,"  ");
					nowy--;
					if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
					print(nowx,nowy,"○");
					Sleep(50);
					if(ma[nowx+1][nowy]==9)Sleep(132);
				}
				if(jp('D'))//向右走 
				{
					turn=1;
					if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
					else print(nowx,nowy,"  ");
					nowy++;
					if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
					print(nowx,nowy,"○");
					Sleep(50);
					if(ma[nowx+1][nowy]==9)Sleep(132);
				}
				if(jp('S')&&ma[nowx][nowy]==7&&ma[nowx+1][nowy]!=1&&ma[nowx+1][nowy]!=8&&ma[nowx+1][nowy]!=9)//向下走（只在藤蔓上有效 
				{
					if(ma[nowx][nowy+1]==5)
					{
						blood--;
						continue;
					}
					print(nowx,nowy,"▓");
					nowx++;
					print(nowx,nowy,"○");
					Sleep(60);
				} 
				if(jp('W'))//跳跃 
				{
					//          system("cls");
					if(ma[nowx-1][nowy]==7)
					{
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowx--;
						print(nowx,nowy,"○");
						Sleep(60);
						continue;
					}
					if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
					else print(nowx,nowy,"  ");
					nowx--;
					if(ma[nowx][nowy]==4)jumphigher=true;
					if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,print(nowx,nowy," "),printmap();
					if(ma[nowx][nowy]==2)if(changemap())break;;
					if(nowx<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowx++;
					print(nowx,nowy,"○");
					//          printmap();
					Sleep(10);
					if(jp('A'))//向左走 
					{
						turn=0;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy--;
						if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(jp('D'))//向右走 
					{
						turn=1;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy++;
						if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					//          system("cls");
					if(ma[nowx-1][nowy]==7)
					{
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowx--;
						print(nowx,nowy,"○");
						Sleep(60);
						continue;
					}   
					if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
					else print(nowx,nowy,"  ");
					nowx--;
					if(ma[nowx][nowy]==4)jumphigher=true;
					if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,print(nowx,nowy," "),printmap();
					if(ma[nowx][nowy]==2)if(changemap())break;;
					if(nowx<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowx++;
					print(nowx,nowy,"○");
					//          printmap();
					if(jumphigher)Sleep(50);
					else Sleep(90);
					if(jp('A'))//向左走 
					{
						turn=0;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy--;
						if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(jp('D'))//向右走 
					{
						turn=1;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy++;
						if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(ma[nowx][nowy]==4)jumphigher=true;
					if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,print(nowx,nowy," "),printmap();
					if(ma[nowx][nowy]==2)if(changemap())break;;
					if(jumphigher)
					{
						//system("cls");
						if(ma[nowx-1][nowy]==7)
						{
							if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
							else print(nowx,nowy,"  ");
							nowx--;
							print(nowx,nowy,"○");
							Sleep(60);
							continue;
						}   
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						print(nowx,nowy,"  ");
						nowx--;
						if(ma[nowx][nowy]==4)jumphigher=true;
						if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,print(nowx,nowy," "),printmap();
						if(ma[nowx][nowy]==2)if(changemap())break;;
						if(nowx<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowx++;
						print(nowx,nowy,"○");
						//printmap();
						Sleep(90);
						if(jp('A'))//向左走 
						{
							turn=0;
							if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
							else print(nowx,nowy,"  ");
							nowy--;
							if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
							print(nowx,nowy,"○");
							Sleep(40);
						}
						if(jp('D'))//向右走 
						{
							turn=1;
							if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
							else print(nowx,nowy,"  ");
							nowy++;
							if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
							print(nowx,nowy,"○");
							Sleep(40);
						}
						if(ma[nowx+1][nowy]==5&&ma[nowx][nowy]!=7)//下面有刺
						{
							blood--;
							if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
							else print(nowx,nowy,"  ");
							int a=rand()%2;
							if(a==0)
							{
								nowy--;
								if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
								print(nowx,nowy,"○");
								Sleep(50);
							}
							else
							{
								nowy++;
								if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
								print(nowx,nowy,"○");
								Sleep(50);
							}
							printmap();
						} 
						if(blood==0)
						{
							ma[nowx][nowy]=0;
							nowx=7,nowy=0;
							ma[nowx][nowy]=3;
							blood=3;
							printmap();
						}
						if(ma[nowx+1][nowy]!=1&&ma[nowx][nowy]!=7&&ma[nowx+1][nowy]!=5&&ma[nowx+1][nowy]!=8&&ma[nowx+1][nowy]!=9)//控制下落 
						{
							print(nowx,nowy,"  ");
							nowx++;
							print(nowx,nowy,"○");
							Sleep(50);
						}
						//system("cls");
						//printmap();
						Sleep(10);
						if(ma[nowx][nowy]==4)jumphigher=true;
						if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,printmap();
						if(ma[nowx][nowy]==2)if(changemap())break;;
					}
					if(jp('A'))//向左走 
					{
						turn=0;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy--;
						if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(jp('D'))//向右走 
					{
						turn=1;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy++;
						if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(ma[nowx+1][nowy]==5&&ma[nowx][nowy]!=7)//下面有刺
					{
						blood--;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						int a=rand()%2;
						if(a==0)
						{
							nowy--;
							if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
							print(nowx,nowy,"○");
							Sleep(50);
						}
						else
						{
							nowy++;
							if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
							print(nowx,nowy,"○");
							Sleep(50);
						}
						printmap();
					} 
					if(blood==0)
					{
						ma[nowx][nowy]=0;
						nowx=7,nowy=0;
						ma[nowx][nowy]=3;
						blood=3;
						printmap();
					}
					if(ma[nowx+1][nowy]!=1&&ma[nowx][nowy]!=7&&ma[nowx+1][nowy]!=5&&ma[nowx+1][nowy]!=8&&ma[nowx+1][nowy]!=9)//控制下落 
					{
						print(nowx,nowy,"  ");
						nowx++;
						print(nowx,nowy,"○");
						Sleep(50);
					}
					Sleep(10);
					//          system("cls");
					//          printmap();
					if(ma[nowx][nowy]==4)jumphigher=true;
					if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,printmap();
					if(ma[nowx][nowy]==2)if(changemap())break;;
					if(jp('A'))//向左走 
					{
						turn=0;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy--;
						if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(jp('D'))//向右走 
					{
						turn=1;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy++;
						if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(ma[nowx+1][nowy]==5&&ma[nowx][nowy]!=7)//下面有刺
					{
						blood--;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						int a=rand()%2;
						if(a==0)
						{
							nowy--;
							if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
							print(nowx,nowy,"○");
							Sleep(50);
						}
						else
						{
							nowy++;
							if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
							print(nowx,nowy,"○");
							Sleep(50);
						}
						printmap();
					} 
					if(blood==0)
					{
						ma[nowx][nowy]=0;
						nowx=7,nowy=0;
						ma[nowx][nowy]=3;
						blood=3;
						printmap();
					}
					if(ma[nowx+1][nowy]!=1&&ma[nowx][nowy]!=7&&ma[nowx+1][nowy]!=5&&ma[nowx+1][nowy]!=8&&ma[nowx+1][nowy]!=9)//控制下落 
					{
						print(nowx,nowy,"  ");
						nowx++;
						print(nowx,nowy,"○");
						Sleep(50);
					}
					Sleep(10);
					//          system("cls");
					//          printmap();
					if(ma[nowx][nowy]==4)jumphigher=true;
					if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,printmap();
					if(ma[nowx][nowy]==2)if(changemap())break;;
				}       
				//      system("cls");
			}
		}
		if(Preserve(red))
		{
			system("cls");
			for(register int i=1;i<=11;i++)
				printf("%d关  %ds\n",i,rec[i]/1024);
			Button back=NewButton(11,0,7,"返回");
			while(1)
			{
				if(Preserve(back))
				{
					system("cls");
					print(0,0,"move v2.2.1");
					print(4,0,">开始游戏");
					print(6,0,">游戏规则");
					print(8,0,">退出游戏");
					print(10,0,">查看记录");
					break;
				}
			}
		}
	}   
	return 0;
}
/*
#include<bits/stdc++.h>
#include<windows.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
#define jp(x) ((GetAsyncKeyState(x)&0x8000)?1:0)
#define CLS color(112),system("cls");
using namespace std;
int clearma[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int ma[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1},
	{0,0,0,0,0,0,0,0,7,7,7,7,7,7,7,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1},
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,1,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{1,1,1,9,9,9,9,9,1,1,1,1,1,1,1,1,8,8,8,8,8,8,8,8,8,1}};
int ma1[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{1,0,0,0,0,0,0,0,0,6,0,0,0,5,0,0,0,6,0,0,0,5,0,0,0,0},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,5,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,5,0,0,0},
	{0,0,1,0,0,0,6,0,0,0,0,1,0,0,0,0,0,6,0,0,0,0,1,0,0,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma2[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,6,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,0,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0},
	{0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0},
	{0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,0,0},
	{0,1,5,1,5,1,5,1,5,5,5,5,5,5,5,5,1,5,1,5,1,5,1,5,1,2},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma3[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,1,1,1,1,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,6,1,1,1,1,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,1,1,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,5,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,5},
	{0,0,0,0,0,0,5,0,6,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,5,5},
	{0,0,0,5,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,5,0,0,0,5,5,5},
	{0,5,0,1,1,1,1,2,0,0,0,0,0,0,0,5,0,5,0,1,0,0,5,5,5,5},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma4[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,7,7,7,7,0,7,7,7,0,7,7,7,7,0,7,7,7,0,7,7,7,7,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
	{0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,2},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma5[105][105]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,7,7,7,0},
	{0,0,0,5,0,0,0,5,0,5,0,0,0,5,0,1,0,1,0,1,0,0,0,0,0,0},
	{0,0,0,1,5,0,5,1,0,1,5,0,5,1,0,5,5,5,5,5,5,5,5,5,5,5},
	{7,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{0,0,0,7,0,1,0,7,0,1,0,7,0,1,0,7,0,1,0,7,0,1,0,7,0,2},
	{0,0,0,5,0,5,0,5,0,5,0,5,0,5,0,5,0,5,0,5,0,5,0,5,0,5},
	{0,0,0,1,0,7,0,1,0,7,0,1,0,7,0,1,0,7,0,1,0,7,0,1,0,7},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma6[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,1,1,1,1,1,0,0,0,0,0,7,1,5,0,0,0,5,1,5,0,0,0,0},
	{0,0,0,0,0,0,0,1,0,0,0,0,0,7,1,0,5,0,5,0,0,0,5,0,0,0},
	{0,0,0,0,0,0,0,1,0,0,0,0,0,5,1,0,0,1,0,0,0,0,0,1,5,0},
	{0,0,0,1,1,1,1,1,0,0,0,0,0,7,1,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,0,0,0,0,0,7,1,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,5,5,5,5,5,5,1,2,0,5,5,5,0,5,5,5,0,0},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma7[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,5,0,0,0,5,0,0,0,0,0,0,7,1,1,1,1,1,0,0,0,0,0,0},
	{0,0,1,1,1,0,1,1,1,7,0,5,0,0,7,0,0,1,0,0,5,0,0,0,0,0},
	{0,0,0,0,0,0,0,5,0,7,0,5,0,0,7,0,0,1,7,1,1,1,0,0,0,0},
	{0,7,1,1,1,0,1,1,1,7,1,1,1,0,7,0,0,1,7,0,1,0,0,0,0,0},
	{0,7,0,0,0,0,0,0,0,0,0,1,0,0,7,0,0,1,7,0,0,0,1,1,1,0},
	{0,0,0,1,0,7,1,1,1,0,0,1,0,1,1,1,0,1,0,0,1,0,0,1,0,0},
	{0,0,0,1,5,7,5,1,5,5,5,1,5,5,1,5,5,1,5,5,1,5,5,1,5,2},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma8[105][105]={{0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,7,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,7,0,0,7,0,0,0,0},	
	{0,7,0,7,5,0,0,5,0,7,0,5,0,0,0,0,7,0,5,5,0,5,7,0,0,0},
	{0,7,0,0,7,0,0,7,0,0,0,7,0,7,0,0,5,0,0,7,0,0,0,7,0,0},
	{0,7,0,0,0,7,0,0,0,0,0,0,0,5,7,0,0,0,0,0,0,0,0,0,0,0},
	{0,7,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0},
	{0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,2},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma9[105][105]={{0,0,1,0,0,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,2},
	{0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,1},
	{0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5},
	{0,0,0,0,5,1,5,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,7,5},
	{0,1,1,0,0,1,0,0,1,0,5,1,5,0,1,0,5,1,5,0,1,0,0,5,7,5},
	{0,7,1,0,0,1,0,5,1,5,0,1,0,5,1,5,0,1,0,0,1,0,0,5,7,5},
	{0,7,1,5,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,5,7,5},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,7,5},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma10[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{9,9,9,9,9,9,9,9,5,9,9,9,9,5,9,9,9,9,9,5,9,9,9,9,9,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,5,0,0,0,0,5,0,0,1},
	{0,0,0,0,0,5,0,0,5,0,0,0,0,0,0,5,0,0,0,0,5,0,0,0,5,1},
	{0,1,8,8,8,8,8,5,8,8,5,8,8,5,8,8,8,8,8,5,8,8,8,8,8,8},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
int ma11[105][105]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,5},
	{0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,5,9,0,0,0,0,0,0,6,5,7},
	{0,0,0,0,0,0,0,0,0,0,0,0,1,5,0,0,0,0,0,0,0,0,0,5,5,7},
	{0,0,0,0,0,0,0,0,0,1,5,0,1,0,0,0,0,0,5,0,0,0,0,0,5,7},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,7},
	{0,0,1,5,5,5,5,1,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,7},
	{0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
	{1,1,1,5,1,1,1,5,1,1,1,5,1,1,1,1,5,1,1,5,1,1,1,1,1,1}};
//8冰,9细雪 
int rec[105];
int turn=0;//0左,2右 
bool jumphigher=false;
int manum=1;
int blood=3,maxblood=3;
int nowx=7,nowy=0;
int tim;
struct Button
{
	int x,y,color;
	const char *name;
	int len;
};
inline void GetPos(POINT &pt)
{
	HWND hwnd=GetForegroundWindow();
	GetCursorPos(&pt);
	ScreenToClient(hwnd,&pt);
	pt.y=pt.y/16;
	pt.x=pt.x/8;
}
inline void color(int a)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
inline void gto(int x,int y)
{
	COORD pos;
	pos.X=y;
	pos.Y=x;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
inline Button NewButton(int x,int y,int color,const char *name)
{
	Button t;
	t.x=x;
	t.y=y;
	t.name=name;
	t.color=color;
	t.len=strlen(name);
	gto(x,y),cout<<name;
	return t;
}
inline bool Preserve(Button A)
{
	gto(A.x,A.y),color(A.color);
	POINT pt;
	GetPos(pt);
	if(pt.y==A.x&&(pt.x>=A.y&&pt.x<=A.y+A.len))
	{
		if(KEY_DOWN(MOUSE_MOVED))return 1;
	}
	return 0;
}
inline void dis_mouse()
{
	ShowCursor(false);
	HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hOut,&cci);
	cci.bVisible=false;
	SetConsoleCursorInfo(hOut,&cci);
}
inline void print(int x,int y,string c)
{
	y*=2;
	HANDLE hOut;COORD pos;
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	pos.X=y;pos.Y=x;
	SetConsoleCursorPosition(hOut,pos);
	cout<<c;
}
inline void printmap()
{
	system("cls");
	for(register int i=0;i<=8;i++)
	{
		for(register int j=0;j<=25;j++)
		{
			if(ma[i][j]==0)print(i,j,"  ");
			if(ma[i][j]==1)print(i,j,"■");
			if(ma[i][j]==2)print(i,j,"Ω");
			if(ma[i][j]==4)print(i,j,"Ψ");
			if(ma[i][j]==5)print(i,j,"Λ");
			if(ma[i][j]==6)print(i,j,"Θ");
			if(ma[i][j]==7)print(i,j,"▓");
			if(ma[i][j]==8)color(3),print(i,j,"■"),color(7); 
			if(ma[i][j]==9)color(8),print(i,j,"■"),color(7);
		}
		puts("");
	}
	print(nowx,nowy,"○");
	print(9,0,"");
	printf("level:%d\n",manum);
	printf("blood:");
	for(register int i=1;i<=blood;i++)
		printf("■");
	for(register int i=blood;i<maxblood;i++)
		printf("□");
	if(manum==9)print(9,21,"by lyxsky");
	if(manum==12)print(9,19,"by 无名の蒟蒻");
	color(7);
}
inline int changemap()
{
	print(4,11,"win!");
	Sleep(1024);
	if(manum==12)
	{
		system("cls");
		print(0,0,"move v2.2.1");
		print(4,0,">开始游戏");
		print(6,0,">游戏规则");
		print(8,0,">退出游戏");
		print(10,0,">查看记录");
		return 10;
	}
	if(manum==11)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma11[i][j];
		nowx=7,nowy=0;
		manum=12;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==10)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma10[i][j];
		nowx=7,nowy=0;
		manum=11;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==9)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma9[i][j];
		nowx=7,nowy=0;
		manum=10;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==8)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma8[i][j];
		nowx=7,nowy=0;
		manum=9;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==7)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma7[i][j];
		nowx=7,nowy=0;
		manum=8;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==6)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma6[i][j];
		nowx=7,nowy=0;
		manum=7;
		printmap();	
		tim=clock();
		return 0;
	}
	if(manum==5)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma5[i][j];
		nowx=7,nowy=0;
		manum=6;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==4)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma4[i][j];
		nowx=7,nowy=0;
		manum=5;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==3)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma3[i][j];
		nowx=7,nowy=0;
		manum=4;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==2)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma2[i][j];
		nowx=7,nowy=0;
		manum=3;
		printmap();
		tim=clock();
		return 0;
	}
	if(manum==1)
	{
		rec[manum]=min(int(clock()-tim),rec[manum]);
		for(register int i=0;i<=8;i++)
			for(register int j=0;j<=25;j++)
				ma[i][j]=ma1[i][j];
		nowx=7,nowy=0;
		manum=2;
		printmap();
		tim=clock();
		return 0;
	}
}
int main()
{
	srand(time(NULL));
	dis_mouse();
	system("title move v2.3");
	system("mode con cols=53 lines=13");
	print(0,0,"move v2.2.1");
	Button start=NewButton(4,0,7,">开始游戏");
	Button rule=NewButton(6,0,7,">游戏规则");
	Button goout=NewButton(8,0,7,">退出游戏");
	Button red=NewButton(10,0,7,">查看记录");
	while(1)
	{
		system("title move v2.2.1");
		if(Preserve(rule))
		{
			system("cls");
			Sleep(100);
			print(0,0,"游戏规则");
			print(2,0,"AWSD移动");
			print(3,0,"Ψ为跳跃加强");
			print(4,0,"Λ为刺      "); 
			print(5,0,"Θ为血包    ");
			print(6,0,"Ω为终点    ");
			print(7,0,"▓为藤蔓    ");
			color(3),print(8,0,"■"),color(7);
			print(8,1,"为冰块");
			color(8),print(9,0,"■"),color(7);
			print(9,1,"为细雪");
			print(10,0,"按Q返回起点");
			print(11,0,"按Shift蹲下");
			Button back=NewButton(12,0,7,"返回");
			while(1)
			{	
				if(Preserve(back))
				{
					system("cls");
					print(0,0,"move v2.2.1");
					print(4,0,">开始游戏");
					print(6,0,">游戏规则");
					print(8,0,">退出游戏");
					print(10,0,">查看记录");
					break;
				}
			}
			Sleep(100);
		}
		if(Preserve(goout))
		{
			system("cls");
			system("title bye~");
			return 0;
		}
		if(Preserve(start))
		{
			memset(rec,0x7f,sizeof(rec));
			color(7);
			printmap();
			tim=clock();
			while(1)
			{
				if(blood==0)
				{
					//			ma[nowx][nowy]=0;
					nowx=7,nowy=0;
					print(nowx,nowy,"○");
					blood=3;
					printmap();
				}
				if(jp(16))turn=3;
				if(ma[nowx][nowy]==4)jumphigher=true;
				if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,print(nowx,nowy,"  "),printmap();
				if(ma[nowx][nowy]==2)if(changemap())break;;
				if(jp('Q'))
				{
					print(nowx,nowy,"  ");
					nowx=7;
					nowy=0;
					printmap();
					print(nowx,nowy,"○");
				}
				if(ma[nowx+1][nowy]==5&&ma[nowx][nowy]!=7)//下面有刺
				{
					blood--;
					print(nowx,nowy,"  ");
					int a=rand()%2;
					if(a==0)
					{
						nowy--;
						if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5)nowy++;
						print(nowx,nowy,"○");
					}
					else
					{
						nowy++;
						if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5)nowy--;
						print(nowx,nowy,"○");
					}
					printmap();
				} 
				if(ma[nowx+1][nowy]!=1&&ma[nowx][nowy]!=7&&ma[nowx+1][nowy]!=5&&ma[nowx+1][nowy]!=8&&ma[nowx+1][nowy]!=9)//控制下落 
				{
					print(nowx,nowy,"  ");
					print(nowx+1,nowy,"○"); 
					nowx++;
					Sleep(50);
				}
				if(ma[nowx+1][nowy]==8)
				{
					if(turn==0)
					{
						print(nowx,nowy,"  ");
						nowy--;
						if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
						print(nowx,nowy,"○");
					}
					if(turn==1)
					{
						print(nowx,nowy,"  ");
						nowy++;
						if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9||ma[nowx][nowy]==9)nowy--;
						print(nowx,nowy,"○");
					}
					Sleep(64);
				}
				if(jp('A'))//向左走 
				{
					turn=0;
					if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
					else print(nowx,nowy,"  ");
					nowy--;
					if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
					print(nowx,nowy,"○");
					Sleep(50);
					if(ma[nowx+1][nowy]==9)Sleep(132);
				}
				if(jp('D'))//向右走 
				{
					turn=1;
					if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
					else print(nowx,nowy,"  ");
					nowy++;
					if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
					print(nowx,nowy,"○");
					Sleep(50);
					if(ma[nowx+1][nowy]==9)Sleep(132);
				}
				if(jp('S')&&ma[nowx][nowy]==7&&ma[nowx+1][nowy]!=1&&ma[nowx+1][nowy]!=8&&ma[nowx+1][nowy]!=9)//向下走（只在藤蔓上有效 
				{
					if(ma[nowx][nowy+1]==5)
					{
						blood--;
						continue;
					}
					print(nowx,nowy,"▓");
					nowx++;
					print(nowx,nowy,"○");
					Sleep(60);
				} 
				if(jp('W'))//跳跃 
				{
					//			system("cls");
					if(ma[nowx-1][nowy]==7)
					{
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowx--;
						print(nowx,nowy,"○");
						Sleep(60);
						continue;
					}
					if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
					else print(nowx,nowy,"  ");
					nowx--;
					if(ma[nowx][nowy]==4)jumphigher=true;
					if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,print(nowx,nowy," "),printmap();
					if(ma[nowx][nowy]==2)if(changemap())break;;
					if(nowx<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowx++;
					print(nowx,nowy,"○");
					//			printmap();
					Sleep(10);
					if(jp('A'))//向左走 
					{
						turn=0;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy--;
						if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(jp('D'))//向右走 
					{
						turn=1;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy++;
						if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					//			system("cls");
					if(ma[nowx-1][nowy]==7)
					{
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowx--;
						print(nowx,nowy,"○");
						Sleep(60);
						continue;
					}	
					if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
					else print(nowx,nowy,"  ");
					nowx--;
					if(ma[nowx][nowy]==4)jumphigher=true;
					if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,print(nowx,nowy," "),printmap();
					if(ma[nowx][nowy]==2)if(changemap())break;;
					if(nowx<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowx++;
					print(nowx,nowy,"○");
					//			printmap();
					if(jumphigher)Sleep(50);
					else Sleep(90);
					if(jp('A'))//向左走 
					{
						turn=0;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy--;
						if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(jp('D'))//向右走 
					{
						turn=1;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy++;
						if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(ma[nowx][nowy]==4)jumphigher=true;
					if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,print(nowx,nowy," "),printmap();
					if(ma[nowx][nowy]==2)if(changemap())break;;
					if(jumphigher)
					{
						//system("cls");
						if(ma[nowx-1][nowy]==7)
						{
							if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
							else print(nowx,nowy,"  ");
							nowx--;
							print(nowx,nowy,"○");
							Sleep(60);
							continue;
						}	
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						print(nowx,nowy,"  ");
						nowx--;
						if(ma[nowx][nowy]==4)jumphigher=true;
						if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,print(nowx,nowy," "),printmap();
						if(ma[nowx][nowy]==2)if(changemap())break;;
						if(nowx<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowx++;
						print(nowx,nowy,"○");
						//printmap();
						Sleep(90);
						if(jp('A'))//向左走 
						{
							turn=0;
							if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
							else print(nowx,nowy,"  ");
							nowy--;
							if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
							print(nowx,nowy,"○");
							Sleep(40);
						}
						if(jp('D'))//向右走 
						{
							turn=1;
							if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
							else print(nowx,nowy,"  ");
							nowy++;
							if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
							print(nowx,nowy,"○");
							Sleep(40);
						}
						if(ma[nowx+1][nowy]==5&&ma[nowx][nowy]!=7)//下面有刺
						{
							blood--;
							if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
							else print(nowx,nowy,"  ");
							int a=rand()%2;
							if(a==0)
							{
								nowy--;
								if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
								print(nowx,nowy,"○");
								Sleep(50);
							}
							else
							{
								nowy++;
								if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
								print(nowx,nowy,"○");
								Sleep(50);
							}
							printmap();
						} 
						if(blood==0)
						{
							ma[nowx][nowy]=0;
							nowx=7,nowy=0;
							ma[nowx][nowy]=3;
							blood=3;
							printmap();
						}
						if(ma[nowx+1][nowy]!=1&&ma[nowx][nowy]!=7&&ma[nowx+1][nowy]!=5&&ma[nowx+1][nowy]!=8&&ma[nowx+1][nowy]!=9)//控制下落 
						{
							print(nowx,nowy,"  ");
							nowx++;
							print(nowx,nowy,"○");
							Sleep(50);
						}
						//system("cls");
						//printmap();
						Sleep(10);
						if(ma[nowx][nowy]==4)jumphigher=true;
						if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,printmap();
						if(ma[nowx][nowy]==2)if(changemap())break;;
					}
					if(jp('A'))//向左走 
					{
						turn=0;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy--;
						if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(jp('D'))//向右走 
					{
						turn=1;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy++;
						if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(ma[nowx+1][nowy]==5&&ma[nowx][nowy]!=7)//下面有刺
					{
						blood--;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						int a=rand()%2;
						if(a==0)
						{
							nowy--;
							if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
							print(nowx,nowy,"○");
							Sleep(50);
						}
						else
						{
							nowy++;
							if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
							print(nowx,nowy,"○");
							Sleep(50);
						}
						printmap();
					} 
					if(blood==0)
					{
						ma[nowx][nowy]=0;
						nowx=7,nowy=0;
						ma[nowx][nowy]=3;
						blood=3;
						printmap();
					}
					if(ma[nowx+1][nowy]!=1&&ma[nowx][nowy]!=7&&ma[nowx+1][nowy]!=5&&ma[nowx+1][nowy]!=8&&ma[nowx+1][nowy]!=9)//控制下落 
					{
						print(nowx,nowy,"  ");
						nowx++;
						print(nowx,nowy,"○");
						Sleep(50);
					}
					Sleep(10);
					//			system("cls");
					//			printmap();
					if(ma[nowx][nowy]==4)jumphigher=true;
					if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,printmap();
					if(ma[nowx][nowy]==2)if(changemap())break;;
					if(jp('A'))//向左走 
					{
						turn=0;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy--;
						if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(jp('D'))//向右走 
					{
						turn=1;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						nowy++;
						if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
						print(nowx,nowy,"○");
						Sleep(40);
					}
					if(ma[nowx+1][nowy]==5&&ma[nowx][nowy]!=7)//下面有刺
					{
						blood--;
						if(ma[nowx][nowy]==7)print(nowx,nowy,"▓");
						else print(nowx,nowy,"  ");
						int a=rand()%2;
						if(a==0)
						{
							nowy--;
							if(nowy<0||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy++;
							print(nowx,nowy,"○");
							Sleep(50);
						}
						else
						{
							nowy++;
							if(nowy>25||ma[nowx][nowy]==1||ma[nowx][nowy]==5||ma[nowx][nowy]==8||ma[nowx][nowy]==9)nowy--;
							print(nowx,nowy,"○");
							Sleep(50);
						}
						printmap();
					} 
					if(blood==0)
					{
						ma[nowx][nowy]=0;
						nowx=7,nowy=0;
						ma[nowx][nowy]=3;
						blood=3;
						printmap();
					}
					if(ma[nowx+1][nowy]!=1&&ma[nowx][nowy]!=7&&ma[nowx+1][nowy]!=5&&ma[nowx+1][nowy]!=8&&ma[nowx+1][nowy]!=9)//控制下落 
					{
						print(nowx,nowy,"  ");
						nowx++;
						print(nowx,nowy,"○");
						Sleep(50);
					}
					Sleep(10);
					//			system("cls");
					//			printmap();
					if(ma[nowx][nowy]==4)jumphigher=true;
					if(ma[nowx][nowy]==6)blood=min(blood+1,maxblood),ma[nowx][nowy]=0,printmap();
					if(ma[nowx][nowy]==2)if(changemap())break;;
				} 		
				//		system("cls");
			}
		}
		if(Preserve(red))
		{
			system("cls");
			for(register int i=1;i<=11;i++)
				printf("%d关  %ds\n",i,rec[i]/1024);
			Button back=NewButton(11,0,7,"返回");
			while(1)
			{
				if(Preserve(back))
				{
					system("cls");
					print(0,0,"move v2.2.1");
					print(4,0,">开始游戏");
					print(6,0,">游戏规则");
					print(8,0,">退出游戏");
					print(10,0,">查看记录");
					break;
				}
			}
		}
	}	
	return 0;
}
*/
