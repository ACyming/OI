#include<bits/stdc++.h>
using namespace std;
long long n,m,a[105][105],f[105][105],maxx=-1,ax[5]={0,1,-1,0,0},ay[5]={0,0,0,1,-1};
long long dfs(long long x,long long y)
{
	if(f[x][y]!=0)	return f[x][y];
	long long t=1;
	for(long long i=1;i<=4;i++)
	{
		long long xx=x+ax[i];
		long long yy=y+ay[i];
		if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&a[xx][yy]<a[x][y])
		{
			t=max(t,dfs(xx,yy)+1);
		}
	}
	return t;
}
int main()
{
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=m;j++)
		{
			f[i][j]=max(f[i][j],dfs(i,j));
			maxx=max(maxx,f[i][j]);
		}
	}
	cout<<maxx;
	return 0;
}
