#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
char a[8][15];
void qingping(long long x,long long y)
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(handle,pos);
}
int main()
{
	system("mode con cols=18 lines=8");
	char c;
	int ii,jj,dd=1,iii,jjj,iiii,jjjj,wsdsg=100;
	for(int i=0;i<=6;i++)
	{
		for(int j=0;j<=13;j++)
		{
			a[i][j]='.';
		}
	}
	for(int i=0;i<=6;i++)
	{
		for(int j=0;j<=13;j++)
		{
			if(i==0||j==0||i==6||j==13)
			{
				a[i][j]='#';
			}
		}
	}
	a[3][7]='@';
	while(1)
	{
		srand((unsigned int)time(NULL));
		iii=rand()%4+1;
		srand((unsigned int)time(NULL));
		jjj=rand()%11+1;
		srand((unsigned int)time(NULL));
		iiii=rand()%3+2;
		srand((unsigned int)time(NULL));
		jjjj=rand()%10+2;
		a[iii][jjj]='o';
		int x=iii,y=jjj;
		a[iiii][jjjj]='*';
		if(iiii==iii&&jjjj==jjj)
		{
			for(int i=1;i<=5;i++)
			{
				for(int j=1;j<=12;j++)
				{
					a[i][j]='.';
				}
			}
			a[3][7]='@';
			continue;
		}
		if(iii==1&&jjj==1)
		{
			for(int i=1;i<=5;i++)
			{
				for(int j=1;j<=12;j++)
				{
					a[i][j]='.';
				}
			}
			a[3][7]='@';
			continue;
		}
		if(iii==5&&jjj==1)
		{
			for(int i=1;i<=5;i++)
			{
				for(int j=1;j<=12;j++)
				{
					a[i][j]='.';
				}
			}
			a[3][7]='@';
			continue;
		}
		if(iii==1&&jjj==12)
		{
			for(int i=1;i<=5;i++)
			{
				for(int j=1;j<=12;j++)
				{
					a[i][j]='.';
				}
			}
			a[3][7]='@';
			continue;
		}
		if(iii==5&&jjj==12)
		{
			for(int i=1;i<=5;i++)
			{
				for(int j=1;j<=12;j++)
				{
					a[i][j]='.';
				}
			}
			a[3][7]='@';
			continue;
		}
		if(iii==1)
		{
			if(iiii!=1)
			{
				for(int i=1;i<=5;i++)
				{
					for(int j=1;j<=12;j++)
					{
						a[i][j]='.';
					}
				}
				a[3][7]='@';
				continue;
			}
		}
		if(iii==5)
		{
			if(iiii!=5)
			{
				for(int i=1;i<=5;i++)
				{
					for(int j=1;j<=12;j++)
					{
						a[i][j]='.';
					}
				}
				a[3][7]='@';
				continue;
			}
		}
		if(jjj==1)
		{
			if(jjjj!=1)
			{
				for(int i=1;i<=5;i++)
				{
					for(int j=1;j<=12;j++)
					{
						a[i][j]='.';
					}
				}
				a[3][7]='@';
				continue;
			}
		}
		if(jjj==12)
		{
			if(jjjj!=12)
			{
				for(int i=1;i<=5;i++)
				{
					for(int j=1;j<=12;j++)
					{
						a[i][j]='.';
					}
				}
				a[3][7]='@';
				continue;
			}
		}
		while(a[iiii][jjjj]!='o')
		{
			system("color 7");
			_sleep(100);
			wsdsg=0;
			if(dd=1)
			{
				qingping(0,0);
				for(int i=0;i<=6;i++)
				{
					for(int j=0;j<=14;j++)
					{
						if(i==1&&j==14){cout<<"按";}if(i==2&&j==14){cout<<"r";}if(i==3&&j==14){cout<<"重";}if(i==4&&j==14){cout<<"置";}if(i==5&&j==14){cout<<"本";}if(i==6&&j==14){cout<<"关";}
						cout<<a[i][j];
						if(a[i][j]=='@')
						{
							ii=i;
							jj=j;
						}
					}
					cout<<endl;
				}
				dd=0;
				while(dd!=1)
				{
					if(ii!=iiii&&jj!=jjjj)
					{
						a[iiii][jjjj]='*';
					}
					if(ii!=iiii&&jj!=jjjj)
					{
						a[iiii][jjjj]='*';
					}
					if(KEY_DOWN('R'))
					{
						wsdsg=1;
						break;
					}
					if(KEY_DOWN('A'))
					{
						dd=1;
						if(iii==ii&&jjj+1==jj)
						{
							if(jjj!=1)
							{
								a[iii][jjj]='@';
								jjj=jjj-1;
								a[iii][jjj]='o';
								a[iii][jjj+2]='.';
							}
						}
						else
						{
							if(jj!=1)
							{
								a[ii][jj]='.';
								jj=jj-1;
								a[ii][jj]='@';
							}
						}
					}
					if(ii!=iiii&&jj!=jjjj)
					{
						a[iiii][jjjj]='*';
					}
					if(KEY_DOWN('D'))
					{
						dd=1;
						if(iii==ii&&jjj-1==jj)
						{
							if(jjj!=12)
							{
								a[iii][jjj]='@';
								jjj=jjj+1;
								a[iii][jjj]='o';
								a[iii][jjj-2]='.';
							}
						}
						else
						{
							if(jj!=12)
							{
								a[ii][jj]='.';
								jj=jj+1;
								a[ii][jj]='@';
							}
						}
					}
					if(ii!=iiii&&jj!=jjjj)
					{
						a[iiii][jjjj]='*';
					}
					if(KEY_DOWN('W'))
					{
						dd=1;
						if(jjj==jj&&iii+1==ii)
						{
							if(iii!=1)
							{
								a[iii][jjj]='@';
								iii=iii-1;
								a[iii][jjj]='o';
								a[iii+2][jjj]='.';
							}
						}
						else
						{
							if(ii!=1)
							{
								a[ii][jj]='.';
								ii=ii-1;
								a[ii][jj]='@';
							}
						}
					}
					if(ii!=iiii&&jj!=jjjj)
					{
						a[iiii][jjjj]='*';
					}
					if(KEY_DOWN('S'))
					{
						dd=1;
						if(jjj==jj&&iii-1==ii)
						{
							if(iii!=5)
							{
								a[iii][jjj]='@';
								iii=iii+1;
								a[iii][jjj]='o';
								a[iii-2][jjj]='.';
							}
						}
						else
						{
							if(ii!=5)
							{
								a[ii][jj]='.';
								ii=ii+1;
								a[ii][jj]='@';
							}
						}
					}
					if(ii!=iiii&&jj!=jjjj)
					{
						a[iiii][jjjj]='*';
					}
				}
			}
			if(wsdsg==1)
			{
				iii=x;
				jjj=y;
				for(int i=1;i<=5;i++)
				{
					for(int j=1;j<=12;j++)
					{
						a[i][j]='.';
					}
				}
				a[3][7]='@';
				a[iii][jjj]='o';
				a[iiii][jjjj]='*';
			}
		}
		cout<<"挑战成功!!!"<<endl<<endl;
		system("color e");
		system("pause");
		for(int i=1;i<=5;i++)
		{
			for(int j=1;j<=12;j++)
			{
				a[i][j]='.';
			}
		}
		a[3][7]='@';
	}
	return 0;
}
