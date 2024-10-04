#include<bits/stdc++.h>
using namespace std;
char a[103][103];
long long n,m,cnt,dd,d[10000][4];
long long ax[9]={0,1,0,-1,0,1,1,-1,-1},ay[9]={0,0,1,0,-1,1,-1,1,-1};
void bfs(long long x,long long y)
{
	long long head=0,tail=1;
	d[1][1]=x,d[1][2]=y;
	while(head<=tail)
	{
		head++;
		for(int i=1;i<=8;i++)
		{
			long long xx=d[head][1]+ax[i];
			long long yy=d[head][2]+ay[i];
			if(a[xx][yy]!='.'&&xx>0&&xx<=n&&yy>0&&yy<=m)
			{
				tail++;
				d[tail][1]=xx;
				d[tail][2]=yy;
				a[xx][yy]='.';
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
			cin>>a[i][j];
		}
	}
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=m;j++)
		{
			if(a[i][j]=='W')
			{
				a[i][j]='.';
				cnt++;
				bfs(i,j);
			}
		}
	}
	cout<<cnt;
	return 0;
}
