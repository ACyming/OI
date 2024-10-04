#include<bits/stdc++.h>
using namespace std;
long long n,bz[10][10],d[30000][3],cnt;
long long ax[10]={0,-2,-2,-1,1,2,2,-1,1};
long long ay[10]={0,-1,1,2,2,-1,1,-2,-2};
string k;
void bfs(long long sx,long long sy)
{
	long long head=0,tail=1;
	while(head<=tail)
	{
		head++;
		for(long long i=1;i<=8;i++)
		{
			long long xx=d[head][0]+ax[i];
			long long yy=d[head][1]+ay[i];
			if(xx>='1'&&xx<='8'&&yy>='a'&&yy<='h'&&bz[xx][yy]==0)
			{
				tail++;
				d[tail][0]=xx;
				d[tail][1]=yy;
				d[tail][2]=d[head][2]+1;
				bz[xx][yy]=1;
				if(xx==sx&&yy==sy)
				{
					cout<<"Board "<<cnt<<": "<<d[tail][2]<<" moves"<<endl;
					return;
				}
			}
		}
	}
	cout<<"Board "<<cnt<<": not reachable"<<endl;
}
int main()
{
	while(1)
	{
		cin>>n;
		if(n==-1)
		{
			break;
		}
		cnt++;
		for(long long i=1;i<=n;i++)
		{
			cin>>k;
			bz[k[1]][k[0]]=1;
		}
		cin>>k;
		d[1][0]=k[1],d[1][1]=k[0];
		cin>>k;
		bfs(k[1],k[0]);
		for(long long i='1';i<='8';i++)
		{
			for(long long j='a';j<='h';j++)
			{
				bz[i][j]=0;
			}
		}
		for(long long i=1;i<=3000;i++)
		{
			for(long long j=1;j<=3;j++)
			{
				d[i][j]=0;
			}
		}
	}
	return 0;
}
