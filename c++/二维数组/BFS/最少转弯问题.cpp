#include<bits/stdc++.h>
using namespace std;
long long n,sx,sy,d[1000003][4],head,tail=1,a[1200][1200];
long long ax[5]={0,-1,1},ay[5]={0,0,0,1,-1},m;
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
	cin>>d[1][1]>>d[1][2]>>sx>>sy;
	a[d[1][1]][d[1][2]]=1;
	while(head<=tail)
	{
		head++;
		for(long long i=1;i<=4;i++)
		{
			long long xx=d[head][1]+ax[i];
			long long yy=d[head][2]+ay[i];
			while(xx>0&&xx<=n&&yy>0&&yy<=m&&a[xx][yy]==0)
			{
				tail++;
				d[tail][1]=xx;
				d[tail][2]=yy;
				d[tail][3]=d[head][3]+1;
				a[xx][yy]=1;
				if(xx==sx&&yy==sy)
				{
					cout<<d[tail][3]-1;
					return 0;
				}
				xx+=ax[i];
				yy+=ay[i];
			}
		}
	}
}
