#include<bits/stdc++.h>
using namespace std;
long long head=0,tail=1,n,m,mapp[54][54],nx,ny,ax[5]={0,1,0,-1,0},ay[5]={0,0,1,0,-1},d[10000][2];
char a[54][54];
int main()
{
	cin>>m>>n;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='@')
			{
				nx=i,ny=j;
			}
			if(a[i][j]=='#')
			{
				mapp[i][j]=1;
			}
		}
	}
	d[1][0]=nx;
	d[1][1]=ny;
	mapp[nx][ny]=1;
	while(head<=tail)
	{
		head++;
		for(int i=1;i<=4;i++)
		{
			int xx=d[head][0]+ax[i];
			int yy=d[head][1]+ay[i];
			if(mapp[xx][yy]==0&&xx>0&&yy>0&&xx<=n&&yy<=m)
			{
				tail++;
				d[tail][0]=xx;
				d[tail][1]=yy;
				mapp[xx][yy]=1;
			}
		}
	}
	cout<<tail;
	return 0;
}
