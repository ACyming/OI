#include<bits/stdc++.h>
using namespace std;
long long n,f[21][21],bz[21],minn=10000;
void dfs(long long x,long long y)
{
	if(x==n+1)
	{
		if(y<minn)
		{
			minn=y;
		}
		return;
	}
	if(y>minn)
	{
		return;
	}
	else
	{
		for(long long i=1;i<=n;i++)
		{
			if(bz[i]==0)
			{
				bz[i]=1;
				dfs(x+1,y+f[x][i]);
				bz[i]=0;
			}
		}
		return;
	}
}
int main()
{
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=n;j++)
		{
			cin>>f[i][j];
		}
	}
	dfs(1,0);
	cout<<minn;
	return 0;
}
