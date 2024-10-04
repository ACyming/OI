#include<bits/stdc++.h>
#include<windows.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
int ii=9,jj=2,d,k=9,asd=2;
char a[1000][1000];
bool as;
void qingping(long long x,long long y)
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(handle,pos);
}
void go()
{
	_sleep(100);
	d=0;
	if(KEY_DOWN('A')&&a[ii][jj-1]!='#')
	{
		a[ii][jj]=' ';
		a[ii][jj-1]='@';
		jj--;
		d=1;
	}
	if(KEY_DOWN('S')&&a[ii+1][jj]!='#'&&as==1)
	{
		a[ii][jj]=' ';
		a[ii+1][jj]='@';
		ii++;
		d=1;
	}
	if(KEY_DOWN('D')&&a[ii][jj+1]!='#')
	{
		a[ii][jj]=' ';
		a[ii][jj+1]='@';
		jj++;
		d=1;
	}
	if(d==1)
	{
		qingping(0,0);
		for(int i=1;i<=10;i++)
		{
			for(int j=1;j<=50;j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}
		d=0;
	}
	if(KEY_DOWN('V'))
	{
		for(int i=2;i<=9;i++)
		{
			for(int j=2;j<=49;j++)
			{
				if(i==ii&&j==jj)
				{
					continue;
				}
				a[i][j]=' ';
			}
		}
		qingping(0,0);
		for(int i=1;i<=10;i++)
		{
			for(int j=1;j<=50;j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}
	}
	if(KEY_DOWN('I'))
	{
		if(a[ii-1][jj]=='#'&&as==1)
		{
			a[ii-1][jj]=' ';
		}
		else
		{
			a[ii-1][jj]='#';
		}
		_sleep(50);
		d=1;
	}
	if(KEY_DOWN('K'))
	{
		_sleep(50);
		if(a[ii+1][jj]=='#'&&as==1)
		{
			a[ii+1][jj]=' ';
		}
		else
		{
			a[ii+1][jj]='#';
		}
		d=1;
	}
	if(KEY_DOWN('J'))
	{
		_sleep(50);
		if(a[ii][jj-1]=='#'&&as==1)
		{
			a[ii][jj-1]=' ';
		}
		else
		{
			a[ii][jj-1]='#';
		}
		d=1;
	}
	if(KEY_DOWN('L'))
	{
		_sleep(50);
		if(a[ii][jj+1]=='#'&&as==1)
		{
			a[ii][jj+1]=' ';
		}
		else
		{
			a[ii][jj+1]='#';
		}
		d=1;
	}
	if(KEY_DOWN('C'))
	{
		as=!as;
		if(as==1)
		{
			asd=1;
		}
		else
		{
			asd=2;
		}
		_sleep(50);
	}
	if(d==1)
	{
		qingping(0,0);
		for(int i=1;i<=10;i++)
		{
			for(int j=1;j<=50;j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}
		d=0;
	}
}
int main()
{
	system("mode con cols=51 lines=11");
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=50;j++)
		{
			if(i==1||j==1||j==50||i==10)
			
		
			{
				a[i][j]='#';
			}
			else
			{
				a[i][j]=' ';
			}
		}
	}
	a[9][2]='@';
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=50;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	while(1)
	{
		go();
		if(KEY_DOWN('W'))
		{
			for(int kk=1;kk<=asd;kk++)
			{
				if(a[ii-1][jj]=='#')
				{
					break;
				}
				ii--;
				a[ii+1][jj]=' ';
				a[ii][jj]='@';
				if(a[ii-1][jj]=='#')
				{
					qingping(0,0);
					for(int i=1;i<=10;i++)
					{
						for(int j=1;j<=50;j++)
						{
							cout<<a[i][j];
						}
						cout<<endl;
					}
					break;
				}
				qingping(0,0);
				for(int i=1;i<=10;i++)
				{
					for(int j=1;j<=50;j++)
					{
						cout<<a[i][j];
					}
					cout<<endl;
				}
				if(d==1)
				{
					qingping(0,0);
					for(int i=1;i<=10;i++)
					{
						for(int j=1;j<=50;j++)
						{
							cout<<a[i][j];
						}
						cout<<endl;
					}
					d=0;
				}
				go();
				_sleep(100);
			}
		}
		if(as==0)
		{
			while(a[ii+1][jj]!='#')
			{
				ii++;
				a[ii-1][jj]=' ';
				a[ii][jj]='@';
				if(a[ii+1][jj]=='#')
				{
					qingping(0,0);
					for(int i=1;i<=10;i++)
					{
						for(int j=1;j<=50;j++)
						{
							cout<<a[i][j];
						}
						cout<<endl;
					}
					break;
				}
				qingping(0,0);
				for(int i=1;i<=10;i++)
				{
					for(int j=1;j<=50;j++)
					{
						cout<<a[i][j];
					}
					cout<<endl;
				}
				_sleep(100);
				go();
			}
		}
		if(d==1)
		{
			qingping(0,0);
			for(int i=1;i<=10;i++)
			{
				for(int j=1;j<=50;j++)
				{
					cout<<a[i][j];
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
