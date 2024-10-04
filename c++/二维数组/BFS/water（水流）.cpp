#include<bits/stdc++.h>
using namespace std;
long long k,n,m,d[100000][4],ax[5]={0,1,-1,0,0},ay[5]={0,0,0,1,-1},cnt;
char a[100000];
char mapp[52][52];
void bfs(long long nx,long long ny)
{
	long long head=0,tail=1;
	d[1][1]=nx,d[1][2]=ny,d[1][3]=0,a[1]=mapp[nx][ny];
	while(head<tail)
	{
		head++;
		for(long long i=1;i<=4;i++)
		{
			long long xx=d[head][1]+ax[i];
			long long yy=d[head][2]+ay[i];
			if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&mapp[xx][yy]!='#'&&a[head]<=mapp[xx][yy])
			{
				tail++;
				d[tail][1]=xx;
				d[tail][2]=yy;
				a[tail]=mapp[xx][yy];
				mapp[xx][yy]='#';
			}
		}
	}
}
int main()
{
	cin>>k;
	for(long long t=1;t<=k;t++)
	{
		cin>>n>>m;
		cnt=0;
		memset(d,0,sizeof(d));
		memset(a,0,sizeof(a));
		for(long long i=1;i<=n;i++)
		{
			for(long long j=1;j<=m;j++)
			{
				cin>>mapp[i][j];
			}
		}
		for(long long l='a';l<='z';l++)
		{
			for(long long i=1;i<=n;i++)
			{
				for(long long j=1;j<=m;j++)
				{
					if(mapp[i][j]==l)
					{
						mapp[i][j]='#';
						cnt++;
						bfs(i,j);
					}
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
