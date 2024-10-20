#include<bits/stdc++.h>
using namespace std;
int xx1[5]={0,1,-1,0,0};
int yy1[5]={0,0,0,1,-1};
int mapp[6][6];
long long int cnt2,n,m,ex,ey,rx,ry,t,sx,sy;
void dfs(long long int x,long long int y)
{
	if(x==ex&&y==ey)
	{
		++cnt2;
		return; 
	}
	for(int i=1;i<=4;i++)
	{
		long long int xx=x+xx1[i];
		long long int yy=y+yy1[i];
		if(xx>0&&xx<=n&&yy>0&&yy<=m&&mapp[xx][yy]==0)
		{
			mapp[xx][yy]=1;
			dfs(xx,yy);
			mapp[xx][yy]=0;
		}
	}
}
int main()
{
	cin>>n>>m>>t>>rx>>ry>>ex>>ey;
	mapp[rx][ry]=1;
	for(int i=1;i<=t;i++)
	{
		cin>>sx>>sy;
		mapp[sx][sy]=1;
	}
	dfs(rx,ry);
	cout<<cnt2;
	return 0;
}
