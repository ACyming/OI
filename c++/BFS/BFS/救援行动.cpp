SRCDownload 
#include<bits/stdc++.h>
using namespace std;
long long n,m,nx,ny,d[100003][4],cnt,head,tail=1,bz[1200][1200];
long long ax[5]={0,-1,0,1,0},ay[5]={0,0,1,0,-1};
char a[1200][1200];
int main()
{
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='r')
			{
				nx=i,ny=j;
			}
		}
	}
	d[1][1]=nx;
	d[1][2]=ny;
	a[nx][ny]='#';
	while(head<=tail)
	{
		head++;
		if(a[d[head][1]][d[head][2]]=='x')
		{
			tail++;
			d[tail][1]=d[head][1];
			d[tail][2]=d[head][2];
			d[tail][3]=d[head][3]+1;
			a[d[head][1]][d[head][2]]='.';
			continue;
		}
		for(int i=1;i<=4;i++)
		{
			int xx=d[head][1]+ax[i],yy=d[head][2]+ay[i];
			if(xx>0&&xx<=n&&yy>0&&yy<=m&&bz[xx][yy]!=1&&a[xx][yy]!='#')
			{
				tail++;
				d[tail][1]=xx;
				d[tail][2]=yy;
				d[tail][3]=d[head][3]+1;
				if(a[xx][yy]=='a')
				{
					cout<<d[tail][3];
					return 0;
				}
				bz[xx][yy]=1;
			}
		}
	}
	cout<<"NO ANSWER";
	return 0;
}
