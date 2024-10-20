#include<bits/stdc++.h>
using namespace std;
char mapp[65][65];
long long n,m,ax[5]={0,0,0,1,-1},ay[5]={0,1,-1,0,0},cnt,d[1000][3];
void bfs(long long x,long long y)
{
	long long head=0,tail=1;
	d[1][1]=x;
	d[1][2]=y;
	mapp[x][y]='0';
	while(head<=tail)
	{
		head++;
		for(int i=1;i<=4;i++)
		{
			long long xx=d[head][1]+ax[i];
			long long yy=d[head][2]+ay[i];
			if(mapp[xx][yy]!='0'&&xx>0&&xx<=n&&yy>0&&yy<=m)
			{
				tail++;
				d[tail][1]=xx;
				d[tail][2]=yy;
				mapp[xx][yy]='0';
			}
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
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=m;j++)
		{
			if(mapp[i][j]!='0')
			{
				cnt++;
				bfs(i,j);
			}
		}
	}
	cout<<cnt;
	return 0;
}
