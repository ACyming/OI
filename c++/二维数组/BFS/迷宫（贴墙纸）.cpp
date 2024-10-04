#include<bits/stdc++.h>
using namespace std;
long long n,d[100000][4],bz[100][100],cnt;
long long ax[5]={0,1,-1,0,0},ay[5]={0,0,0,1,-1};
char mapp[100][100];
void bfs(long long nx,long long ny)
{
	long long head=0,tail=1;
	if(bz[nx][ny]==0)
	{
		for(long long j=1;j<=4;j++)
		{
			if(mapp[nx+ax[j]][ny+ay[j]]=='#')
			{
				cnt++;
			}
		}
	}
	d[1][1]=nx,d[1][2]=ny,bz[nx][ny]=1;
	while(head<tail)
	{
		head++;
		for(long long i=1;i<=4;i++)
		{
			long long xx=d[head][1]+ax[i];
			long long yy=d[head][2]+ay[i];
			if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&bz[xx][yy]==0&&mapp[xx][yy]=='.')
			{
				tail++;
				d[tail][1]=xx;
				d[tail][2]=yy;
				for(long long j=1;j<=4;j++)
				{
					if(mapp[xx+ax[j]][yy+ay[j]]=='#')
					{
						cnt++;
					}
				}
				bz[xx][yy]=1;
			}
		}
	}
}
int main()
{
	cin>>n;
	for(long long i=0;i<=n+1;i++)
	{
		for(long long j=0;j<=n+1;j++)
		{
			if(i==0||j==0||i==n+1||j==n+1)	mapp[i][j]='#';
			else	cin>>mapp[i][j];
		}
	}
	mapp[0][0]=' ',mapp[0][1]=' ',mapp[1][0]=' ',mapp[n+1][n+1]=' ',mapp[n][n+1]=' ',mapp[n+1][n]=' ';
	bfs(1,1);
	memset(d,0,sizeof(d));
	bfs(n,n);
	cout<<cnt*9;
	return 0;
}
