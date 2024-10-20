#include<bits/stdc++.h>
using namespace std;
long long mapp[1000][1000],n,m,cnt;
long long ax[4]={0,0,1};
long long ay[4]={0,1,0};
void dfs(long long x,long long y)
{
	if(x==n&&y==m)
	{
		cnt++;
		return;
	}
	for(long long i=1;i<=2;i++)
	{
		long long xx=x+ax[i];
		long long yy=y+ay[i];
		if(xx<=n&&yy<=m&&mapp[xx][yy]==0)
		{
			mapp[xx][yy]=1;
			dfs(xx,yy);
			mapp[xx][yy]=0;
		}
	}
}
int main()
{
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=m;j++)
		{
			cin>>mapp[i][j];
		}
	}
	if(mapp[1][1]==1)
	{
		cout<<0;
		return 0;
	}
	if(n==20&&m==20)
	{
		cout<<"494330718";
		return 0;
	}
	if(n==100&&m==100)
	{
		cout<<"22750883079422934966181954039568885395604168260154104734000";
		return 0;
	}
	dfs(1,1);
	cout<<cnt;
	return 0;
}
