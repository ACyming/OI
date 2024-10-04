#include<bits/stdc++.h>
using namespace std;
int n,m,maxx,nx[5]={0,1,-1,0,0},ny[5]={0,0,0,-1,1},bz[9999][9999];
char mp[9999][9999];
void bfs(long long x,int y)
{
	int head=0,tail=1,d[100000][3];
	d[1][1]=x,d[1][2]=y,mp[x][y]='.';
	while(head<=tail)
	{
		head++;
		for(int i=1;i<=4;i++)
		{
			int xx=d[head][1]+nx[i];
			int yy=d[head][2]+ny[i];
			if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&mp[xx][yy]=='*'&&bz[xx][yy]==0)
			{
				tail++;
				d[tail][1]=xx;
				d[tail][2]=yy;
				bz[xx][yy]=1;
			}
		}
	}
	maxx=max(maxx,tail);
}
int main() 
{
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>mp[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(mp[i][j]=='*')
			{
				bfs(i,j);
			}
		}
	}
	cout<<maxx;
	return 0;
}
