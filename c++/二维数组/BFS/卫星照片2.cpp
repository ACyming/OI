#include<bits/stdc++.h>
using namespace std;

int ans,n,xx,yy,maxn,m;
char mp[9999][9999];
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
void dfs(int x,int y)
{
	for(int i=0;i<8;i++)
	{
		xx=x+dx[i];
		yy=y+dy[i];
		if(mp[xx][yy]=='*'&&xx<=n&&xx>=1&&yy<=n&&yy>=1)
		{
			mp[x][y]='.';
			dfs(xx,yy);
			ans++;
			maxn=max(maxn,ans);
		}
	}
	ans=0;
	return ;
	
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%c",&mp[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(mp[i][j]=='*')
			{
				dfs(i,j);
			}	
		}
	}
	
	printf("%d",maxn);
}
