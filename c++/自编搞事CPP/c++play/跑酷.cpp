#include<bits/stdc++.h>
#include<windows.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
long ii=9,jj=1,d,k=9,si,sj,gk=1,qiao,biaoji1,biaoji2,daqiaox,daqiaoy,sx,sy,sudux,ppp,suduy,tiaoyuey,tiaoyuex,p,asd,bj=1,iii,jjj;
char a[1000][1000];
void qingping(long long x,long long y)
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(handle,pos);
}
void SetColorAndBackground(int ForgC,int BackC)
{
	WORD wColor=((BackC&0x0F)<<4)+(ForgC&0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),wColor);
}
void cou()
{
	qingping(0,0);
	for(int i=1;i<=22;i++)
	{
		for(int j=1;j<=50;j++)
		{
			if(daqiaox==i&&daqiaoy==j)
			{
				SetColorAndBackground(14,0);
				cout<<a[i][j];
				continue;
			}
			if(sudux==i&&suduy==j||p==3&&i==ii&&j==jj||p==3&&i==iii&&j==jjj)
			{
				SetColorAndBackground(3,0);
				cout<<a[i][j];
				continue;
			}
			if(tiaoyuex==i&&tiaoyuey==j||asd==4&&i==ii&&j==jj||asd==4&&i==iii&&j==jjj)
			{
				SetColorAndBackground(10,0);
				cout<<a[i][j];
				continue;
			}
			if(qiao==1)
			{
				a[20][21]='#',a[20][23]='#',a[20][25]='#',a[20][26]='#',a[20][28]='#',a[20][29]='#',a[20][33]='#';
			}
			else
			{
				a[20][21]=' ',a[20][23]=' ',a[20][25]=' ',a[20][26]=' ',a[20][28]=' ',a[20][29]=' ',a[20][33]=' ';
			}
			SetColorAndBackground(7,0);
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
void go()
{
	d=0;
	for(int i=1;i<=p;i++)
	{
		if(KEY_DOWN(VK_LEFT)&&a[iii][jjj-1]!='#'&&a[iii][jjj-1]!='@')
		{
			a[iii][jjj]=' ';
			a[iii][jjj-1]='&';
			jjj--;
			d=1;
		}
		if(KEY_DOWN(VK_RIGHT)&&a[iii][jjj+1]!='#'&&a[iii][jjj+1]!='@')
		{
			a[iii][jjj]=' ';
			a[iii][jjj+1]='&';
			jjj++;
			d=1;
		}
		if(KEY_DOWN('A')&&a[ii][jj-1]!='#'&&a[ii][jj-1]!='&')
		{
			a[ii][jj]=' ';
			a[ii][jj-1]='@';
			jj--;
			d=1;
		}
		if(KEY_DOWN('D')&&a[ii][jj+1]!='#'&&a[ii][jj+1]!='&')
		{
			a[ii][jj]=' ';
			a[ii][jj+1]='@';
			jj++;
			d=1;
		}
		if(biaoji1==0&&KEY_DOWN('W'))
		{
			biaoji1=1;
			for(int kk=1;kk<=asd;kk++)
			{
				if(a[ii-1][jj]=='&')
				{
					if(a[ii-2][jj]=='#')
					{
						break;
					}
					iii--;
					a[iii+1][jjj]=' ';
					a[iii][jjj]='&';
				}
				if(a[ii-1][jj]=='#'||a[ii-1][jj]=='^')
				{
					cou();
					break;
				}
				ii--;
				a[ii+1][jj]=' ';
				a[ii][jj]='@';
				cou();
				go();
				_sleep(100);
			}
		}
		if(biaoji2==0&&KEY_DOWN(VK_UP))
		{
			biaoji2=1;
			for(int kk=1;kk<=asd;kk++)
			{
				if(a[iii-1][jjj]=='@')
				{
					if(a[iii-2][jjj]=='#')
					{
						break;
					}
					ii--;
					a[ii+1][jj]=' ';
					a[ii][jj]='@';
				}
				if(a[iii-1][jjj]=='#'||a[iii-1][jjj]=='^')
				{
					cou();
					break;
				}
				iii--;
				a[iii+1][jjj]=' ';
				a[iii][jjj]='&';
				cou();
				go();
				_sleep(100);
			}
		}
		if(d==1)
		{
			cou();
			d=0;
		}
		if(daqiaox==iii+1&&daqiaoy==jjj&&gk==4||daqiaox==ii+1&&daqiaoy==jj&&gk==4)
		{
			if(qiao==0)
			{
				qiao=1;
				cou();
			}
		}
		else
		{
			if(qiao==1)
			{
				qiao=0;
				cou();
			}
		}
		if(sudux==ii+1&&suduy==jj||sudux==iii+1&&suduy==jjj)
		{
			if(p!=3)
			{
				p=3;
				asd=2;
				cou();
			}
		}
		if(tiaoyuex==ii+1&&tiaoyuey==jj||tiaoyuex==iii+1&&tiaoyuey==jjj&&asd!=4)
		{
			p=1;
			asd=4;
			cou();
		}
	}
}
void play()
{
	while(1)
	{
		go();
		if(a[ii+1][jj]!='#'&&a[ii+1][jj]!='&')
		{
			biaoji1=1;
		}
		if(a[iii+1][jjj]!='#'&&a[iii+1][jjj]!='@')
		{
			biaoji2=1;
		}
		while(biaoji1==1||biaoji2==1)
		{
			if(a[ii+1][jj]=='^'||a[iii+1][jjj]=='^')
			{
				a[ii][jj]=' ';
				a[iii][jjj]=' ';
				d=1;
				return;
			}
			if(a[ii+1][jj]!='#'&&a[ii+1][jj]!='&')
			{
				ii++;
				a[ii-1][jj]=' ';
				a[ii][jj]='@';
				if(ii==22)
				{
					a[ii][jj]=' ';
					a[iii][jjj]=' ';
					d=1;
					return;
				}
				cou();
				go();
			}
			else
			{
				biaoji1=0;
			}
			if(a[iii+1][jjj]!='#'&&a[iii+1][jjj]!='@')
			{
				iii++;
				a[iii-1][jjj]=' ';
				a[iii][jjj]='&';
				if(iii==22)
				{
					a[ii][jj]=' ';
					a[iii][jjj]=' ';
					d=1;
					return;
				}
				cou();
				go();
			}
			else
			{
				biaoji2=0;
			}
			_sleep(100);
		}
		if(d==1)
		{
			cou();
		}
		if(ii==sx&&jj==sy||iii==sx&&jjj==sy)
		{
			gk++;
			for(int i=1;i<=23;i++)
			{
				for(int j=1;j<=50;j++)
				{
					a[i][j]=' ';
				}
			}
			bj=1;
			return;
		}
	}
}
int main()
{
	system("mode con cols=51 lines=23");
	for(int i=1;i<=22;i++)
	{
		for(int j=1;j<=50;j++)
		{
			a[i][j]=' ';
		}
	}
	while(1)
	{
		if(gk==1)
		{
			ii=20,iii=20,jjj=2,jj=1,p=1,asd=2;
			a[20][1]='@';
			a[20][2]='&';
			if(bj==1)
			{
				system("cls");
				cout<<"教学关卡"<<endl<<endl<<"A   左移"<<endl<<endl<<"B   右移"<<endl<<endl<<"W   跳跃"<<endl<<endl;
				system("pause");
				bj=0;
			}
			sx=20,sy=48;
			a[20][48]='*';
			for(int i=1;i<=48;i++)
			{
				a[21][i]='#';
			}
			a[20][7]='#';
			a[20][8]='#';
			a[20][9]='#';
			a[19][8]='#';
			a[20][21]='#';
			a[19][21]='#';
			a[19][37]='#';
			a[20][38]='#';
			a[19][38]='#';
			a[18][38]='#';
		}
		if(gk==2)
		{
			ii=20,iii=20,jjj=2,jj=1,p=1,asd=2;
			a[20][1]='@';
			a[20][2]='&';
			if(bj==1)
			{
				system("cls");
				cout<<"难度上升"<<endl;
				system("pause");
				bj=0;
			}
			sx=14,sy=48;
			a[14][48]='*';
			a[21][1]='#';
			a[21][2]='#';
			a[21][3]='#';
			a[20][5]='#';
			a[19][7]='#';
			a[19][9]='#';
			a[19][12]='#';
			a[20][15]='#';
			a[20][3]='#';
			a[18][17]='#';
			a[18][18]='#';
			a[18][19]='#';
			a[18][21]='#';
			a[18][23]='#';
			a[16][25]='#';
			a[16][26]='#';
			a[16][28]='#';
			a[16][29]='#';
			a[16][32]='#';
			a[15][33]='#';
			a[15][34]='#';
			a[15][35]='#';
			a[15][37]='#';
			a[15][38]='#';
			a[15][41]='#'; 
			a[14][43]='#';
			a[15][46]='#';
			a[15][47]='#';
			a[15][48]='#';
		}
		if(gk==3)
		{
			ii=20,iii=20,jjj=2,jj=1,p=1,asd=2;
			a[20][1]='@';
			a[20][2]='&';
			if(bj==1)
			{
				system("cls");
				cout<<"教学关卡"<<endl<<"特殊方块"<<endl<<endl;
				SetColorAndBackground(3,0);
				cout<<"# 速度属性"<<endl<<endl;
				SetColorAndBackground(10,0);
				cout<<"# 跳跃属性"<<endl<<endl;
				SetColorAndBackground(7,0);
				system("pause");
				sx=9,sy=48;
				sudux=21,suduy=4,tiaoyuex=21,tiaoyuey=24;
				bj=0;
			}
			sx=20,sy=48; 
			a[20][48]='*';
			for(int i=1;i<=48;i++)
			{
				a[21][i]='#';
			}
			a[21][6]=' ';
			a[21][7]=' ';
			a[21][8]=' ';
			a[21][9]=' ';
			a[21][13]=' ';
			a[21][14]=' ';
			a[21][15]=' ';
			a[21][16]=' ';
			a[21][17]=' ';
			a[20][28]='#';
			a[19][28]='#';
			a[18][28]='#';
			a[17][38]='#';
			a[20][38]='#';
			a[19][38]='#';
			a[18][38]='#';
		}
		if(gk==4)
		{
			ii=11,iii=20,jjj=1,jj=1,p=1,asd=2;
			a[ii][jj]='@';
			a[iii][jjj]='&';
			if(bj==1)
			{
				system("cls");
				cout<<"实践"<<endl;
				system("pause");
				bj=0;
			}
			sx=14,sy=36;
			sudux=9,suduy=9,tiaoyuex=21,tiaoyuey=4,daqiaox=20,daqiaoy=22;
			a[daqiaox][daqiaoy]='#';
			a[sudux][suduy]='#';
			a[tiaoyuex][tiaoyuey]='#';
			for(int i=1;i<=48;i++)
			{
				a[13][i]='^';
			}
			a[12][1]='#';
			a[9][5]='#';
			a[9][10]='#';
			a[9][11]='#';
			a[21][1]='#';
			a[20][7]='#';
			a[20][20]='#';
			a[19][36]='#'; 
			a[14][36]='*';
			}
		cou();
		play();
	}
	return 0;
}
