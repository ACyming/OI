#include<bits/stdc++.h>
using namespace std;
long long mapp[6][6],cnt,ax[5]={0,1,-1,0,0},ay[5]={0,0,0,-1,1},a[7];
bool bz[10][10][10][10][10][10];
void dfs(long long x,long long y,long long s)
{
	if(s==7)
	{
		if(bz[a[1]][a[2]][a[3]][a[4]][a[5]][a[6]]==0)
		{
			bz[a[1]][a[2]][a[3]][a[4]][a[5]][a[6]]=1;
			cnt++;
		}
		return;
	}
	for(long long i=1;i<=4;i++)
	{
		long long xx=x+ax[i];
		long long yy=y+ay[i];
		if(xx>=1&&xx<=5&&yy>=1&&yy<=5)
		{
			a[s]=mapp[xx][yy];
			dfs(xx,yy,s+1);
		}
	}
}
int main()
{
	for(long long i=1;i<=5;i++)
	{
		for(long long j=1;j<=5;j++)
		{
			cin>>mapp[i][j];
		}
	}
	for(long long i=1;i<=5;i++)
	{
		for(long long j=1;j<=5;j++)
		{
			a[1]=mapp[i][j];
			dfs(i,j,2);
		}
	}
	cout<<cnt;
	return 0;
}
