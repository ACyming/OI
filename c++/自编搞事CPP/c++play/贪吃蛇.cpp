#include<bits/stdc++.h>
#include<windows.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
char a[100][100];
long b[100][100],mapp[100][100],bi=10,bj=10,ei=10,ej=7,d,gi,gj,p=1,fen,maxfen=-100,jie=1;
void qingping(long long x,long long y)
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(handle,pos);
}
void hs()
{
	long long maxx=max(b[ei+1][ej],max(b[ei-1][ej],max(b[ei][ej+1],b[ei][ej-1])));
	if(maxx==b[ei+1][ej])	ei++;
	if(maxx==b[ei-1][ej])	ei--;
	if(maxx==b[ei][ej+1])	ej++;
	if(maxx==b[ei][ej-1])	ej--;
}
void game()
{
	bi=10,bj=10,ei=10,ej=7,d=0,p=1;
	for(long long i=1;i<=20;i++)
	{
		for(long long j=1;j<=20;j++)
		{
			b[i][j]=0;
			mapp[i][j]=0;
			if(i==1||i==20||j==1||j==20)
			{
				a[i][j]='#';
			}
			else
			{
				a[i][j]=' ';
			}
		}
	}	
	a[bi][bj]='*';a[bi][bj-1]='#';a[bi][bj-2]='#';a[ei][ej]='#';mapp[bi][bj-1]=1;mapp[bi][bj-2]=1;
	while(1)
	{
		_sleep(100);
		qingping(0,0);
		if(p==1)
		{
			srand((unsigned int)time(NULL));
			gi=rand()%14+2;
			srand((unsigned int)time(NULL));
			gj=rand()%16+2;
			if(a[gi][gj]!='#')
			{
				a[gi][gj]='@';
			}
			p=0;
		}
		mapp[bi][bj]=1;
		for(long long i=1;i<=20;i++)
		{
			for(long long j=1;j<=20;j++)
			{
				if(mapp[i][j]==1)
				{
					b[i][j]++;
				}
			}
		}
		if(KEY_DOWN('L'))
		{
			system("cls");
			return;
		}
		if(KEY_DOWN('W')&&d!=3)
		{
			d=1;
		}
		if(KEY_DOWN('A')&&d!=4)
		{
			d=2;
		}
		if(KEY_DOWN('S')&&d!=1)
		{
			d=3;
		}
		if(KEY_DOWN('D')&&d!=2)
		{
			d=4;
		}
		if(d==1)
		{
			a[ei][ej]=' ';
			mapp[ei][ej]=0;
			b[ei][ej]=0;
			hs();
			a[bi][bj]='#';
			bi--;
			if(a[bi][bj]=='#'||bi==1)	break;
			if(a[bi][bj]=='@')
			{
				p=1;
				mapp[bi][bj]=1;
				a[bi][bj]='#';
				fen++;
				bi--;
			}
			a[bi][bj]='*';
		} 
		if(d==2)
		{
			a[ei][ej]=' ';
			mapp[ei][ej]=0;
			b[ei][ej]=0;
			hs();
			a[bi][bj]='#';
			bj--;
			if(a[bi][bj]=='#'||bj==1)	break;
			if(a[bi][bj]=='@')
			{
				p=1;
				mapp[bi][bj]=1;
				a[bi][bj]='#';
				fen++;
				bj--;
			}
			a[bi][bj]='*';
		}
		if(d==3)
		{
			a[ei][ej]=' ';
			mapp[ei][ej]=0;
			b[ei][ej]=0;
			hs();
			a[bi][bj]='#';
			bi++;
			if(a[bi][bj]=='#'||bi==20)	break;
			if(a[bi][bj]=='@')
			{
				p=1;
				mapp[bi][bj]=1;
				a[bi][bj]='#';
				fen++;
				bi++;
			}
			a[bi][bj]='*';
		}
		if(d==4)
		{
			a[ei][ej]=' ';
			mapp[ei][ej]=0;
			b[ei][ej]=0;
			hs();
			a[bi][bj]='#';
			bj++;
			if(a[bi][bj]=='#'||bj==20)	break;
			if(a[bi][bj]=='@')
			{
				p=1;
				mapp[bi][bj]=1;
				a[bi][bj]='#';
				fen++;
				bj++;
			}
			a[bi][bj]='*';
		}
		for(long long i=1;i<=20;i++)
		{
			for(long long j=1;j<=20;j++)
			{
				cout<<a[i][j];
			}
			if(i==4)	cout<<"    长按 W 向上";
			if(i==6)	cout<<"    长按 S 向下";
			if(i==8)	cout<<"    长按 A 向左";
			if(i==10)	cout<<"    长按 D 向右";
			if(i==13)	cout<<"    得分:"<<fen;
			if(maxfen<fen)	maxfen=fen;
			if(i==15)	cout<<"    得分记录:"<<maxfen;
			if(i==18)	cout<<"    L 退出";
			cout<<endl;
		}
	}
	system("color E");
	cout<<"!游戏结束!";
	_sleep(1000);
	system("color 7");
	system("cls");
	fen=0;
	return;
}
int main()
{
	system("mode con cols=40 lines=21");
	while(1)
	{
		if(jie==1)
		{
			jie=0;
			cout<<"                 贪吃蛇"<<endl<<"        K 开始"<<endl<<"        Z 作者简介";
		}
		if(KEY_DOWN('K'))
		{
			game();
			jie=1;
		}
		if(KEY_DOWN('Z'))
		{
			cout<<endl<<"    作者:何大帅"<<endl;
			cout<<"    据说他曾打败宇宙究极无敌暴龙战士..."<<endl;
		}
	}
	return 0;
}
