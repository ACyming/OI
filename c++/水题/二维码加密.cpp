#include<bits/stdc++.h>
using namespace std;
int yint[1000],ly[10200][100],cnt,len;
char ychar[100];
int main()
{
	gets(ychar+1);
	len=strlen(ychar+1);
	for(int i=1;i<=len;i++)
	{
		yint[i]=ychar[i];
	}
	for(int i=1;i<=len;i++)
	{
		if(yint[i]>=128)
		{
			ly[i][1]=1;
			yint[i]-=128;
		}
		if(yint[i]>=64)
		{
			ly[i][2]=1;
			yint[i]-=64;
		}
		if(yint[i]>=32)
		{
			ly[i][3]=1;
			yint[i]-=32;
		}
		if(yint[i]>=16)
		{
			ly[i][4]=1;
			yint[i]-=16;
		}
		if(yint[i]>=8)
		{
			ly[i][5]=1;
			yint[i]-=8;
		}
		if(yint[i]>=4)
		{
			ly[i][6]=1;
			yint[i]-=4;
		}
		if(yint[i]>=2)
		{
			ly[i][7]=1;
			yint[i]-=2;
		}
		if(yint[i]>=1)
		{
			ly[i][8]=1;
			yint[i]-=1;
		}
		for(int j=1;j<=8;j++)
		{
			if(j>cnt&&ly[i][j]==1)
			{
				cnt=j;
				break;
			}
		}
	}
	cout<<cnt<<endl; 
	if(cnt==8)
	{
		cout<<"00010001";
	}
	if(cnt==7)
	{
		cout<<"01110111";
	}
	if(cnt==6)
	{
		cout<<"00110011";
	}
	if(cnt==5)
	{
		cout<<"01010101";
	}
	if(cnt==4)
	{
		cout<<"00100010";
	}
	if(cnt==3)
	{
		cout<<"11001100";
	}
	if(cnt==2)
	{
		cout<<"01000100";
	}
	if(cnt==1)
	{
		cout<<"10111011";
	}
	for(int i=1;i<=len;i++)
	{
		for(int j=1;j<=cnt;j++)
		{
			cout<<ly[i][j];
		}
		cout<<endl;
	}
 } 
