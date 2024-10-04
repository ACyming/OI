#include<bits/stdc++.h>
#include<windows.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
char a[1000][1000];
int main()
{
	system("mode con cols=28 lines=40");
	int i=2,j,fs=0;
	for(int ii=1;ii<=30;ii++)
	{
		for(int jj=1;jj<=27;jj++)
		{
			if(jj==1||jj==27)
				a[ii][jj]='';
			else
				a[ii][jj]=' ';
		}
	}
	while(1)
	{
		if(i==2)
		{
			srand((unsigned)time(NULL));
			j=(rand()%(20))+4;
			a[i][j]='';
			_sleep(100);
		}
		while(a[i+1][j]==' '&&a[i+1][j+1]==' '&&a[i+1][j-1]==' ')
		{
			_sleep(50);
			a[i][j]=' ';
			i++;
			a[i][j]='';
			if(KEY_DOWN('A')&&a[i][j-2]!='')
			{    	
				a[i][j]=' ';
			  	j-=1;
			  	a[i][j]='';
			}
			if(KEY_DOWN('D')&&a[i][j+2]!='')
			{
				a[i][j]=' ';
			  	j+=1;
			  	a[i][j]='';
			}
			if(KEY_DOWN('S'))
			{
				a[i][j]=' ';
				while(a[i+1][j]==' '&&a[i+1][j+1]==' '&&a[i+1][j-1]==' ')
				{
					i++;
				}
				a[i][j]='';
			}
			system("cls");
			cout<<"             "<<endl; 
			for(int ii=1;ii<=30;ii++)
			{
				for(int jj=1;jj<=27;jj++)
				{
					cout<<a[ii][jj];
				}
				cout<<endl;
			}
			cout<<"             "<<endl<<endl;
			cout<<"# A 向左移动  D 向右移动 #"<<endl;
			cout<<"# S 快速落下  W 旋转方块 #"<<endl;
			cout<<"# 得 分 : "<<fs<<endl;
			cout<<"##########################";
			for(int ii=1;ii<=30;ii++)
			{
				int d=0;
				for(int jj=3;jj<=25;jj=jj+2)
				{
					if(a[ii][jj]==' ')
					{
						d=1;
						break;
					}
				}
				if(d==0)
				{
					fs=fs+10;
					for(int jj=3;jj<=25;jj=jj+2)
					{
						a[ii][jj]=' ';
					}
				}
			}
		}
		i=2;
	}
	return 0;
}
