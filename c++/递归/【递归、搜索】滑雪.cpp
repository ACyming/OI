#include<bits/stdc++.h>
using namespace std;
long long n,m,ans;
long long a[1001][1001],f[1001][1001];
long long dx[4]={1,-1,0,0};
long long dy[4]={0,0,1,-1};
int dfs(long long x,long long y)
{
	if(f[x][y]!=0)
	{
		return f[x][y];
	}
	int t=1;
	for(long long i=0;i<4;i++)
	{
		long long xx=x+dx[i];
		long long yy=y+dy[i];
		if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&a[xx][yy]>a[x][y])
		{
			t=max(t,dfs(xx,yy)+1);
		}
	}
	f[x][y]=t;
	return f[x][y];
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
			f[i][j]=dfs(i,j);
			ans=max(ans,f[i][j]);
		}
	}
	cout<<ans; 
	return 0;
}
